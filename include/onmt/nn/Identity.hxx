#pragma once

namespace onmt
{
  namespace nn
  {

    template <typename MatFwd>
    Identity<MatFwd>::Identity()
      : Module<MatFwd>("nn.Identity")
    {
    }

    template <typename MatFwd>
    std::vector<MatFwd> Identity<MatFwd>::forward(std::vector<MatFwd>& input) const
    {
      return Module<MatFwd>::wrap_return(input);
    }

  }
}
