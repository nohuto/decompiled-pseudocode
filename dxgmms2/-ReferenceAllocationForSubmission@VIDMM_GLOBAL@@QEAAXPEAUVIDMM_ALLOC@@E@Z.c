/*
 * XREFs of ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C00E6FDC
 * Callers:
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00E689C (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReferenceAllocationForSubmission(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, char a3)
{
  __int64 v3; // rdx

  v3 = **(_QWORD **)a2;
  *(_BYTE *)(v3 + 82) = 1;
  if ( !a3 && (*(_DWORD *)(*(_QWORD *)(v3 + 120) + 80LL) & 0x1001) == 0 )
    *(_BYTE *)(v3 + 83) = 1;
}
