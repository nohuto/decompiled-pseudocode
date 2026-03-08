/*
 * XREFs of IoRaiseInformationalHardError @ 0x140554960
 * Callers:
 *     DifIoRaiseInformationalHardErrorWrapper @ 0x1405DE370 (DifIoRaiseInformationalHardErrorWrapper.c)
 *     MiCauseOverCommitPopup @ 0x140653D38 (MiCauseOverCommitPopup.c)
 *     FsRtlLogCcFlushError @ 0x14093A170 (FsRtlLogCcFlushError.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  void *v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  const void *v12; // rcx
  __int64 v13; // rsi
  int v14; // ebp
  const void *v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  void *v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v26; // edx

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
      return 0;
  }
  else if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) != 0 )
  {
    return 0;
  }
  if ( ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && dword_140C5D99C >= 25 )
  {
    return 0;
  }
  if ( dword_140C5D9BC > 25 )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1917153097LL);
  v8 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_DWORD *)(Pool2 + 16) = ErrorStatus;
  if ( String && String->Length )
  {
    v9 = (void *)ExAllocatePool2(64LL, String->Length, 1917153097LL);
    if ( !v9 )
    {
LABEL_47:
      ExFreePoolWithTag(v8, 0);
      return 0;
    }
    *((_WORD *)v8 + 12) = String->Length;
    *((_WORD *)v8 + 13) = String->Length;
    v8[4] = v9;
    memmove(v9, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C5D990);
    if ( dword_140C5D99C < 25
      && (!IopCurrentHardError
       || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
       || ((v12 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
       && (*((_WORD *)v8 + 12) != *(_WORD *)(IopCurrentHardError + 24)
        || memcmp(v12, *(const void **)(IopCurrentHardError + 32), *((unsigned __int16 *)v8 + 12)))) )
    {
      v13 = qword_140C5D980;
      if ( (__int64 *)qword_140C5D980 == &qword_140C5D980 )
      {
LABEL_35:
        v16 = (_QWORD *)qword_140C5D988;
        if ( *(__int64 **)qword_140C5D988 != &qword_140C5D980 )
          __fastfail(3u);
        v8[1] = qword_140C5D988;
        *v8 = &qword_140C5D980;
        *v16 = v8;
        qword_140C5D988 = (__int64)v8;
        KeReleaseSemaphoreEx((__int64)&byte_140C5D998, 0, 1);
        if ( !byte_140C5D9B8 )
        {
          byte_140C5D9B8 = 1;
          ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
        }
        KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5D990);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v11);
        return 1;
      }
      v14 = *((_DWORD *)v8 + 4);
      while ( 1 )
      {
        if ( v14 == *(_DWORD *)(v13 + 16) )
        {
          v15 = (const void *)v8[4];
          if ( !v15 && !*(_QWORD *)(v13 + 32) )
            break;
          if ( *((_WORD *)v8 + 12) == *(_WORD *)(v13 + 24)
            && !memcmp(v15, *(const void **)(v13 + 32), *((unsigned __int16 *)v8 + 12)) )
          {
            break;
          }
        }
        v13 = *(_QWORD *)v13;
        if ( (__int64 *)v13 == &qword_140C5D980 )
          goto LABEL_35;
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5D990);
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(v11);
    goto LABEL_45;
  }
  v10 = ExAllocatePool2(64LL, 88LL, 1129333067LL);
  if ( !v10 )
  {
LABEL_45:
    v22 = (void *)v8[4];
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_47;
  }
  _InterlockedIncrement(&dword_140C5D9BC);
  KeInitializeApc(
    v10,
    (__int64)Thread,
    0,
    (__int64)SC_ENV::Free,
    0LL,
    (__int64)IopRaiseInformationalHardError,
    0,
    (__int64)v8);
  KeInsertQueueApc(v10, 0LL, 0LL, 0);
  return 1;
}
