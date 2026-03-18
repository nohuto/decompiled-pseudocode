/*
 * XREFs of NVMeRequestComplete @ 0x1C0019DF8
 * Callers:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0003A70 (NVMeHwStartIo.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0018820 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C001CDE0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1C001F680 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C00242B0 (NVMeSanitizeRecoverWorkItem.c)
 *     ProcessMultipleCommands @ 0x1C0024B10 (ProcessMultipleCommands.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024FDC (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     IsInternalSrb @ 0x1C000A4E4 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000A538 (GetLocalCommand.c)
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r9

  if ( IsInternalSrb(a1, a2) )
  {
    result = GetLocalCommand(a1, v6);
    v9 = result;
    if ( result )
    {
      *(_DWORD *)result = 0;
      if ( *(_DWORD *)(v8 + 12) == 251658240 )
      {
        NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v8 + 56), *(_QWORD *)(result + 104));
        return StorPortExtendedFunction(1LL, a1, v9, v10);
      }
    }
  }
  else if ( a3 )
  {
    return StorPortNotification(4104LL, a1, v6, v5);
  }
  else
  {
    return StorPortNotification(0LL, a1, v6, v5);
  }
  return result;
}
