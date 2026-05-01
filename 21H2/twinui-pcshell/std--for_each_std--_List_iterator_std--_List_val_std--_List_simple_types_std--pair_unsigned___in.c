/*
 * XREFs of std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData_________lambda_8ded4d93739c225b374c706a19b0781a___ @ 0x1800E6860
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800EABCC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 * Callees:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800E3C2C (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 */

_OWORD *__fastcall std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData_________lambda_8ded4d93739c225b374c706a19b0781a___(
        _OWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _OWORD *result; // rax
  __int128 v9; // xmm1

  while ( a2 != a3 )
  {
    lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____(
      (_QWORD *)a4,
      a2 + 2);
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  v9 = *(_OWORD *)(a4 + 16);
  *a1 = *(_OWORD *)a4;
  a1[1] = v9;
  return result;
}
