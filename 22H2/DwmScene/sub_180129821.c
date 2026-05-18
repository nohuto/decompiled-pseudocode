/*
 * XREFs of sub_180129821 @ 0x180129821
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EDEC0 @ 0x1800EDEC0 (sub_1800EDEC0.c)
 *     sub_1800EE0D8 @ 0x1800EE0D8 (sub_1800EE0D8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180129821(__int64 a1, __int64 *a2)
{
  sub_1800EDEC0(a2[16], a2[19], a2[5]);
  sub_1800EE0D8(a2[16], a2[6], a2[4]);
  throw;
}
