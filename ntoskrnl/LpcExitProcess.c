/*
 * XREFs of LpcExitProcess @ 0x140704CEC
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x140704D30 (AlpcpCleanupProcessViews.c)
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
