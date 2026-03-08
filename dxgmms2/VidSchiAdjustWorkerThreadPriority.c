/*
 * XREFs of VidSchiAdjustWorkerThreadPriority @ 0x1C0016070
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
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
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int16 v14; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v2 + 2536) & 0x20) == 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == *(struct _KTHREAD **)(v2 + 168) || CurrentThread == *(struct _KTHREAD **)(v2 + 176) )
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
  v12 = v2 + 2464;
  v14 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2464), &LockHandle);
  LOBYTE(v14) = 1;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 780);
    if ( !v4 )
      break;
    if ( v6 )
      goto LABEL_10;
LABEL_8:
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
    v8 = *(int *)(a1 + 392);
    if ( (_DWORD)v8 == v5 )
      goto LABEL_9;
    v10 = 0;
    if ( (int)v8 > 16 && (*(_DWORD *)(v7 + 4 * v8 + 2408))-- == 1 )
    {
      v10 = 1;
      *(_DWORD *)(v7 + 2472) &= ~(1 << *(_DWORD *)(a1 + 392));
    }
    if ( (unsigned int)v5 > 0x10 && (++*(_DWORD *)(v7 + 4LL * v5 + 2408), *(_DWORD *)(v7 + 4LL * v5 + 2408) == 1) )
    {
      *(_DWORD *)(v7 + 2472) |= 1 << v5;
      *(_DWORD *)(a1 + 392) = v5;
    }
    else
    {
      *(_DWORD *)(a1 + 392) = v5;
      if ( !v10 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v7 + 2472) )
      *(_DWORD *)(v7 + 220) = RtlFindMostSignificantBit(*(unsigned int *)(v7 + 2472));
    else
      *(_DWORD *)(v7 + 220) = 16;
LABEL_9:
    v9 = *(_DWORD *)(v7 + 220);
    if ( v9 == KeQueryPriorityThread(*(PKTHREAD *)(v2 + 168)) )
      goto LABEL_10;
    AcquireSpinLock::Release((AcquireSpinLock *)&v12);
    KeSetPriorityThread(*(PKTHREAD *)(v2 + 168), v9);
    AcquireSpinLock::Acquire((Acquire *)&v12);
  }
  if ( v6 )
    goto LABEL_8;
LABEL_10:
  if ( (_BYTE)v14 )
  {
    if ( HIBYTE(v14) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
