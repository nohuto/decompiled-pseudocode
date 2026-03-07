__int64 __fastcall ExpEnumerateCallback(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 **v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *i; // rcx
  int v9; // eax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v5 = (__int64 **)(a1 + 16);
  v6 = 0LL;
  v7 = *a2 & -(__int64)(*a2 != 0LL);
  if ( *a2 )
    v5 = (__int64 **)*a2;
  for ( i = *v5; i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 44) )
    {
      ++*((_DWORD *)i + 10);
      v6 = i[3];
      *a2 = i;
      break;
    }
  }
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 40) - 1;
    v10 = *(_BYTE *)(v7 + 44) == 0;
    *(_DWORD *)(v7 + 40) = v9;
    if ( !v10 && !v9 )
      KeSetEvent(&ExpCallbackEvent, 0, 0);
  }
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 8));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v10 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v6;
}
