/*
 * XREFs of MiLockProtoPage @ 0x1402A4008
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x1402A419C (MiMakeProtoAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], a3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  return BugCheckParameter1;
}
