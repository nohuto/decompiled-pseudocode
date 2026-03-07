char __fastcall KiBugCheckRecoveryPrepareForCrashDump(unsigned __int8 *a1, bool *a2)
{
  unsigned int v4; // eax
  __int16 v5; // dx
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int8 CurrentIrql; // r8
  _DWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+40h] [rbp-8h]

  v4 = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) == 0 || v4 >= 3 )
    return 0;
  if ( v4 == 2 )
  {
    if ( !KiPristineTriageDump )
      IoRevertFromDemotedDumpType();
    HvlEnlightenments &= 0x2000u;
    v13 = 0LL;
    v11 = 1LL;
    v12 = 96;
    KiUpdateBugcheckRecoveryProgress(&v11);
  }
  off_140C01CD8[0]();
  v5 = v14;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  *a2 = (v5 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v8[5] |= v9;
  }
  *a1 = CurrentIrql;
  KiBugCheckRecoveryFreezeOtherProcessors(0);
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) == 2 )
    HvlPrepareForRootCrashdump(0LL);
  return 1;
}
