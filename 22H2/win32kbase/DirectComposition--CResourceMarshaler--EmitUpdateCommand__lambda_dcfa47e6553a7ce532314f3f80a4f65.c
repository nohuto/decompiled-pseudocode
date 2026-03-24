/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dcfa47e6553a7ce532314f3f80a4f65b___ @ 0x1C01F7A10
 * Callers:
 *     ?EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F7AB0 (-EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dcfa47e6553a7ce532314f3f80a4f65b___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  char result; // al
  _DWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, (void **)&v9) )
    return 0;
  v6 = v9;
  *v9 = 32;
  *(_OWORD *)(v6 + 1) = 0LL;
  *(_QWORD *)(v6 + 5) = 0LL;
  v6[7] = 0;
  v6[1] = 363;
  v6[2] = *(_DWORD *)(a1 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  if ( v7 )
    v3 = *(_DWORD *)(v7 + 24);
  v6[3] = v3;
  result = 1;
  *((_OWORD *)v6 + 1) = *(_OWORD *)(*(_QWORD *)a3 + 64LL);
  return result;
}
