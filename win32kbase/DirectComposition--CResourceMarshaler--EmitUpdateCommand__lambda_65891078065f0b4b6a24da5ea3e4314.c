/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65891078065f0b4b6a24da5ea3e43146___ @ 0x1C0262B2C
 * Callers:
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C278 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65891078065f0b4b6a24da5ea3e43146___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        _QWORD *a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 24;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 18;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 18;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*a3 + 32LL);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(a3[1] + 12LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3[1] + 16LL) + 32LL);
  result = 1;
  *((_DWORD *)v5 + 5) = *(_DWORD *)(a3[1] + 8LL);
  return result;
}
