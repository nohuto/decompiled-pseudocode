/*
 * XREFs of sub_18012906B @ 0x18012906B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B51C @ 0x18007B51C (sub_18007B51C.c)
 *     sub_18007BBFC @ 0x18007BBFC (sub_18007BBFC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012906B(__int64 a1, __int64 a2)
{
  sub_18007B51C(*(_QWORD *)(a2 + 56), *(_QWORD **)(a2 + 40), *(_QWORD **)(a2 + 88));
  sub_18007BBFC(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 48));
  throw;
}
