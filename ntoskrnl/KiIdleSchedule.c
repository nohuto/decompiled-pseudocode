/*
 * XREFs of KiIdleSchedule @ 0x140228140
 * Callers:
 *     KiIdleLoop @ 0x14041AF70 (KiIdleLoop.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140459B66 (KiSendHeteroRescheduleIntRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct _KPRCB *v10; // rcx
  signed __int32 *v11; // r8
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // ett
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, &v17);
  *(_BYTE *)(a1 + 13243) = 0;
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v3 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  LOBYTE(v2) = 1;
  KiEndThreadCycleAccumulation(a1, v3, 0LL, v2);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v13 = *SchedulerAssist;
    do
    {
      v4 = v13;
      LODWORD(v4) = v13 & 0xFFDFFFFF;
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  LOBYTE(v4) = 1;
  v7 = KiSearchForNewThread(a1, v4, &v17);
  v8 = v7;
  if ( !v7 )
    goto LABEL_5;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  if ( *(_BYTE *)(v7 + 388) == 1 )
    *(_DWORD *)(v7 + 132) = *(_DWORD *)(v7 + 132) - *(_DWORD *)(v7 + 436) + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v7 + 388) = 2;
  KiReleasePrcbLocksForIsolationUnit(&v17);
  if ( v8 == *(_QWORD *)(a1 + 24) )
  {
    v8 = 0LL;
LABEL_5:
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v9 = *(_QWORD *)(a1 + 24);
    _disable();
    KiStartThreadCycleAccumulation(a1, v9, 1);
    v10 = KeGetCurrentPrcb();
    v11 = (signed __int32 *)v10->SchedulerAssist;
    if ( v11 )
    {
      _m_prefetchw(v11);
      v15 = *v11;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(v11, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
    _enable();
  }
  return v8;
}
