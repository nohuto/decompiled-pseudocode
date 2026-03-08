/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140367E98
 * Callers:
 *     EtwTiLogMapExecView @ 0x14067FA78 (EtwTiLogMapExecView.c)
 *     EtwTiLogSetContextThread @ 0x14077D1C4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogAllocExecVm @ 0x1407F1018 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1407F1248 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x1408A2C4A (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A2F24 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E5EB4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409E6C18 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409E71A4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409E74B4 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E897C (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = a2 + 1232;
  *(_QWORD *)(a1 + 16) = a2 + 1152;
  result = 2LL;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
