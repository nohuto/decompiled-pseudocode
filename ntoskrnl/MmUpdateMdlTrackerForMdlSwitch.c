/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x14061AFA8
 * Callers:
 *     VmProbeAndLockPages @ 0x1405F67A0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405F6860 (VmUnlockPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateMdlTracker @ 0x14061ABD8 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rbx
  _BOOL8 v8; // r8
  ULONG_PTR v9; // r12
  unsigned __int64 *v10; // r15
  __int64 (__fastcall *v11)(unsigned __int64, __int64); // rbp
  unsigned __int64 v12; // rcx
  _QWORD *v13; // r14
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+30h] [rbp-38h] BYREF

  memset(&v20, 0, sizeof(v20));
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  if ( !v5 )
    v5 = PsInitialSystemProcess;
  v6 = v5[1].ActiveProcessors.StaticBitmap[11];
  if ( !v6 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 24), &v20);
  if ( a2 )
  {
    v7 = *(unsigned __int64 **)v6;
    while ( v7 )
    {
      if ( BugCheckParameter3 >= v7[3] )
      {
        if ( BugCheckParameter3 <= v7[3] )
          break;
        v7 = (unsigned __int64 *)v7[1];
      }
      else
      {
        v7 = (unsigned __int64 *)*v7;
      }
    }
    if ( !v7 )
    {
      if ( *(_DWORD *)(v6 + 32) )
        KeBugCheckEx(
          0x76u,
          8uLL,
          BugCheckParameter3,
          v5[1].Affinity.StaticBitmap[14],
          v5[1].ActiveProcessors.StaticBitmap[11]);
      goto LABEL_32;
    }
    MiValidateMdlTracker((ULONG_PTR)v7, 1);
    v7[3] &= ~0x8000000000000000uLL;
    RtlAvlRemoveNode((unsigned __int64 *)v6, v7);
    v9 = *(_QWORD *)(BugCheckParameter3 + 48);
    v10 = (unsigned __int64 *)(v6 + 8);
    v11 = MiLockSwitchedMdlTrackerCompare;
  }
  else
  {
    v7 = *(unsigned __int64 **)(v6 + 8);
    if ( !v7 )
      goto LABEL_48;
    v12 = *(_QWORD *)(BugCheckParameter3 + 48);
    do
    {
      if ( v12 >= v7[8] )
      {
        if ( v12 <= v7[8] )
          break;
        v7 = (unsigned __int64 *)v7[1];
      }
      else
      {
        v7 = (unsigned __int64 *)*v7;
      }
    }
    while ( v7 );
    if ( !v7 )
    {
LABEL_48:
      if ( *(_DWORD *)(v6 + 32) )
        KeBugCheckEx(
          0x76u,
          9uLL,
          BugCheckParameter3,
          v5[1].Affinity.StaticBitmap[14],
          v5[1].ActiveProcessors.StaticBitmap[11]);
      goto LABEL_32;
    }
    v7[3] = BugCheckParameter3;
    MiValidateMdlTracker((ULONG_PTR)v7, 1);
    RtlAvlRemoveNode((unsigned __int64 *)(v6 + 8), v7);
    v10 = (unsigned __int64 *)v6;
    v11 = MiLockTrackerCompare;
    v9 = BugCheckParameter3;
  }
  v13 = (_QWORD *)*v10;
  LOBYTE(v8) = 0;
  if ( !*v10 )
    goto LABEL_31;
  while ( 1 )
  {
    v14 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD *, _BOOL8))v11)(v9, v13, v8);
    if ( v14 <= 0 )
      break;
    v15 = (_QWORD *)v13[1];
    if ( !v15 )
    {
      LOBYTE(v8) = 1;
      goto LABEL_31;
    }
LABEL_43:
    v13 = v15;
  }
  if ( v14 >= 0 )
    KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v13, BugCheckParameter3, *(_QWORD *)(v6 + 16));
  v15 = (_QWORD *)*v13;
  if ( *v13 )
    goto LABEL_43;
  LOBYTE(v8) = 0;
LABEL_31:
  RtlAvlInsertNodeEx(v10, (unsigned __int64)v13, v8, (unsigned __int64)v7);
LABEL_32:
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v20);
  OldIrql = v20.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v20.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v20.OldIrql + 1));
      v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v19 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
