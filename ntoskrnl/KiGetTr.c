/*
 * XREFs of KiGetTr @ 0x140B10400
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
