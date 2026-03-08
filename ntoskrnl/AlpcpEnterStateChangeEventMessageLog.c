/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x140977A1C
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x1406D4A10 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x1407CCD50 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x1409777D8 (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x140977BC8 (AlpcpLocateMessageLog.c)
 */

signed __int32 __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 SnapshotMessageLog; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  v3 = MessageLog;
  if ( MessageLog )
  {
    v4 = (_QWORD *)(MessageLog + 48);
    if ( (_QWORD *)*v4 == v4
      || (v5 = *(_QWORD *)(MessageLog + 56)) == 0
      || *(_DWORD *)(v5 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v5 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v5 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v5 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v5 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v5 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v5 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v5 + 80), (const void *)(a1 + 240), 0x28uLL) )
    {
      SnapshotMessageLog = AlpcpAllocateSnapshotMessageLog();
      v7 = SnapshotMessageLog;
      if ( !*(_DWORD *)(v3 + 44) )
      {
        v8 = (__int64 *)qword_140C402A8;
        if ( *(__int64 **)qword_140C402A8 == &AlpcpFreeMessageSnapshotListHead )
        {
          *(_QWORD *)v7 = &AlpcpFreeMessageSnapshotListHead;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
          qword_140C402A8 = v7;
          goto LABEL_18;
        }
LABEL_16:
        __fastfail(3u);
      }
      *(_DWORD *)(SnapshotMessageLog + 16) = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(SnapshotMessageLog + 24) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(SnapshotMessageLog + 32) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(SnapshotMessageLog + 40) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(SnapshotMessageLog + 48) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(SnapshotMessageLog + 56) = *(_QWORD *)(a1 + 104);
      v9 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(v7 + 20) = 0;
      *(_QWORD *)(v7 + 64) = v9;
      *(_QWORD *)(v7 + 72) = retaddr;
      *(_OWORD *)(v7 + 80) = *(_OWORD *)(a1 + 240);
      *(_OWORD *)(v7 + 96) = *(_OWORD *)(a1 + 256);
      *(_QWORD *)(v7 + 112) = *(_QWORD *)(a1 + 272);
      v10 = (__int64 *)v4[1];
      if ( (_QWORD *)*v10 != v4 )
        goto LABEL_16;
      *(_QWORD *)v7 = v4;
      *(_QWORD *)(v7 + 8) = v10;
      *v10 = v7;
      v4[1] = v7;
    }
  }
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
