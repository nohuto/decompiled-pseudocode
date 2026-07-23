/*
 * XREFs of PopRecordPowerWatchdogBlackboxInformation @ 0x14057FB30
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1408FAB40 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void PopRecordPowerWatchdogBlackboxInformation()
{
  KIRQL v0; // al
  __int64 v1; // rdx
  int v2; // esi
  unsigned __int64 v3; // rbp
  _DWORD *v4; // rbx
  int v5; // ecx
  bool v6; // zf
  SIZE_T v7; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r9
  __int64 i; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  __int128 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v16 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  v1 = PopWatchdogList;
  v2 = 0;
  v3 = v0;
  v4 = 0LL;
  if ( (__int64 *)PopWatchdogList == &PopWatchdogList )
    goto LABEL_13;
  do
  {
    v5 = v2++;
    v6 = *(_BYTE *)(v1 + 216) == 0;
    v1 = *(_QWORD *)v1;
    if ( v6 )
      v2 = v5;
  }
  while ( (__int64 *)v1 != &PopWatchdogList );
  if ( !v2 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80LL * (unsigned int)(v2 - 1) + 96;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x42424F50u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      *v4 = 1;
      v9 = v4 + 4;
      v4[1] = v7;
      v4[2] = v2;
      for ( i = PopWatchdogList; (__int64 *)i != &PopWatchdogList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 216) )
        {
          *v9 = *(_DWORD *)(i + 16);
          *((_QWORD *)v9 + 9) = *(_QWORD *)(i + 304);
          v9[1] = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(i + 296)) / 0x2710uLL;
          v9[2] = *(_DWORD *)(i + 224);
          v9[3] = *(_DWORD *)(i + 232);
          *((_QWORD *)v9 + 2) = *(_QWORD *)(i + 240);
          *((_QWORD *)v9 + 3) = *(_QWORD *)(i + 248);
          *((_QWORD *)v9 + 4) = *(_QWORD *)(i + 256);
          *((_QWORD *)v9 + 5) = *(_QWORD *)(i + 264);
          *((_QWORD *)v9 + 8) = i + 224;
          *((_QWORD *)v9 + 6) = *(_QWORD *)(i + 280);
          *((_QWORD *)v9 + 7) = *(_QWORD *)(i + 288);
          v9 += 20;
        }
      }
    }
  }
  KxReleaseSpinLock(&PopWatchdogLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v6 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v7 )
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = 8LL;
    *(_QWORD *)&InputBuffer = v4;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v7;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x42424F50u);
}
