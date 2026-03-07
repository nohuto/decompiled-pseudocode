__int64 __fastcall ExUninitializeDeviceAts(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int SessionId; // eax
  __int64 *i; // rcx
  unsigned int v15; // [rsp+40h] [rbp+8h]

  v1 = 0;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v6, AbEntrySummary);
      v15 = v6;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v9 = *SchedulerAssist;
        do
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
        }
        while ( v10 != v9 );
        if ( (v9 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v4 = (__int64)(&CurrentThread[1].Process + 12 * v15);
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v4 + 8) = SessionId;
      *(_QWORD *)v4 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v4, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    for ( i = (__int64 *)ExpAtsSvmDevices; i != &ExpAtsSvmDevices; i = (__int64 *)*i )
    {
      if ( i[3] == a1 )
      {
        if ( *((_DWORD *)i + 8) > *((_DWORD *)i + 9) )
          v1 = ExpAtsDereferenceDevice(i);
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
