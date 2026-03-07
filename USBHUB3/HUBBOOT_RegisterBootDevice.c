__int64 __fastcall HUBBOOT_RegisterBootDevice(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  int v9; // [rsp+34h] [rbp-2Ch]
  __int64 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  char (__fastcall *v12)(__int64, __int64); // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v9 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"ExNotifyBootDeviceRemoval");
  g_ExNotifyBootDeviceRemoval = (__int64 (__fastcall *)(_QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"ExRegisterBootDevice");
  g_ExRegisterBootDevice = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  v4 = -1073741637;
  if ( g_ExRegisterBootDevice )
  {
    v9 = 0;
    v8 = 1;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *))(WdfFunctions_01015 + 944))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver);
    v11 = 0LL;
    v10 = v5;
    v13 = a1;
    v12 = HUBBOOT_IsBootDeviceReady;
    return (unsigned int)((__int64 (__fastcall *)(int *, __int64))g_ExRegisterBootDevice)(&v8, a2);
  }
  return v4;
}
