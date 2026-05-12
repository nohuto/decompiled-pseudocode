/*
 * XREFs of RaInsertDFxQueue @ 0x1C00345E4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0074FC0 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 */

__int64 __fastcall RaInsertDFxQueue(__int64 a1, __int64 a2)
{
  _QWORD *Pool; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x18uLL, 0x51446152u, a1);
  v5 = Pool;
  if ( !Pool )
    return 3221225495LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  *Pool = a2;
  v7 = *(_QWORD *)(a1 + 64);
  if ( !*(_DWORD *)v7 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 5896), &LockHandle);
    v8 = (_QWORD *)(v7 + 5872);
    v9 = *(_QWORD *)(v7 + 5872);
    v10 = v5 + 1;
    if ( *(_QWORD *)(v9 + 8) == v7 + 5872 )
    {
      *v10 = v9;
      v5[2] = v8;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = v10;
      ++*(_DWORD *)(v7 + 5888);
LABEL_10:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)v7 == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 3344), &LockHandle);
    v11 = (_QWORD *)(v7 + 3320);
    v12 = *(_QWORD *)(v7 + 3320);
    v13 = v5 + 1;
    if ( *(_QWORD *)(v12 + 8) == v7 + 3320 )
    {
      *v13 = v12;
      v5[2] = v11;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = v13;
      ++*(_DWORD *)(v7 + 3336);
      goto LABEL_10;
    }
LABEL_8:
    __fastfail(3u);
  }
  return 0LL;
}
