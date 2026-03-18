/*
 * XREFs of UserLogError @ 0x1C014F4C0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1C0171018 (RIMFreeSpecificDevOnCreateFailure.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01907FC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01B37DC (RIMApiSetValidateDeviceSignature.c)
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
