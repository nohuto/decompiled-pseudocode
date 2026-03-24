/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CA48
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0008B50 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1C0030B80 (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C880 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B6D0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002ED78 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  _DWORD v18[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v21[40]; // [rsp+C8h] [rbp-40h] BYREF
  char v22; // [rsp+178h] [rbp+70h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2880) )
  {
    if ( a3 && *(_DWORD *)(a1 + 2880) > 1u )
    {
      memset(v21, 0, sizeof(v21));
      v6 = *(unsigned __int16 *)(a1 + 4);
      v21[4] = 0;
      v21[8] |= 0x40u;
      v21[12] = v6;
      v21[5] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 2880) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v21, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 2880) )
    {
      v22 = 0;
      memset(v18, 0, sizeof(v18));
      v7 = *(unsigned __int16 *)(a1 + 4);
      v8 = *(_QWORD *)(a1 + 24) + 624LL;
      if ( *(_DWORD *)(a1 + 2888) )
      {
        v18[2] = *(_DWORD *)(a1 + 160);
        v18[0] = 2;
        v18[3] = a2;
        v9 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v9 += 8 * v7;
        v18[4] = *(unsigned __int16 *)(*(_QWORD *)v9 + 8LL);
        v10 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v10 += 8 * v7;
        v11 = *(unsigned __int16 *)(*(_QWORD *)v10 + 6LL);
        v18[5] = v11;
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v8);
        v12[3] = v18[3];
        v12[4] = v18[2];
        v12[5] = v18[4];
        v12[6] = v18[5];
      }
      else
      {
        v18[0] = 1;
        v18[2] = a2;
        v13 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v13 += 8 * v7;
        v18[3] = *(unsigned __int16 *)(*(_QWORD *)v13 + 8LL);
        v14 = *(_QWORD *)v8;
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 72) )
          v14 += 8 * v7;
        v15 = *(unsigned __int16 *)(*(_QWORD *)v14 + 6LL);
        v18[4] = v15;
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v8);
        v12[3] = v18[2];
        v12[4] = v18[3];
        v12[5] = v18[4];
      }
      WdLogEvent5_WdEvent(v12);
      v16 = *(unsigned int *)(v4 + 32);
      v17 = *(_QWORD *)(v4 + 24);
      v19[0] = *(_QWORD *)(v4 + 8);
      v19[1] = v18;
      DpSynchronizeExecution(v17, VidSchiCallNotifyInterruptAtISR, v19, v16, &v22);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1736), &LockHandle);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
