/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveModeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265650
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitExclusiveOpacity@CHolographicExclusiveModeMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02655DC (-EmitExclusiveOpacity@CHolographicExclusiveModeMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 20;
    *(_OWORD *)(v5 + 1) = 0LL;
    v5[1] = 168;
    v5[2] = *((_DWORD *)this + 8);
    v5[3] = *((_DWORD *)this + 14);
    v5[4] = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CHolographicExclusiveModeMarshaler::EmitExclusiveOpacity(this, a2) )
    return 1;
  return v2;
}
