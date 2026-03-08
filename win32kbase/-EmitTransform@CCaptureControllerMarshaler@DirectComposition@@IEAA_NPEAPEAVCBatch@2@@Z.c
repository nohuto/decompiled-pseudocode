/*
 * XREFs of ?EmitTransform@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026D5AC
 * Callers:
 *     ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026D630 (-EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::EmitTransform(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return 1;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
  {
    v3 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 35;
    v4 = *((_DWORD *)this + 8);
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 2) = v4;
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
      *((_DWORD *)v3 + 3) = *(_DWORD *)(v5 + 32);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return 0;
}
