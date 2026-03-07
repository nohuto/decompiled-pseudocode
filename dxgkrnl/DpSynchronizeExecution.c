__int64 __fastcall DpSynchronizeExecution(__int64 a1, KSYNCHRONIZE_ROUTINE *a2, void *a3, unsigned int a4, BOOLEAN *a5)
{
  __int64 v5; // r10
  __int64 v8; // rbx
  struct _KINTERRUPT *v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  KIRQL v13; // di
  int v14; // ebx
  __int64 v15; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  if ( !a1
    || !a2
    || !a5
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v8 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
LABEL_23:
    v14 = -1073741811;
    v15 = -1073741811LL;
    goto LABEL_24;
  }
  v9 = *(struct _KINTERRUPT **)(v8 + 1368);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v8 + 1360);
    if ( v10 == 2 )
    {
LABEL_12:
      *a5 = KeSynchronizeExecution(v9, a2, a3);
      return 0LL;
    }
    if ( v10 != 3 )
      return 0LL;
    v11 = *(_QWORD *)(v8 + 1376);
    if ( *(_DWORD *)(v11 + 4) > (unsigned int)v5 )
    {
      v9 = *(struct _KINTERRUPT **)(v11 + 48 * v5 + 24);
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  if ( *(_BYTE *)(v8 + 2692)
    || *(_BYTE *)(v8 + 2694)
    || *(_BYTE *)(v8 + 2693)
    || *(_BYTE *)(v8 + 1159)
    || *(_BYTE *)(v8 + 2695)
    || *(_BYTE *)(v8 + 2696)
    || *(_BYTE *)(v8 + 2697) )
  {
    v13 = KfRaiseIrql(3u);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1448), &LockHandle);
    *a5 = ((__int64 (__fastcall *)(void *))a2)(a3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v13);
    return 0LL;
  }
  v14 = -1073741823;
  v15 = -1073741823LL;
LABEL_24:
  WdLogSingleEntry1(2LL, v15);
  WdLogSingleEntry1(2LL, v14);
  return (unsigned int)v14;
}
