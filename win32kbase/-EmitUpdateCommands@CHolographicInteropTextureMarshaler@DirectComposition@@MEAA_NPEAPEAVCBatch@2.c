/*
 * XREFs of ?EmitUpdateCommands@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitFlags@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264C54 (-EmitFlags@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPosition@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264CC4 (-EmitPosition@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRootVisual@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264D48 (-EmitRootVisual@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 24;
    *(_OWORD *)(v5 + 1) = 0LL;
    v5[5] = 0;
    v5[1] = 173;
    v5[2] = *((_DWORD *)this + 8);
    v5[4] = *((_DWORD *)this + 19);
    v5[5] = *((_DWORD *)this + 20);
    v5[3] = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CHolographicInteropTextureMarshaler::EmitPosition(this, a2)
    && DirectComposition::CHolographicInteropTextureMarshaler::EmitRootVisual(this, a2)
    && DirectComposition::CHolographicInteropTextureMarshaler::EmitFlags(this, a2) )
  {
    return 1;
  }
  return v2;
}
