/*
 * XREFs of UserLogError @ 0x1C017CC90
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1C019DEC8 (RIMFreeSpecificDevOnCreateFailure.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01BE49C (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01E1A0C (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
