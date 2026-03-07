__int64 __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 288));
  if ( !*(_DWORD *)(v1 + 296) )
  {
    v3 = *(_QWORD *)(v1 + 24);
    v4 = v3 ? *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) : 0LL;
    if ( *(_DWORD *)(v1 + 188) != 1
      || !v4
      || (_m_prefetchw((const void *)(v4 + 296)),
          (_InterlockedOr((volatile signed __int32 *)(v4 + 296), 0) & 0x8000) == 0) )
    {
      v5 = PopComputeWatchdogTimeout(v1);
      if ( v5 )
      {
        *(_DWORD *)(v1 + 120) = 275;
        *(_QWORD *)(v1 + 152) = v1;
        *(_QWORD *)(v1 + 144) = &PopIrpWatchdog;
        *(_QWORD *)(v1 + 176) = 0LL;
        *(_QWORD *)(v1 + 136) = 0LL;
        *(_QWORD *)(v1 + 56) = 0LL;
        *(_BYTE *)(v1 + 56) = 8;
        *(_QWORD *)(v1 + 72) = v1 + 64;
        *(_QWORD *)(v1 + 64) = v1 + 64;
        *(_QWORD *)(v1 + 80) = 0LL;
        *(_DWORD *)(v1 + 116) = 0;
        *(_WORD *)(v1 + 112) = 0;
        KiSetTimerEx(v1 + 56, -10000000LL * v5, 0, 0, v1 + 120);
        LOBYTE(v6) = 1;
        *(_QWORD *)(v1 + 48) = KiQueryUnbiasedInterruptTime(v6);
        *(_DWORD *)(v1 + 296) = 1;
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)(v1 + 288));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
