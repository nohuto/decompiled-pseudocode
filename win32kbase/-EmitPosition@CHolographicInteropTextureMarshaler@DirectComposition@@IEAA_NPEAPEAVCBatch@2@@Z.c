/*
 * XREFs of ?EmitPosition@CHolographicInteropTextureMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264CC4
 * Callers:
 *     ?EmitUpdateCommands@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264DD0 (-EmitUpdateCommands@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::EmitPosition(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 175;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 15);
    *((_DWORD *)v3 + 4) = *((_DWORD *)this + 16);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 17);
    *((_DWORD *)v3 + 6) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
