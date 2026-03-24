/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___ @ 0x1C0064CD8
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063530 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_4cc0d3d1534267b95d1f770849d9af9d_::operator() @ 0x1C0064D58 (_lambda_4cc0d3d1534267b95d1f770849d9af9d_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 48;
  *(_OWORD *)v5 = 0LL;
  *((_OWORD *)v5 + 1) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *(_DWORD *)v5 = 336;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 24);
  lambda_4cc0d3d1534267b95d1f770849d9af9d_::operator()(a3);
  return 1;
}
