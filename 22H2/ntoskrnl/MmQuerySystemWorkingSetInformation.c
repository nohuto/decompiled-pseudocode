/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x14031AE60
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiGetStandbyRepurposed @ 0x14033A7B4 (MiGetStandbyRepurposed.c)
 *     MiGetCurrentMultiplexedVm @ 0x14033B508 (MiGetCurrentMultiplexedVm.c)
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  void *result; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rdx
  char *AnyMultiplexedVm; // rdi
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int8 v13; // r14
  char v14; // al
  int StandbyRepurposed; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  int v18; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  *((_DWORD *)a2 + 15) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 2;
  v6 = (unsigned int)(a1 - 2);
  if ( (_DWORD)v6 )
  {
    v18 = v6 - 1;
    if ( v18 )
    {
      if ( v18 != 1 )
        return result;
      v5 = 1;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetCurrentMultiplexedVm(2LL, v6);
    if ( !AnyMultiplexedVm )
      return memset(a2, 0, 0x40uLL);
  }
  v11 = (unsigned int)(v9 - 2);
  v12 = *(_QWORD *)(qword_140C4E648 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v13 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v7, v9, v10);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm((__int64)AnyMultiplexedVm) + 16);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  *a2 = *((_QWORD *)AnyMultiplexedVm + 15);
  a2[1] = *((_QWORD *)AnyMultiplexedVm + 20);
  *((_DWORD *)a2 + 4) = *((_DWORD *)AnyMultiplexedVm + 1);
  a2[3] = *((_QWORD *)AnyMultiplexedVm + 14);
  a2[4] = *((_QWORD *)AnyMultiplexedVm + 19);
  v14 = AnyMultiplexedVm[184];
  if ( v14 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v14 = AnyMultiplexedVm[184];
  }
  if ( (v14 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v12 + 8 * v11 + 4360);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v13);
  StandbyRepurposed = MiGetStandbyRepurposed(v12);
  v16 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (void *)a2[6];
  v17 = v16 + *(_QWORD *)(v12 + 4352);
  a2[5] = v17;
  if ( v17 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v16 << 12;
  return result;
}
