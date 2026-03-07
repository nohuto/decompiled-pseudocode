__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // r12
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // si
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 512);
  v4 = *(_QWORD *)(a1 + 552);
  _m_prefetchw((const void *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 0x20) != 0 )
  {
    v7 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v8 = *(_DWORD *)(a1 + 32);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 520);
      v4 = *(_QWORD *)(a1 + 560);
    }
  }
  else
  {
    v7 = 0;
    KeSetEvent((PRKEVENT)(a1 + 568), 0, 0);
    if ( !(unsigned int)Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage() )
      PopFxReleaseDevice(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( v7 )
    PopRequestPowerIrp(v3, v4, 1, 0LL);
  result = Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage();
  if ( (_DWORD)result )
    return PopFxReleaseDevice(a1);
  return result;
}
