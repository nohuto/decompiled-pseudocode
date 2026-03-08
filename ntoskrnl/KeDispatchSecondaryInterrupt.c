/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x14039E1A0
 * Callers:
 *     HalpInvokeIsrForGsiv @ 0x14039E150 (HalpInvokeIsrForGsiv.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondarySignalListLock @ 0x14056F3E8 (KiAcquireSecondarySignalListLock.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(int a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // rdi
  char v5; // si
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int8 v9; // al
  unsigned __int8 v10; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v15; // [rsp+58h] [rbp+10h] BYREF

  v14[1] = v14;
  v14[0] = v14;
  CurrentIrql = KeGetCurrentIrql();
  v4 = v14;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = KiInterruptDispatchCommon(1, a1, (a2 >> 20) & 1, (_DWORD)v4, a3);
  if ( CurrentIrql )
  {
    v15 = 0;
    if ( (_QWORD *)*v4 != v4 )
    {
      KiAcquireSecondarySignalListLock(&v15);
      v7 = qword_140C41708;
      if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
        || *(__int64 **)qword_140C41708 != &KiSecondarySignalList
        || *(_QWORD **)(*v4 + 8LL) != v4
        || *(_QWORD **)v4[1] != v4 )
      {
        __fastfail(3u);
      }
      *(_QWORD *)qword_140C41708 = v4;
      qword_140C41708 = v4[1];
      *(_QWORD *)qword_140C41708 = &KiSecondarySignalList;
      v8 = KiSecondarySignalDpcRunning == 0;
      v4[1] = v7;
      if ( v8 )
      {
        KiSecondarySignalDpcRunning = 1;
        KiInsertQueueDpc((ULONG_PTR)&KiSecondarySignalDpc, 0LL, 0LL, 0LL, 0);
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiSecondarySignalListLock);
      if ( KiIrqlFlags && (v9 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v9 <= 0xFu )
      {
        v10 = v15;
        if ( v15 <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = v15;
          v13 = ~(unsigned __int16)(-1LL << (v15 + 1));
          v8 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v10 = v15;
      }
      __writecr8(v10);
    }
  }
  return v5;
}
