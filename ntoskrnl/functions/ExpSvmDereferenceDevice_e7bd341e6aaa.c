__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2)
{
  unsigned int v2; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int SessionId; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  _QWORD *v19; // rcx
  PVOID *v20; // rax
  bool v21; // zf
  int v23; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+20h]

  v23 = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v24 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  if ( v6->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v6)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v24 = v9;
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v9);
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
    v7 = (__int64)(&v6[1].Process + 12 * v24);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v7, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v16 = P[8] - 1;
  v17 = P[9] - 1;
  P[8] = v16;
  P[9] = v17;
  if ( !v17 || !v16 )
  {
    v18 = v23;
    if ( !v16 )
      v18 = 1;
    v23 = v18;
    if ( !v17 )
      v23 = v18 | 6;
    v2 = (*((__int64 (__fastcall **)(_QWORD, int *))P + 11))(*((_QWORD *)P + 6), &v23);
    if ( !P[9] )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 56))(a2, *((_QWORD *)P + 22));
      _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v19 = *(_QWORD **)P;
      v20 = (PVOID *)*((_QWORD *)P + 1);
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || *v20 != P )
        __fastfail(3u);
      *v20 = v19;
      v19[1] = v20;
      (*((void (__fastcall **)(_QWORD))P + 8))(*((_QWORD *)P + 6));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
