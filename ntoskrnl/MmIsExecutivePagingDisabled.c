/*
 * XREFs of MmIsExecutivePagingDisabled @ 0x14032D3D0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 * Callees:
 *     <none>
 */

_BOOL8 MmIsExecutivePagingDisabled()
{
  return (dword_140D1D1C4 & 1) != 0;
}
