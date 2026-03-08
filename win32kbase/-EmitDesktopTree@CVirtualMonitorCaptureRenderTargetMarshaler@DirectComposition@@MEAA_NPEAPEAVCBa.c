/*
 * XREFs of ?EmitDesktopTree@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026D060
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitDesktopTree(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // edi
  char *v4; // rcx
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x2000) == 0 )
    return 1;
  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v7) )
  {
    v4 = (char *)v7;
    *(_DWORD *)v7 = 36;
    *(_OWORD *)(v4 + 4) = 0LL;
    *(_OWORD *)(v4 + 20) = 0LL;
    *((_DWORD *)v4 + 1) = 383;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v4 + 3) = v3;
    *((_DWORD *)this + 4) &= ~0x2000u;
    return 1;
  }
  return 0;
}
