/*
 * XREFs of sub_18012002A @ 0x18012002A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180012758 @ 0x180012758 (sub_180012758.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012002A(__int64 a1, __int64 *a2)
{
  sub_180012758(a2[6], a2[4], a2[7]);
  sub_180010BE8(a2[6], a2[8], a2[5]);
  throw;
}
