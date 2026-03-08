/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b33d776916e3f95ce38671429c7c8f2___ @ 0x1C026E018
 * Callers:
 *     ?EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026E250 (-EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b33d776916e3f95ce38671429c7c8f2___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 32;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 1) = 88;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 68LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 72LL);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
  *((_DWORD *)v5 + 7) = *(_DWORD *)(*(_QWORD *)a3 + 80LL);
  result = 1;
  *((_DWORD *)v5 + 6) = *(_DWORD *)(*(_QWORD *)a3 + 84LL);
  return result;
}
