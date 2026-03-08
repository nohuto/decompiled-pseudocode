/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x14081B6AC
 * Callers:
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     PipMigrateCleanServiceCallback @ 0x140B911A0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return RegRtlDeleteTreeInternal(a2, a3, v4, 0LL);
}
