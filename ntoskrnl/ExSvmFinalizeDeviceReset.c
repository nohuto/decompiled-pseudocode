/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x14060AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rdi
  __int64 v4; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int SessionId; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  bool v16; // zf
  unsigned int v18; // [rsp+48h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  if ( v3->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v3)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v18 = v6;
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
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
    v4 = (__int64)(&v3[1].Process + 12 * v18);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v4, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v13 = ExpAtsSvmDevices;
  if ( (__int64 *)ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v15 = -1073741810;
  }
  else
  {
    do
    {
      v14 = v13;
      if ( !*(_BYTE *)(v13 + 16) && *(_QWORD *)(v13 + 24) == a1 )
        break;
      v13 = *(_QWORD *)v13;
    }
    while ( (__int64 *)v13 != &ExpAtsSvmDevices );
    v15 = (*(__int64 (__fastcall **)(_QWORD))(HalIommuDispatch + 144))(*(_QWORD *)(v14 + 176));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v15;
}
