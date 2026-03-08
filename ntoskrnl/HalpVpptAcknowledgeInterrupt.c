/*
 * XREFs of HalpVpptAcknowledgeInterrupt @ 0x140507660
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140507DB0 (HalpVpptUpdatePhysicalTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpVpptAcknowledgeInterrupt(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v6; // rcx
  int *v7; // rdx
  int *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  LARGE_INTEGER v17; // [rsp+30h] [rbp+8h] BYREF

  byte_140C62498 = HalpAcquireHighLevelLock(&qword_140C62490);
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  (*(void (__fastcall **)(__int64))(v3 + 120))(InternalData);
  if ( (unsigned __int8)((__int64 (*)(void))HalpVpptSkipApi)() )
    goto LABEL_21;
  if ( *(_QWORD *)&HalpVpptQueue == a1 )
  {
    v4 = **(_QWORD **)&HalpVpptQueue;
    if ( *(int **)(*(_QWORD *)&HalpVpptQueue + 8LL) != &HalpVpptQueue
      || *(_QWORD *)(v4 + 8) != *(_QWORD *)&HalpVpptQueue )
    {
      goto LABEL_19;
    }
    *(_QWORD *)&HalpVpptQueue = **(_QWORD **)&HalpVpptQueue;
    *(_QWORD *)(v4 + 8) = &HalpVpptQueue;
    if ( *(_QWORD *)(a1 + 40) )
    {
      v17.QuadPart = 0LL;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v17);
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 <= InterruptTimePrecise )
      {
        do
          v6 += *(_QWORD *)(a1 + 40);
        while ( v6 <= InterruptTimePrecise );
        *(_QWORD *)(a1 + 32) = v6;
      }
      v7 = *(int **)&HalpVpptQueue;
      v8 = &HalpVpptQueue;
      while ( v7 != &HalpVpptQueue && v6 >= *((_QWORD *)v7 + 4) )
      {
        v8 = v7;
        v7 = *(int **)v7;
      }
      v9 = *(_QWORD *)v8;
      if ( *(int **)(*(_QWORD *)v8 + 8LL) == v8 )
      {
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = v8;
        *(_QWORD *)(v9 + 8) = a1;
        *(_QWORD *)v8 = a1;
        goto LABEL_15;
      }
LABEL_19:
      __fastfail(3u);
    }
    *(_BYTE *)(a1 + 24) = 0;
  }
LABEL_15:
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
    {
      v10 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      (*(void (__fastcall **)(__int64))(v11 + 136))(v10);
    }
  }
  else
  {
    HalpVpptUpdatePhysicalTimer();
  }
LABEL_21:
  v12 = (unsigned __int8)byte_140C62498;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C62490);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v12 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  return result;
}
