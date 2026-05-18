/*
 * XREFs of sub_18012500A @ 0x18012500A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B598 @ 0x18007B598 (sub_18007B598.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012500A(__int64 a1, __int64 a2)
{
  sub_18007B598(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
