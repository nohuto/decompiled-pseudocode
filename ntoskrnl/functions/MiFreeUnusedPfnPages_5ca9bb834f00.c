char __fastcall MiFreeUnusedPfnPages(char *a1)
{
  __int64 v1; // r14
  char *v2; // r13
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v5; // rdi
  struct _KTHREAD *v6; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  bool v13; // zf
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _QWORD v17[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  _OWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+40h]

  v1 = 0LL;
  v17[0] = a1;
  v18 = 0LL;
  v17[1] = v19;
  v2 = a1;
  if ( !a1 )
    v2 = (char *)&MiSystemPartition;
  memset(v19, 0, sizeof(v19));
  CurrentThread = KeGetCurrentThread();
  v5 = (volatile signed __int32 *)(v2 + 216);
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v6 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v6->AbEntrySummary;
    if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)(v2 + 216), (__int64)v6)) != 0 )
    {
      _BitScanForward(&v8, AbEntrySummary);
      v20 = v8;
      v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v14 = *SchedulerAssist;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v1 = (__int64)(&v6[1].Process + 12 * v20);
      if ( (unsigned __int64)v5 - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      *(_DWORD *)(v1 + 8) = SessionId;
      *(_QWORD *)v1 = (unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64(v5, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2 + 27, v1, (__int64)(v2 + 216));
    if ( v1 )
      *(_BYTE *)(v1 + 18) = 1;
    v1 = 0LL;
    if ( !a1 )
    {
      if ( v2[228] )
        break;
    }
    KeGenericCallDpcEx(MiFreeUnusedPfnPagesDpc, v17);
    if ( (_DWORD)v18 != 259 )
    {
      v2[228] = 0;
      *((_QWORD *)v2 + 10) = 0LL;
      break;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2 + 27);
    LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)(v2 + 216));
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 )
    {
      v12 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
        LOBYTE(v12) = KiCheckForKernelApcDelivery();
    }
    if ( !v17[0] )
      return (char)v12;
    KeWaitForGate((__int64)v19 + 8, 18LL, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2 + 27);
  LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)(v2 + 216));
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
