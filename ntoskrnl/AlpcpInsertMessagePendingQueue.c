/*
 * XREFs of AlpcpInsertMessagePendingQueue @ 0x1407CF440
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140715930 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140769704 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407CFC50 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall AlpcpInsertMessagePendingQueue(__int64 a1, __int64 a2)
{
  int v4; // eax

  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
  v4 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v4 & 0xFFFFFF83 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 192);
  *(_QWORD *)a2 = a1 + 184;
  **(_QWORD **)(a1 + 192) = a2;
  ++*(_DWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 192) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 176));
  return KeAbPostRelease(a1 + 176);
}
