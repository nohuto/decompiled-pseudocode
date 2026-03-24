/*
 * XREFs of AlpcpUnlockPortShared @ 0x1408C2540
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E8BC0 (AlpcpReceiveMessagePort.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C3150 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 */

char __fastcall AlpcpUnlockPortShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 352);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
