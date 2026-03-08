/*
 * XREFs of ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00E05B8
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0098120 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::AddDMAReferences(struct VIDMM_ALLOC *a1, unsigned int a2)
{
  __int64 v4; // r8

  if ( a2 + *((_DWORD *)a1 + 39) == 0x7FFFFFFF )
  {
    v4 = *((int *)a1 + 39);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 41LL, a1, v4, 0LL);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 39, a2);
}
