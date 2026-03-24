/*
 * XREFs of NVMeRequestComplete @ 0x1C0010AB0
 * Callers:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0002DA0 (NVMeHwStartIo.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D258 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C00145C0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1C0015C10 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     ProcessMultipleCommands @ 0x1C001C4C4 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     IsInternalSrb @ 0x1C000A6A8 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000B8A8 (GetLocalCommand.c)
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v7; // r11
  __int64 v8; // rdi
  __int64 v9; // r9

  if ( IsInternalSrb(a1, a2) )
  {
    result = GetLocalCommand(a1, v5);
    v8 = result;
    if ( result )
    {
      *(_DWORD *)result = 0;
      if ( *(_DWORD *)(v7 + 12) == 251658240 )
      {
        NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v7 + 56), *(_QWORD *)(result + 104));
        return StorPortExtendedFunction(1LL, a1, v8, v9);
      }
    }
  }
  else if ( a3 )
  {
    return StorPortNotification(4104LL, a1, v5);
  }
  else
  {
    return StorPortNotification(0LL, a1, v5);
  }
  return result;
}
