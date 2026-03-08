/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140367BF4
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1402F8804 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogMapExecView @ 0x14067FA78 (EtwTiLogMapExecView.c)
 *     EtwTiLogSetContextThread @ 0x14077D1C4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogAllocExecVm @ 0x1407F1018 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1407F1248 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x1408A2C4A (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A2F24 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E5EB4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1409E601C (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6400 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409E6C18 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409E71A4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409E74B4 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7898 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409E83F8 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E897C (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 1088;
  a1[2] = a2 + 1128;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[6] = a2 + 2168;
  a1[8] = a2 + 2169;
  a1[10] = a2 + 2170;
  result = 6LL;
  a1[4] = a3;
  a1[5] = 8LL;
  a1[7] = 1LL;
  a1[9] = 1LL;
  a1[11] = 1LL;
  return result;
}
