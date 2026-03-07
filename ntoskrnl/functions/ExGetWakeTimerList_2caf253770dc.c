__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *v3; // r13
  unsigned __int64 v4; // r15
  void *v5; // r12
  __int64 v6; // rdi
  struct _KTHREAD *v7; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int SessionId; // eax
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 Pool2; // rax
  int v18; // edi
  __int64 v19; // r14
  __int64 *v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r13
  int v23; // edx
  __int64 TimerDueTime; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rcx
  _QWORD *v31; // r14
  int v33; // [rsp+20h] [rbp-48h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h] BYREF
  struct _KTHREAD *v35; // [rsp+30h] [rbp-38h]
  __int64 **v36; // [rsp+38h] [rbp-30h]
  __int64 v37; // [rsp+40h] [rbp-28h]
  volatile signed __int64 *v38; // [rsp+50h] [rbp-18h]
  __int64 v39; // [rsp+58h] [rbp-10h]
  KIRQL v42; // [rsp+C0h] [rbp+58h]
  unsigned int v43; // [rsp+C8h] [rbp+60h]

  CurrentThread = KeGetCurrentThread();
  v34 = 0LL;
  v3 = a2;
  v35 = CurrentThread;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v6 = 0LL;
  v7 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v7->AbEntrySummary;
  if ( v7->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpWakeTimerLock, (__int64)v7)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v43 = v9;
    v7->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v6 = (__int64)(&v7[1].Process + 12 * v43);
    if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v6, (__int64)&ExpWakeTimerLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v15 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v16 = *(v15 - 1);
      if ( v16 )
      {
        v34 = 0LL;
        PoStoreDiagnosticContext(v16, 0LL, &v34);
        v4 = (v34 + 31 + v4) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v4 > 0xFFFFFFFF )
        {
          v18 = -1073741789;
          goto LABEL_47;
        }
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != &ExpWakeTimerList );
    if ( v4 )
      goto LABEL_22;
  }
  v4 = 64LL;
LABEL_22:
  Pool2 = ExAllocatePool2(257LL, v4, 1934388055LL);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    v18 = 0;
    v19 = Pool2;
    v20 = (__int64 *)ExpWakeTimerList;
    v21 = 0LL;
    v34 = 0LL;
    v22 = v4;
    while ( 1 )
    {
      v36 = (__int64 **)v20;
      if ( v20 == &ExpWakeTimerList )
        break;
      if ( v22 < 0x40 )
        goto LABEL_52;
      v38 = v20 - 25;
      v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v20 - 25);
      v23 = *((_DWORD *)v36 - 6);
      v39 = (__int64)*(v36 - 1);
      v33 = v23;
      if ( v39 )
        TimerDueTime = KeQueryTimerDueTime((__int64)(v36 - 33));
      else
        TimerDueTime = 0LL;
      v37 = TimerDueTime;
      KxReleaseSpinLock(v38);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v42 <= 0xFu && CurrentIrql >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v42 + 1));
          v29 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)v26);
          v21 = v34;
        }
      }
      __writecr8(v42);
      if ( v37 )
      {
        v30 = v37 - MEMORY[0xFFFFF78000000008];
        *(_DWORD *)(v19 + 16) = v33;
        *(_QWORD *)(v19 + 8) = v30;
        v34 = v22 - 24;
        v18 = PoStoreDiagnosticContext(v39, (unsigned __int64 *)(v19 + 24), &v34);
        if ( v18 < 0 )
          goto LABEL_46;
        v21 = (v34 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v34 = v21;
        if ( v22 < v21 )
        {
LABEL_52:
          v18 = -1073741789;
          goto LABEL_46;
        }
        v22 -= v21;
        *(_QWORD *)v19 = v21;
        v19 += v21;
      }
      v20 = *v36;
    }
    v31 = (_QWORD *)(v19 - v21);
    *v31 = 0LL;
    if ( !v21 )
      v31[1] = 0LL;
LABEL_46:
    CurrentThread = v35;
    v3 = a2;
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_47:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v18 >= 0 )
  {
    *a1 = v5;
    *v3 = v4;
  }
  else if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x734C6B57u);
  }
  return (unsigned int)v18;
}
