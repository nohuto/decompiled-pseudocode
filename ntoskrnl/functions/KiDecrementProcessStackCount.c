__int64 __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  __int64 result; // rax
  char v3; // bp
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // ett
  signed __int64 *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 840), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v11) = 4;
      if ( CurrentIrql != 2 )
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v11;
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
    v5 = *(_DWORD *)(a1 + 840);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v5 < 8 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 840), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v6 == v5 )
        {
          v3 = 1;
          break;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v3 )
    {
      v7 = (signed __int64 *)(a1 + 360);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v8 = KiProcessOutSwapListHead;
      do
      {
        *v7 = v8;
        v9 = v8;
        v8 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v7, v8);
      }
      while ( v8 != v9 );
      if ( !v8 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
