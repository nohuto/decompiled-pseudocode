/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1C014C710
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C020C68C (ApiSetEtwTraceBeginPointerFrameCommit.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C00E5834 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceBeginPointerFrameCommit(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
