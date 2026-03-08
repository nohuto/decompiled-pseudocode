/*
 * XREFs of KiProcessSecondarySignalList @ 0x14056F7E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KiProcessDisconnectList @ 0x14039E548 (KiProcessDisconnectList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondarySignalListLock @ 0x14056F3E8 (KiAcquireSecondarySignalListLock.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 **v4; // rcx
  __int64 v5; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v7; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v14; // [rsp+30h] [rbp-10h]

  v12[0] = 0;
  v14 = (__int64 **)&v13;
  v13 = (__int64)&v13;
  KiAcquireSecondarySignalListLock(v12);
  if ( (__int64 *)KiSecondarySignalList != &KiSecondarySignalList )
  {
    v4 = v14;
    if ( *(__int64 **)(v13 + 8) != &v13
      || *v14 != &v13
      || *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140C41708 != &KiSecondarySignalList
      || (*v14 = &KiSecondarySignalList,
          v14 = (__int64 **)qword_140C41708,
          *(_QWORD *)qword_140C41708 = &v13,
          v5 = KiSecondarySignalList,
          qword_140C41708 = (__int64)v4,
          *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList)
      || *v4 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    *v4 = (__int64 *)KiSecondarySignalList;
    *(_QWORD *)(v5 + 8) = v4;
    qword_140C41708 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
  }
  KiSecondarySignalDpcRunning = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&KiSecondarySignalListLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v7 = v12[0];
    if ( v12[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = v12[0];
      v10 = ~(unsigned __int16)(-1LL << (v12[0] + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v7 = v12[0];
  }
  __writecr8(v7);
  KiProcessDisconnectList(&v13);
}
