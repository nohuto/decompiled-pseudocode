/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___ @ 0x1C005EC48
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F700 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
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
  *((_DWORD *)v5 + 1) = 69;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 92LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 96LL);
  result = 1;
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 100LL);
  return result;
}
