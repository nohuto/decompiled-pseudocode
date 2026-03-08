/*
 * XREFs of NVMeRequestComplete @ 0x1C000318C
 * Callers:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C644 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C00152C0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016690 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1C0018380 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023470 (NVMeSanitizeRecoverWorkItem.c)
 *     ProcessMultipleCommands @ 0x1C0024780 (ProcessMultipleCommands.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024F88 (ProcessNvmeSanitizeStatus.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeControllerReclaimLocalCommand @ 0x1C0003594 (NVMeControllerReclaimLocalCommand.c)
 *     Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage @ 0x1C000361C (Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage.c)
 *     IsInternalSrb @ 0x1C0007BB8 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C0009C80 (GetLocalCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x1C000EF54 (NVMeFreePool.c)
 */

_BYTE *__fastcall NVMeRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // r10
  _BYTE *result; // rax
  _BYTE *v7; // rbx

  if ( (unsigned __int8)IsInternalSrb(a1) )
  {
    result = (_BYTE *)GetLocalCommand(a1, v4);
    v7 = result;
    if ( result )
    {
      *result = 0;
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage()
          && (v7[1] & 1) != 0 )
        {
          return (_BYTE *)NVMeControllerReclaimLocalCommand(a1, v7);
        }
        else
        {
          NVMeFreeDmaBuffer(a1, 0x2000LL, a2 + 56, *((_QWORD *)v7 + 13));
          return (_BYTE *)NVMeFreePool(a1, v7);
        }
      }
    }
  }
  else if ( v5 )
  {
    return (_BYTE *)StorPortNotification(4104LL, a1, a2);
  }
  else
  {
    return (_BYTE *)StorPortNotification(0LL, a1, a2);
  }
  return result;
}
