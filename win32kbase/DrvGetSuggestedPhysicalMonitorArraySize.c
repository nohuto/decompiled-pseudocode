/*
 * XREFs of DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00AF980
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C0189910 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJAEAVEnsureMonitorDevices@@PEAK@Z @ 0x1C00AFA48 (-DrvGetNumberOfPhysicalMonitors@@YAJAEAVEnsureMonitorDevices@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AFAD4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

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
