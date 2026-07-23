/*
 * XREFs of PopRecordPoIrpBlackboxInformation @ 0x14057F838
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1408FAB40 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagGetDriverName @ 0x1403890CC (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void PopRecordPoIrpBlackboxInformation()
{
  __int64 v0; // rsi
  int v1; // r15d
  _DWORD *v2; // rdi
  SIZE_T v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *PoolWithTag; // rax
  ULONG_PTR v7; // rax
  _DWORD *v8; // r14
  __int64 i; // rsi
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A1h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-89h]
  __int128 InputBuffer_8; // [rsp+50h] [rbp-81h] BYREF
  __int128 v21; // [rsp+60h] [rbp-71h]
  wchar_t Src[64]; // [rsp+78h] [rbp-59h] BYREF

  InputBuffer_8 = 0LL;
  InputBuffer = 0LL;
  v21 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v0 = PopIrpList;
  v1 = 0;
  v2 = 0LL;
  v3 = 64LL;
  if ( (__int64 *)PopIrpList == &PopIrpList )
    goto LABEL_22;
  do
  {
    if ( *(_BYTE *)(v0 + 196) )
    {
      v4 = 24LL;
      if ( PopDiagGetDriverName(*(_QWORD *)(v0 + 32), Src) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Src[v5] );
        v4 = 2 * v5 + 26;
        if ( v4 < 0x18 )
          goto LABEL_22;
      }
      ++v1;
      if ( v3 + v4 < v3 )
        goto LABEL_22;
      v3 += v4;
    }
    v0 = *(_QWORD *)v0;
  }
  while ( (__int64 *)v0 != &PopIrpList );
  if ( !v1 )
  {
LABEL_22:
    v3 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x42424F50u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      v2[2] = v1;
      *((_QWORD *)v2 + 3) = &PopIrpThreadList;
      v7 = ExWorkerQueue;
      *((_QWORD *)v2 + 2) = &PopIrpList;
      v8 = v2 + 10;
      *((_QWORD *)v2 + 4) = v7;
      v2[1] = 1;
      *v2 = v3;
      for ( i = PopIrpList; (__int64 *)i != &PopIrpList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 196) )
        {
          v8[2] = *(unsigned __int8 *)(i + 184);
          v8[3] = *(_DWORD *)(i + 188);
          v8[4] = *(_DWORD *)(i + 192);
          v10 = 24LL;
          v8[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)(i + 48)) / 0x2710uLL;
          if ( PopDiagGetDriverName(*(_QWORD *)(i + 32), Src) >= 0 )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( Src[v11] );
            v10 = 2 * v11 + 26;
            memmove(v8 + 5, Src, 2 * v11);
            *((_WORD *)v8 + v11 + 10) = 0;
          }
          *v8 = v10;
          v8 = (_DWORD *)((char *)v8 + v10);
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v12 = (unsigned __int8)InputBuffer;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)InputBuffer <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)InputBuffer + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( v3 )
  {
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = 4LL;
    *(_QWORD *)&InputBuffer_8 = v2;
    *((_QWORD *)&InputBuffer_8 + 1) = (unsigned int)v3;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer_8, 0x20u, 0LL, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
