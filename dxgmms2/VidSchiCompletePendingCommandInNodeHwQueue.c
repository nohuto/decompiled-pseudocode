/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0047148
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0008D50 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1C003B96C (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C003A0D4 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h]
  _DWORD v22[20]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v23[40]; // [rsp+C8h] [rbp-40h] BYREF
  char v24; // [rsp+178h] [rbp+70h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2888) )
  {
    if ( a3 && *(_DWORD *)(a1 + 2888) > 1u )
    {
      memset(v23, 0, sizeof(v23));
      v6 = *(unsigned __int16 *)(a1 + 4);
      v23[8] |= 0x40u;
      v23[12] = v6;
      v23[5] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 2888) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v23, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 2888) )
    {
      v24 = 0;
      memset(v22, 0, sizeof(v22));
      v7 = *(unsigned __int16 *)(a1 + 4);
      v8 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 2896) )
      {
        v9 = *(unsigned int *)(a1 + 160);
        v22[2] = *(_DWORD *)(a1 + 160);
        v22[0] = 2;
        v22[3] = a2;
        v10 = *(_QWORD *)(v8 + 632);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 704) )
          v10 += 8 * v7;
        v11 = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v22[4] = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v12 = *(_QWORD *)(v8 + 632);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 704) )
          v12 += 8 * v7;
        v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 6LL);
        v22[5] = *(unsigned __int16 *)(*(_QWORD *)v12 + 6LL);
        WdLogSingleEntry4(4LL, a2, v9, v11, v13);
      }
      else
      {
        v22[0] = 1;
        v22[2] = a2;
        v14 = *(_QWORD *)(v8 + 632);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 704) )
          v14 += 8 * v7;
        v15 = *(unsigned __int16 *)(*(_QWORD *)v14 + 8LL);
        v22[3] = *(unsigned __int16 *)(*(_QWORD *)v14 + 8LL);
        v16 = *(_QWORD *)(v8 + 632);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 704) )
          v16 += 8 * v7;
        v22[4] = *(unsigned __int16 *)(*(_QWORD *)v16 + 6LL);
        WdLogSingleEntry3(4LL, a2, v15, v22[4]);
      }
      v17 = *(unsigned int *)(v4 + 32);
      v18 = *(_QWORD *)(v4 + 24);
      v19 = *(_QWORD *)(v4 + 8);
      LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)v22;
      DpSynchronizeExecution(v18, VidSchiCallNotifyInterruptAtISR, &v19, v17, &v24);
    }
  }
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v21 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1752), (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
