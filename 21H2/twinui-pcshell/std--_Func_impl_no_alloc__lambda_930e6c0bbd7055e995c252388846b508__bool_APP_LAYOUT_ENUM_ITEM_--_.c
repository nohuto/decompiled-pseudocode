/*
 * XREFs of std::_Func_impl_no_alloc__lambda_930e6c0bbd7055e995c252388846b508__bool_APP_LAYOUT_ENUM_ITEM_::_Move @ 0x1800D8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_930e6c0bbd7055e995c252388846b508__bool_APP_LAYOUT_ENUM_ITEM_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180506BC8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  return result;
}
