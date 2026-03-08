/*
 * XREFs of ACPIRootWorker @ 0x1C0094950
 * Callers:
 *     <none>
 * Callees:
 *     OSCreateHandle @ 0x1C008DB54 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C008EC30 (OSWriteRegValue.c)
 */

NTSTATUS __fastcall ACPIRootWorker(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  int Data; // [rsp+50h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+28h] BYREF

  Data = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  result = OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (a2 & 1) != 0 )
      OSWriteRegValue("AMLIMaxCTObjs", Handle, &Data, 4u);
    v4 = OSCreateHandle("WakeUp", Handle, &KeyHandle);
    result = ZwClose(Handle);
    if ( v4 >= 0 )
    {
      if ( (a2 & 2) != 0 )
        OSWriteRegValue("FixedEventMask", KeyHandle, (char *)AcpiInformation + 114, 2u);
      if ( (a2 & 4) != 0 )
        OSWriteRegValue("FixedEventStatus", KeyHandle, (char *)AcpiInformation + 116, 2u);
      if ( (a2 & 8) != 0 )
        OSWriteRegValue("GenericEventMask", KeyHandle, GpeSavedWakeMask, *((unsigned __int16 *)AcpiInformation + 51));
      if ( (a2 & 0x10) != 0 )
        OSWriteRegValue(
          "GenericEventStatus",
          KeyHandle,
          GpeSavedWakeStatus,
          *((unsigned __int16 *)AcpiInformation + 51));
      return ZwClose(KeyHandle);
    }
  }
  return result;
}
