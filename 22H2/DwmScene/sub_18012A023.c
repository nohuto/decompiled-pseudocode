/*
 * XREFs of sub_18012A023 @ 0x18012A023
 * Callers:
 *     <none>
 * Callees:
 *     sub_180104394 @ 0x180104394 (sub_180104394.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A023(__int64 a1, __int64 a2)
{
  sub_180104394(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
