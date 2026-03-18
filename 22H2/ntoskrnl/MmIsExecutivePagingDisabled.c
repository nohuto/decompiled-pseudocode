/*
 * XREFs of MmIsExecutivePagingDisabled @ 0x140282C20
 * Callers:
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     RtlpWalkFrameChain @ 0x1402A4180 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

_BOOL8 MmIsExecutivePagingDisabled()
{
  return (dword_140D1D1C4 & 1) != 0;
}
