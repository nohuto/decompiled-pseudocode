/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_14b6426968d6e6e9975b0046e06cc358___ @ 0x1C0005064
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004FE0 (-EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_14b6426968d6e6e9975b0046e06cc358___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  _DWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v9) )
    return 0;
  v6 = v9;
  *v9 = 16;
  *(_QWORD *)(v6 + 1) = 0LL;
  v6[3] = 0;
  v6[1] = 313;
  v6[2] = *(_DWORD *)(a1 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 88LL);
  if ( v7 )
    v3 = *(_DWORD *)(v7 + 24);
  v6[3] = v3;
  return 1;
}
