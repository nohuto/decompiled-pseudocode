/*
 * XREFs of ?EmitSetEndPointCommand@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0256388
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A280 (-EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitSetEndPointCommand(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x4000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 540;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v3 + 12) = *((_OWORD *)this + 9);
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return 0;
}
