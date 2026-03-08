/*
 * XREFs of ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00F9B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00B06A8 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeScratchRange(VIDMM_LINEAR_POOL **this, struct _VIDMM_POOL_BLOCK *a2)
{
  VIDMM_LINEAR_POOL::Free(this[19], a2);
}
