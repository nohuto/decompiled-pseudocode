/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x14025F0E4
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x1406294BC (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406296A8 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406297CC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x14067B0D8 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x1406A0AF4 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14072FCE8 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BAFC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BC64 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14093BE18 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x14093C118 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x14093C694 (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = a2 + 1152;
  *(_QWORD *)(a1 + 16) = a2 + 1072;
  result = 2LL;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
