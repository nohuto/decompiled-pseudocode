/*
 * XREFs of ?EmitData@CFloodEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024EA10
 * Callers:
 *     ?EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024EA90 (-EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CFloodEffectMarshaler::EmitData(
        DirectComposition::CFloodEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 462;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 28);
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 29);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 30);
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 31);
  return 1;
}
