/*
 * XREFs of ?VidMmiAddProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F180C
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0098120 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiAddProbeAndLockReference(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  char v1; // [rsp+28h] [rbp-10h]

  if ( (int)++*((_DWORD *)a1 + 91) > 2 )
  {
    v1 = 1;
    DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a1, 0LL, 0LL, v1);
  }
}
