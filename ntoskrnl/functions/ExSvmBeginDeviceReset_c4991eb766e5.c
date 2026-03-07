__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v5; // rdi
  __int64 v6; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int SessionId; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  bool v18; // zf
  unsigned int v20; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  if ( v5->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v5)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v20 = v8;
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v6 = (__int64)(&v5[1].Process + 12 * v20);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v6, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v15 = ExpAtsSvmDevices;
  if ( (__int64 *)ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v17 = -1073741810;
  }
  else
  {
    do
    {
      v16 = v15;
      if ( !*(_BYTE *)(v15 + 16) && *(_QWORD *)(v15 + 24) == a1 )
        break;
      v15 = *(_QWORD *)v15;
    }
    while ( (__int64 *)v15 != &ExpAtsSvmDevices );
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(HalIommuDispatch + 136))(*(_QWORD *)(v16 + 176), a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v17;
}
