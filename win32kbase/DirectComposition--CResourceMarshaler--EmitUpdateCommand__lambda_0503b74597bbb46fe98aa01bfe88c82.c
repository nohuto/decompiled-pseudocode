/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0503b74597bbb46fe98aa01bfe88c823___ @ 0x1C026A2E8
 * Callers:
 *     ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B27F0 (-EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0503b74597bbb46fe98aa01bfe88c823___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 117;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  result = 1;
  *(_OWORD *)(v5 + 12) = *(_OWORD *)(*(_QWORD *)a3 + 168LL);
  return result;
}
