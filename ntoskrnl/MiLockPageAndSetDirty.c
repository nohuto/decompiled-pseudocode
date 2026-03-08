/*
 * XREFs of MiLockPageAndSetDirty @ 0x1402110B8
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x140210FE0 (MiMakeCombineCandidateClean.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // di
  unsigned __int64 v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v11 = 0;
    v4 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v4 = MiLockPageInline(a1);
  }
  v5 = MiCaptureDirtyBitToPfn(a1);
  if ( v5 )
    v2 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 )
    MiReleasePageFileInfo(v2, v5, 1);
  if ( v4 != 17 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
}
