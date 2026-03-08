/*
 * XREFs of MiLockVadShared @ 0x14031F870
 * Callers:
 *     MiCleanCfg @ 0x1402F86F4 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x1406317E4 (MiWaitForRotateToComplete.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x140A39978 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int64 result; // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // [rsp+40h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = a2 + 40;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v2, CurrentThread)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v14 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v14);
    if ( (unsigned __int64)(v2 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_BYTE *)(a1 + 1385) |= 0x40u;
  return result;
}
