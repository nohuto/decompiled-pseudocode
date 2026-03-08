/*
 * XREFs of ?EmitData@CColorMatrixEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024DC70
 * Callers:
 *     ?EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024DD30 (-EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

bool __fastcall DirectComposition::CColorMatrixEffectMarshaler::EmitData(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x64uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 100;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x60uLL);
  *(_DWORD *)v4 = 458;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 8);
  *((_DWORD *)v4 + 22) = *((_DWORD *)this + 48);
  *((_DWORD *)v4 + 23) = *((_DWORD *)this + 49);
  result = 1;
  *(_OWORD *)(v4 + 8) = *((_OWORD *)this + 7);
  *(_OWORD *)(v4 + 24) = *((_OWORD *)this + 8);
  *(_OWORD *)(v4 + 40) = *((_OWORD *)this + 9);
  *(_OWORD *)(v4 + 56) = *((_OWORD *)this + 10);
  *(_OWORD *)(v4 + 72) = *((_OWORD *)this + 11);
  return result;
}
