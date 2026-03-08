/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x1402D6DC0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     PpmIdleInstallConcurrency @ 0x1403AE090 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x140582F10 (PpmIdleRemoveConcurrency.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  volatile signed __int32 *SchedulerAssist; // rcx
  KSPIN_LOCK v11; // rax
  __int64 v12; // rbp
  int v13; // ecx
  __int64 result; // rax
  unsigned __int64 *v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v17; // r8
  int v18; // ett
  __int16 v19; // [rsp+40h] [rbp-8h]

  v4 = 0;
  v5 = 0LL;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  KxAcquireSpinLock(SpinLock);
  v11 = SpinLock[2];
  v12 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v11 )
  {
    SpinLock[2] = a2;
    v5 = a2 - v11;
    if ( a4 )
    {
      SpinLock[3] += v5;
      SpinLock[v12 + 41] += v5;
    }
  }
  v13 = v12 + 1;
  if ( a3 )
    v13 = v12 - 1;
  *((_DWORD *)SpinLock + 3) = v13;
  result = KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( (v19 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      _m_prefetchw(v17);
      LODWORD(result) = *v17;
      do
      {
        v18 = result;
        result = (unsigned int)_InterlockedCompareExchange(v17, result & 0xFFDFFFFF, result);
      }
      while ( v18 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  if ( !a3 && !(_DWORD)v12 && v5 && a4 )
  {
    v15 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
    do
    {
      if ( v5 < *v15 )
        break;
      ++v4;
      v15 += 3;
    }
    while ( v4 < 0x24 );
    result = v4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&SpinLock[v4 + 4], v5);
  }
  return result;
}
