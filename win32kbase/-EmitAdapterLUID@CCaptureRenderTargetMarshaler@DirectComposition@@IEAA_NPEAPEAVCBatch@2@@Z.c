/*
 * XREFs of ?EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C668
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C8E0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitAdapterLUID(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 20;
    *(_OWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 1) = 37;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v3 + 12) = *(_QWORD *)((char *)this + 76);
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
