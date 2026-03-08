/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x1402245D0
 * Callers:
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiDetachAndUnlockWorkingSet @ 0x14020CF74 (MiDetachAndUnlockWorkingSet.c)
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiAttachWorkingSet @ 0x1402D4FE4 (MiAttachWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1402DC3D4 (MiCheckAndProcessCcAccessLog.c)
 *     MiTrimWorkingSet @ 0x1402F08AC (MiTrimWorkingSet.c)
 *     PfLogForegroundProcess @ 0x1402F5C50 (PfLogForegroundProcess.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1402F6AAC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyWorkingSetInitiate @ 0x140301814 (MiEmptyWorkingSetInitiate.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiDrainOldAccessBuffers @ 0x140330C2C (MiDrainOldAccessBuffers.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeTrimAmount @ 0x140632094 (MiComputeTrimAmount.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r14
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r11
  unsigned int v9; // r15d
  __int64 v10; // rsi
  int v11; // r12d
  unsigned int v12; // ebp
  __int64 v13; // r8
  char v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 OldIrql; // rdi
  __int64 v21; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v28; // [rsp+90h] [rbp+18h]
  int v29; // [rsp+90h] [rbp+18h]

  if ( *(_BYTE *)(a1 + 186) == 2 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess();
  if ( (a3 & 0x300) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    {
      a3 &= 0xFFFFFCFF;
    }
    else if ( !*(_QWORD *)(a1 - 400) )
    {
      a3 &= ~0x100u;
    }
    if ( !a3 )
      return 0LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16920LL);
  MiAttachWorkingSet(a1);
  if ( (a3 & 4) != 0 )
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL);
  v7 = MiLockWorkingSetShared(a1);
  v28 = v7;
  v8 = v7;
  if ( (a3 & 0x300) != 0 )
  {
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 144), v7, 0, 2);
    v8 = v28;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 144), v8, 0, 4);
    v8 = v28;
  }
  v9 = *(unsigned __int16 *)(v6 + 2346);
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 1) = *((_BYTE *)MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
    v21 = MiComputeTrimAmount(a2, a1);
    if ( v21 )
      *(_QWORD *)(a2 + 96) += MiTrimWorkingSet(a1, v21, v28, *(unsigned __int8 *)(a2 + 1), 17);
    v18 = 0LL;
    if ( ((*(_BYTE *)a2 & 0x7F) == 0 && *(char *)a2 >= 0 || (*(_BYTE *)a2 & 0x7F) == 4) && *(_WORD *)(v6 + 2346) )
      v18 = 1LL;
    if ( *(_BYTE *)(a2 + 4) != 1 )
      goto LABEL_15;
    v19 = v28;
  }
  else
  {
    if ( (a3 & 2) != 0 )
    {
      v12 = MiAgeWorkingSet(a1, v8, 1LL, *(unsigned __int16 *)(v6 + 2346));
      v11 = 1;
      if ( !v12 && *(_BYTE *)(v6 + 55) && v9 - 1 <= 8 )
        v12 = MiAgeWorkingSet(a1, v28, 2LL, 10LL);
      goto LABEL_15;
    }
    if ( (a3 & 0x20) != 0 )
    {
      v18 = 1LL;
      v19 = v8;
    }
    else
    {
      if ( (a3 & 0x40) == 0 )
        goto LABEL_16;
      v18 = 2LL;
      v19 = v8;
    }
  }
  v12 = MiAgeWorkingSet(a1, v19, v18, v9);
  v11 = 1;
LABEL_15:
  v8 = v28;
LABEL_16:
  if ( !v12 )
  {
    if ( v11 )
    {
      v13 = 8LL;
      v14 = 3;
      if ( *(_BYTE *)(a1 + 186) != 2 )
        v14 = 1;
      v15 = a2 + 8;
      do
      {
        v16 = *(_QWORD *)(a1 - a2 + v15 + 32);
        v15 += 8LL;
        *(_QWORD *)(v15 - 8) += v16 >> v14;
        --v13;
      }
      while ( v13 );
    }
    if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(a1, v8, a3);
    v10 = MEMORY[0xFFFFF78000000320];
    MiDrainOldAccessBuffers(a1, MEMORY[0xFFFFF78000000320]);
  }
  MiUnlockWorkingSetShared(a1, v28);
  MiDetachAndUnlockWorkingSet(a1);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    v29 = *(_DWORD *)(a1 + 184);
    BYTE1(v29) = BYTE1(v29) & 0xF9 | 4;
    *(_WORD *)(a1 + 184) = v29;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  if ( !v12 )
    MiCheckAndProcessCcAccessLog(v10, a3 & 0x18);
  return v12;
}
