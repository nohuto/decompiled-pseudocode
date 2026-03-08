/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___ @ 0x1C026F278
 * Callers:
 *     ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026F300 (-EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        _DWORD **a3)
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
  *((_DWORD *)v5 + 1) = 340;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = **a3;
  result = 1;
  *(_QWORD *)(v5 + 20) = *((_QWORD *)*a3 + 1);
  return result;
}
