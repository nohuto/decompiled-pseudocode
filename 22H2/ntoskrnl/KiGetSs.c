/*
 * XREFs of KiGetSs @ 0x140A10F80
 * Callers:
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F8010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
