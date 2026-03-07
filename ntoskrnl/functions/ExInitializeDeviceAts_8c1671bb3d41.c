__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // r15
  int Interface; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int SessionId; // eax
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int128 v19; // [rsp+40h] [rbp-59h] BYREF
  __int128 v20; // [rsp+50h] [rbp-49h]
  __int128 v21; // [rsp+60h] [rbp-39h]
  _QWORD v22[16]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+100h] [rbp+67h]
  __int64 *v24; // [rsp+110h] [rbp+77h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v22, 0, 0x50uLL);
  v24 = 0LL;
  v4 = 0;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, BugCheckParameter1, v22);
  if ( Interface >= 0 )
  {
    Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&GUID_PCI_ATS_INTERFACE, 48, 1, BugCheckParameter1, &v19);
    if ( Interface < 0 )
    {
LABEL_29:
      ((void (__fastcall *)(_QWORD))v22[3])(v22[1]);
      if ( v4 )
        (*((void (__fastcall **)(_QWORD))&v20 + 1))(*((_QWORD *)&v19 + 1));
      return (unsigned int)Interface;
    }
    v4 = 1;
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v10, AbEntrySummary);
      v23 = v10;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v13 = *SchedulerAssist;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
        }
        while ( v14 != v13 );
        if ( (v13 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v8 = (__int64)(&CurrentThread[1].Process + 12 * v23);
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v8 + 8) = SessionId;
      *(_QWORD *)v8 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v8, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    v17 = (__int64 *)ExpAtsSvmDevices;
    if ( (__int64 *)ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v18 = v17;
        v24 = v17;
        if ( v17[3] == BugCheckParameter1 )
          break;
        v17 = (__int64 *)*v17;
      }
      while ( v17 != &ExpAtsSvmDevices );
      if ( v18[3] == BugCheckParameter1 )
      {
        if ( v18 )
        {
          if ( *((_DWORD *)v18 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v18 + 8);
          goto LABEL_26;
        }
      }
      else
      {
        v24 = 0LL;
      }
    }
    Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, a2, (unsigned int)v22, (unsigned int)&v19, (__int64)&v24);
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_29;
  }
  return (unsigned int)Interface;
}
