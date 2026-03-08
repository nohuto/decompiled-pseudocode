/*
 * XREFs of PopRecordPepWorkorderBlackboxInformation @ 0x14059FED4
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x14099E024 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PopRecordPepWorkorderBlackboxInformation()
{
  unsigned int v0; // edi
  void *v1; // rbx
  unsigned __int64 v2; // rbp
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v7; // r8
  __int64 *i; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int128 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v0 = 0;
  v1 = 0LL;
  v19 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
  v3 = (__int64 *)PopWorkOrderList;
  if ( (__int64 *)PopWorkOrderList == &PopWorkOrderList )
    goto LABEL_13;
  do
  {
    v3 = (__int64 *)*v3;
    v4 = v0++;
  }
  while ( v3 != &PopWorkOrderList );
  if ( !v0 )
  {
LABEL_13:
    v5 = 0LL;
  }
  else
  {
    v5 = 48 * v4 + 64;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v5, 1111641936LL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v7 = Pool2 + 4;
      Pool2[1] = v5;
      Pool2[2] = v0;
      for ( i = (__int64 *)PopWorkOrderList; i != &PopWorkOrderList; v7 += 12 )
      {
        v9 = MEMORY[0xFFFFF78000000008] - i[20];
        *((_QWORD *)v7 + 1) = i;
        *v7 = v9 / 0x2710;
        *((_QWORD *)v7 + 2) = i[18];
        v10 = i[19];
        *((_QWORD *)v7 + 3) = v10;
        if ( v10 )
        {
          v7[8] = *(_DWORD *)v10;
          if ( v10 != -8 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v11 + 64);
              if ( v12 )
                *((_QWORD *)v7 + 5) = *(_QWORD *)(v12 + 96);
            }
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopWorkOrderLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( v5 )
  {
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 7LL;
    *(_QWORD *)&InputBuffer = v1;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v5;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
