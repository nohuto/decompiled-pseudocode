/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x1403041F8
 * Callers:
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     EtwTiLogAllocExecVm @ 0x14076C098 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14076C34C (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1407A338C (EtwTiLogSetContextThread.c)
 *     EtwTiLogProtectExecVm @ 0x1408A7ACA (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A7DA4 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E8D54 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1409E9AB8 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409EA044 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409EA354 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409EB81C (EtwpTimLogMitigationForProcess.c)
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
