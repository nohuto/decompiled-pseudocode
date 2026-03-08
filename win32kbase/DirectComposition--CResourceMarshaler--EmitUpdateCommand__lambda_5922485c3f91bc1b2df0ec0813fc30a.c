/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5922485c3f91bc1b2df0ec0813fc30a5___ @ 0x1C00AA850
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AA5C0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5922485c3f91bc1b2df0ec0813fc30a5___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 1) = 238;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  result = 1;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 120LL);
  return result;
}
