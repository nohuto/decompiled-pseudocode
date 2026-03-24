/*
 * XREFs of LpcExitProcess @ 0x140614288
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140298A90 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1406142CC (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[1].SecureState.SecureHandle )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[1].SecureState.SecureHandle);
    a1[1].SecureState.SecureHandle = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
