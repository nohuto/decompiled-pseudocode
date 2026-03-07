NTSTATUS ACPIWriteOscSupportToRegistry(int a1, int a2, int a3, __int64 a4, ...)
{
  NTSTATUS result; // eax
  int v5; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-8h] BYREF
  int Data; // [rsp+40h] [rbp+10h] BYREF
  int v8; // [rsp+48h] [rbp+18h] BYREF
  int v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  va_list va; // [rsp+60h] [rbp+30h]
  va_list va1; // [rsp+68h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v10 = va_arg(va1, _QWORD);
  v9 = a3;
  v8 = a2;
  Data = a1;
  Handle = 0LL;
  v5 = Usb4ControlGranted;
  result = OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, &Handle);
  if ( result >= 0 )
  {
    OSWriteRegValue("WHEAOSCImplemented", Handle, &Data, 4u);
    OSWriteRegValue("APEIOSCGranted", Handle, &v8, 4u);
    OSWriteRegValue("CPPCRevisionGranted", Handle, &v9, 4u);
    OSWriteRegValue("Usb4ControlGranted", Handle, &v5, 4u);
    OSWriteRegValue("BatteryFeaturesGranted", Handle, va, 4u);
    result = OSWriteRegValue("PrmSupportGranted", Handle, va1, 4u);
    if ( Handle )
      return ZwClose(Handle);
  }
  return result;
}
