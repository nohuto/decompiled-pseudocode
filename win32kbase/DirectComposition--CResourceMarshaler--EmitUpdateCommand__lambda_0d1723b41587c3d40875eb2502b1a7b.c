/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d1723b41587c3d40875eb2502b1a7b6___ @ 0x1C026B92C
 * Callers:
 *     ?EmitUpdateCommands@CCompositionCubeMapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026BB30 (-EmitUpdateCommands@CCompositionCubeMapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d1723b41587c3d40875eb2502b1a7b6___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
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
  *((_DWORD *)v5 + 1) = 77;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 80LL);
  result = 1;
  v5[20] = *(_BYTE *)(*(_QWORD *)a3 + 84LL);
  return result;
}
