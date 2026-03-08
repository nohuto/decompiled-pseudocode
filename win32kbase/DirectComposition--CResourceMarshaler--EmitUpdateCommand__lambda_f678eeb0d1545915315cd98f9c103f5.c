/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f678eeb0d1545915315cd98f9c103f50___ @ 0x1C00ADAF8
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ADA70 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_f678eeb0d1545915315cd98f9c103f50_::operator() @ 0x1C00ADB68 (_lambda_f678eeb0d1545915315cd98f9c103f50_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f678eeb0d1545915315cd98f9c103f50___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)v5 = 141;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 32);
  lambda_f678eeb0d1545915315cd98f9c103f50_::operator()(a3);
  return 1;
}
