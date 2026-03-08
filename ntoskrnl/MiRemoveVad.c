/*
 * XREFs of MiRemoveVad @ 0x140333090
 * Callers:
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A451C8 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiIsVadLargePrivate @ 0x1403316C0 (MiIsVadLargePrivate.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiClearVadBits @ 0x1403335A0 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x140333890 (MiCaptureDeleteHierarchy.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 */

_BOOL8 __fastcall MiRemoveVad(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // r14
  _KPROCESS *Process; // r8
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // r15
  _QWORD *j; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rbp
  struct _KTHREAD *v13; // r12
  unsigned int AbEntrySummary; // eax
  unsigned int v15; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 v19; // al
  __int64 v20; // rsi
  unsigned __int8 v21; // r12
  bool v22; // zf
  _BOOL8 result; // rax
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned int v26; // [rsp+40h] [rbp-68h]
  int v27; // [rsp+44h] [rbp-64h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  unsigned __int64 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 *v31; // [rsp+60h] [rbp-48h]
  unsigned __int8 v34; // [rsp+C8h] [rbp+20h]

  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v27 = 0;
  Process = CurrentThread->ApcState.Process;
  v29 = (__int64)Process;
  v31 = &Process[1].ActiveProcessors.StaticBitmap[26];
  if ( !a2 )
  {
    v30 = 0LL;
    v8 = 0LL;
    i = 0LL;
LABEL_19:
    j = 0LL;
    goto LABEL_20;
  }
  i = *(_QWORD *)a1;
  v8 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v30 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  if ( i )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == a1 )
        break;
      a1 = i;
    }
  }
  j = *(_QWORD **)(v5 + 8);
  v10 = (_QWORD *)v5;
  if ( !i )
    i = 0LL;
  if ( j )
  {
    v11 = (_QWORD *)*j;
    if ( *j )
    {
      do
      {
        j = v11;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
    }
  }
  else
  {
    for ( j = (_QWORD *)(*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( (_QWORD *)*j == v10 )
        break;
      v10 = j;
    }
  }
  if ( !j )
    goto LABEL_19;
LABEL_20:
  --*(_QWORD *)&Process[1].Spare2[31];
  v12 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  --CurrentThread->SpecialApcDisable;
  v13 = KeGetCurrentThread();
  v26 = 2;
  v34 = 17;
  v28 = 0;
  _disable();
  AbEntrySummary = v13->AbEntrySummary;
  if ( v13->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&Process[1].Affinity.StaticBitmap[8], v13)) != 0 )
  {
    _BitScanForward(&v15, AbEntrySummary);
    v28 = v15;
    v13->AbEntrySummary = AbEntrySummary & ~(1 << v15);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v24 = *SchedulerAssist;
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
      }
      while ( v25 != v24 );
      if ( (v24 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&v13[1].Process + 12 * v28);
    if ( v12 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v13->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = v12 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v3, v12);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  if ( a2 )
  {
    v26 = 3;
    v34 = MiLockWorkingSetShared((__int64)v31);
    MiCaptureDeleteHierarchy(v30, v8, v34, &v27);
  }
  v19 = MiLockVadTree(v26);
  v20 = v29;
  v21 = v19;
  RtlAvlRemoveNode(v29 + 2008, v5);
  if ( *(_QWORD *)(v20 + 2016) == v5 )
    *(_QWORD *)(v20 + 2016) = *(_QWORD *)(v20 + 2008);
  *(_QWORD *)(v5 + 16) = -2LL;
  MiUnlockVadTree(v26, v21);
  if ( a2 )
  {
    MiUnlockWorkingSetShared((__int64)v31, v34);
    if ( !a3 )
      MiClearVadBits(v30, v8, i, j);
    if ( ((v30 ^ v8) & 0xFFFFFFE00000LL) != 0 || v27 )
      MiReturnPageTablePageCommitment(v30, v8, v20, i, (__int64)j, v5, (__int64)&v27);
    if ( a3 )
      MiInsertVad(a3, v20, 2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease(v12);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  result = MiIsVadLargePrivate(v5);
  if ( result )
    --*(_DWORD *)(v20 + 2140);
  return result;
}
