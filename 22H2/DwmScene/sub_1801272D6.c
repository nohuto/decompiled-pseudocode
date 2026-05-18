/*
 * XREFs of sub_1801272D6 @ 0x1801272D6
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A94 @ 0x180010A94 (sub_180010A94.c)
 *     sub_1800AE070 @ 0x1800AE070 (sub_1800AE070.c)
 *     sub_1800AE34C @ 0x1800AE34C (sub_1800AE34C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801272D6(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  sub_1800AE070(a2[12], a2[4], a2[13]);
  v3 = sub_180010A94(a2[12]);
  sub_1800AE34C(v3, a2[5], a2[15]);
  throw;
}
