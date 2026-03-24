/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x1407AC128
 * Callers:
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     PipMigrateCleanServiceCallback @ 0x140A90380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A90B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A90D50 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x140766974 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, char *a2, const WCHAR *a3)
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
  return RegRtlDeleteTreeInternal(a2, a3, v4, 0);
}
