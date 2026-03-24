/*
 * XREFs of KiGetLdtr @ 0x140A10F70
 * Callers:
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F8010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
