/*
 * XREFs of sub_180124FC2 @ 0x180124FC2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B550 @ 0x18007B550 (sub_18007B550.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124FC2(__int64 a1, __int64 a2)
{
  sub_18007B550(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
