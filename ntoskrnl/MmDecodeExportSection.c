/*
 * XREFs of MmDecodeExportSection @ 0x14035D424
 * Callers:
 *     MiResolveImageImports @ 0x14076F7A4 (MiResolveImageImports.c)
 *     RtlFindExportedRoutineByName @ 0x1407EBE40 (RtlFindExportedRoutineByName.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiGetExportSectionExtents @ 0x14035E1BC (MiGetExportSectionExtents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char MmDecodeExportSection()
{
  $C71981A45BEB2B45F82C232A7085991E *v0; // rax
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v2; // rsi
  __int64 v3; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v14; // [rsp+40h] [rbp+8h]
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  LODWORD(v0) = MiGetExportSectionExtents(&v15);
  if ( (_DWORD)v0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = KeGetCurrentThread();
    v3 = 0LL;
    _disable();
    AbEntrySummary = v2->AbEntrySummary;
    if ( v2->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C65568, (__int64)v2)) != 0 )
    {
      _BitScanForward(&v5, AbEntrySummary);
      v14 = v5;
      v2->AbEntrySummary = AbEntrySummary & ~(1 << v5);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v3 = (__int64)(&v2[1].Process + 12 * v14);
      if ( (unsigned __int64)&qword_140C65568 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v3 + 8) = SessionId;
      *(_QWORD *)v3 = (unsigned __int64)&qword_140C65568 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65568, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C65568, v3, (__int64)&qword_140C65568);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    --dword_140C65570;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65568, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65568);
    LOBYTE(v0) = KeAbPostRelease((ULONG_PTR)&qword_140C65568);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v0 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v0->ApcState.ApcListHead[0].Flink != v0 )
        LOBYTE(v0) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v0;
}
