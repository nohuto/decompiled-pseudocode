/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1409771E8
 * Callers:
 *     AlpcpLogClosePort @ 0x14097727C (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1409772EC (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140977360 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1409773D0 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x14097743C (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1409774AC (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x14097751C (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140977588 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140977684 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

signed __int32 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
