__int64 __fastcall DrvGetSuggestedPhysicalMonitorArraySize(struct _UNICODE_STRING *a1, enum _MODE a2, _DWORD *a3)
{
  __int64 result; // rax
  int NumberOfPhysicalMonitors; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  PVOID P; // [rsp+30h] [rbp-18h]
  struct tagGRAPHICS_DEVICE *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  result = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v9);
  if ( (int)result >= 0 )
  {
    v7 = 0;
    P = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v6, v9);
    LODWORD(v9) = 0;
    NumberOfPhysicalMonitors = DrvGetNumberOfPhysicalMonitors((struct EnsureMonitorDevices *)v6, (unsigned int *)&v9);
    if ( NumberOfPhysicalMonitors < 0 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)NumberOfPhysicalMonitors;
    }
    else
    {
      ProbeForWrite(a3, 4uLL, 4u);
      *a3 = (_DWORD)v9;
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 0LL;
    }
  }
  return result;
}
