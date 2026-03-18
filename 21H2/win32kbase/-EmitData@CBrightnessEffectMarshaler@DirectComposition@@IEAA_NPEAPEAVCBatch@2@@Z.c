/*
 * XREFs of ?EmitData@CBrightnessEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216468
 * Callers:
 *     ?EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02164F0 (-EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBrightnessEffectMarshaler::EmitData(
        DirectComposition::CBrightnessEffectMarshaler *this,
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
  *((_DWORD *)v3 + 1) = 471;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 30);
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 31);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 32);
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 33);
  return 1;
}
