/*
 * XREFs of ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00C3348
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AllocatePagingBufferResources(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rax
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x58uLL);
  v4 = *(_QWORD *)a2;
  LODWORD(v5[0]) = 104;
  v5[2] = a2;
  HIDWORD(v5[0]) = *(_DWORD *)(*(_QWORD *)v4 + 68LL) & 0x3F;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v5, 1);
}
