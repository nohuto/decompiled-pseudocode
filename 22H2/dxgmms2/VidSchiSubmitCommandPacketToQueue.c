/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C0007740
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006560 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSubmitPagingCommand @ 0x1C006E44C (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x1C007E2B0 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C008B584 (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CFA50 (VidSchEnqueueCpuEvent.c)
 *     VidSchFlushPendingCommand @ 0x1C00D01F0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0008880 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B6D0 (VidSchiProfilePerformanceTick.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007E800 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C007EA50 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r15
  int v10; // edi
  __int64 v11; // rax
  VIDMM_DEVICE *v12; // rcx
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rax
  KPRIORITY v16; // r12d
  int v17; // ecx
  unsigned int v18; // eax
  KSPIN_LOCK *SpinLock; // [rsp+48h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+50h] [rbp-11h] BYREF
  __int16 v22; // [rsp+68h] [rbp+7h]
  __int64 v23; // [rsp+70h] [rbp+Fh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+17h] BYREF
  __int64 v25; // [rsp+90h] [rbp+2Fh]
  int v26; // [rsp+C8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD **)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v3);
  LOWORD(v25) = 0;
  v23 = v5 + 1712;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1712), &LockHandle);
  LOBYTE(v25) = 1;
  *(_QWORD *)(a1 + 112) = (*(_QWORD *)(v1 + 144))++;
  v6 = MEMORY[0xFFFFF78000000320];
  v3[24] = v6 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_QWORD *)(v1 + 176) = *(_QWORD *)(a1 + 112);
    ++v3[199];
  }
  VidSchiProfilePerformanceTick(4, v5, v4, 0, 0LL, a1, 0LL, 0LL);
  v26 = 0;
  VidSchiInsertCommandToSoftwareQueue(a1, &v26);
  if ( (_BYTE)v25 )
  {
    if ( BYTE1(v25) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v25) = 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  if ( (*(_DWORD *)(v7 + 2448) & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread == *(struct _KTHREAD **)(v7 + 160) || CurrentThread == *(struct _KTHREAD **)(v7 + 168) )
    {
      v9 = 1;
      if ( *(_DWORD *)(v1 + 780) )
        goto LABEL_12;
      v10 = 16;
    }
    else
    {
      v9 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v10 = 31;
      }
      else
      {
        v10 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v10 <= 16 )
          goto LABEL_12;
      }
    }
    v22 = 0;
    SpinLock = (KSPIN_LOCK *)(v7 + 2376);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 2376), &v21);
    while ( 1 )
    {
      v13 = *(_DWORD *)(v1 + 780);
      LOBYTE(v22) = 1;
      if ( v9 )
      {
        if ( v13 )
          goto LABEL_25;
      }
      else if ( !v13 )
      {
        goto LABEL_25;
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v15 = *(int *)(v1 + 392);
      if ( (_DWORD)v15 != v10 )
      {
        v17 = 0;
        if ( (int)v15 > 16 && (*(_DWORD *)(v14 + 4 * v15 + 2320))-- == 1 )
        {
          v17 = 1;
          *(_DWORD *)(v14 + 2384) &= ~(1 << *(_DWORD *)(v1 + 392));
        }
        if ( v10 > 16 && ++*(_DWORD *)(v14 + 4LL * v10 + 2320) == 1 )
        {
          v17 = 1;
          *(_DWORD *)(v14 + 2384) |= 1 << v10;
        }
        *(_DWORD *)(v1 + 392) = v10;
        if ( v17 )
        {
          v18 = *(_DWORD *)(v14 + 2384);
          if ( v18 )
            *(_DWORD *)(v14 + 212) = RtlFindMostSignificantBit(v18);
          else
            *(_DWORD *)(v14 + 212) = 16;
        }
      }
      v16 = *(_DWORD *)(v14 + 212);
      if ( v16 == KeQueryPriorityThread(*(PKTHREAD *)(v7 + 160)) )
        break;
      if ( (_BYTE)v22 )
      {
        if ( HIBYTE(v22) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
        else
          KeReleaseInStackQueuedSpinLock(&v21);
        LOBYTE(v22) = 0;
      }
      KeSetPriorityThread(*(PKTHREAD *)(v7 + 160), v16);
      if ( HIBYTE(v22) )
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v21);
      else
        KeAcquireInStackQueuedSpinLock(SpinLock, &v21);
    }
    if ( !(_BYTE)v22 )
      goto LABEL_12;
LABEL_25:
    if ( HIBYTE(v22) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    else
      KeReleaseInStackQueuedSpinLock(&v21);
  }
LABEL_12:
  if ( v26 )
  {
    *(_QWORD *)(v5 + 1208) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1176), 0, 0);
  }
  v11 = v3[1];
  if ( v11 )
  {
    v12 = *(VIDMM_DEVICE **)(v11 + 760);
    if ( v12 )
      VIDMM_DEVICE::EnsureSchedulable(v12, 1);
  }
  if ( (_BYTE)v25 )
  {
    if ( BYTE1(v25) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
