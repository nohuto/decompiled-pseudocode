/*
 * XREFs of VidSchiAdjustWorkerThreadPriority @ 0x1C0012CA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008E0A0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAdjustWorkerThreadPriority(__int64 a1)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  int v5; // ebp
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rax
  KPRIORITY v9; // r14d
  int v10; // ecx
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int16 v14; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v2 + 2448) & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread == *(struct _KTHREAD **)(v2 + 160) || CurrentThread == *(struct _KTHREAD **)(v2 + 168) )
    {
      v4 = 1;
      if ( *(_DWORD *)(a1 + 780) )
        return;
      v5 = 16;
    }
    else
    {
      v4 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v5 = 31;
      }
      else
      {
        v5 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v5 <= 16 )
          return;
      }
    }
    SpinLock = (KSPIN_LOCK *)(v2 + 2376);
    v14 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2376), &LockHandle);
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 780);
      LOBYTE(v14) = 1;
      if ( v4 )
      {
        if ( v6 )
          goto LABEL_12;
      }
      else if ( !v6 )
      {
        goto LABEL_12;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      v8 = *(int *)(a1 + 392);
      if ( (_DWORD)v8 != v5 )
      {
        v10 = 0;
        if ( (int)v8 > 16 && (*(_DWORD *)(v7 + 4 * v8 + 2320))-- == 1 )
        {
          v10 = 1;
          *(_DWORD *)(v7 + 2384) &= ~(1 << *(_DWORD *)(a1 + 392));
        }
        if ( v5 > 16 && ++*(_DWORD *)(v7 + 4LL * v5 + 2320) == 1 )
        {
          v10 = 1;
          *(_DWORD *)(v7 + 2384) |= 1 << v5;
        }
        *(_DWORD *)(a1 + 392) = v5;
        if ( v10 )
        {
          if ( *(_DWORD *)(v7 + 2384) )
            *(_DWORD *)(v7 + 212) = RtlFindMostSignificantBit(*(unsigned int *)(v7 + 2384));
          else
            *(_DWORD *)(v7 + 212) = 16;
        }
      }
      v9 = *(_DWORD *)(v7 + 212);
      if ( v9 == KeQueryPriorityThread(*(PKTHREAD *)(v2 + 160)) )
        break;
      if ( (_BYTE)v14 )
      {
        if ( HIBYTE(v14) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        LOBYTE(v14) = 0;
      }
      KeSetPriorityThread(*(PKTHREAD *)(v2 + 160), v9);
      if ( HIBYTE(v14) )
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      else
        KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    }
    if ( !(_BYTE)v14 )
      return;
LABEL_12:
    if ( HIBYTE(v14) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
