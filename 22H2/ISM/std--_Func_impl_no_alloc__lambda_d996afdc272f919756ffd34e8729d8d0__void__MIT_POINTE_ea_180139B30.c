/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call @ 0x180139B30
 * Callers:
 *     <none>
 * Callees:
 *     ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x1800C4490 (-PointerTypeToInputType@@YA-AW4InputType@@K_N@Z.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z @ 0x180138CA0 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z.c)
 */

unsigned __int8 __fastcall std::_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  __int64 v4; // r11

  v2 = PointerTypeToInputType(*(_DWORD *)(*(_QWORD *)a2 + 16LL), 0);
  return DWMInputRouter::OnPointerInputDown(
           *(_QWORD *)(v4 + 8),
           *(_DWORD *)v3,
           *(_DWORD *)(v3 + 8),
           v2,
           *(_QWORD *)(v3 + 20));
}
