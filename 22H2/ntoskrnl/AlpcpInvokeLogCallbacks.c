/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1408C3B9C
 * Callers:
 *     AlpcpLogClosePort @ 0x1408C3C30 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1408C3CA0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C3D08 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C3D78 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408C3DE0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1408C3E50 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1408C3EC0 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C3F28 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C4024 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
