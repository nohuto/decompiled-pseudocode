/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1407C5840
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x14063FEB8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MiComputeProcessUserVa @ 0x140729824 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x140A46988 (MiCreateLargePageVad.c)
 * Callees:
 *     PspChargeQuota @ 0x140312850 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14031FA10 (MiChargeProcessCommitment.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiReturnProcessCommitment @ 0x140654090 (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406DBAB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1406EC714 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140A40C84 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  unsigned __int64 ProcessPartition; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1384), a1, 2, a2) >= 0 )
  {
    v5 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v5 = 3;
      if ( (*(_DWORD *)(a1 + 1120) & 0x10) == 0 )
      {
LABEL_5:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0LL) )
          return 0LL;
        v9 = 4;
        goto LABEL_13;
      }
      if ( PspChangeJobMemoryUsageByProcess(2, a2, a1, 0LL) )
      {
        v5 = 7;
        goto LABEL_5;
      }
      v9 = 3;
    }
    else
    {
      v9 = 2;
    }
LABEL_13:
    v8 = -1073741523;
    PsReturnProcessPageFileQuota(a1, a2);
    if ( (v5 & 2) != 0 )
      MiReturnProcessCommitment(a1, a2);
    if ( (unsigned __int8)v5 >= 4u )
      PspChangeJobMemoryUsageByProcess(2, -(__int64)a2, a1, 0LL);
    goto LABEL_17;
  }
  v8 = -1073741524;
  v9 = 1;
LABEL_17:
  MiCommitRequestFailed(a1, v4, a2, v9);
  return v8;
}
