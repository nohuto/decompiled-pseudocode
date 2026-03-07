__int64 __fastcall HalpVpptStop(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  bool v4; // dl
  __int64 InternalData; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  byte_140C62498 = HalpAcquireHighLevelLock(&qword_140C62490);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v2 = *(_QWORD **)a1;
    v3 = *(_QWORD **)(a1 + 8);
    v4 = *(_QWORD *)&HalpVpptQueue == a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = v3;
    if ( v3 == v2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
      {
        InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
        (*(void (__fastcall **)(__int64))(v6 + 136))(InternalData);
      }
    }
    else if ( v4 )
    {
      HalpVpptUpdatePhysicalTimer();
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  v7 = (unsigned __int8)byte_140C62498;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C62490);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
