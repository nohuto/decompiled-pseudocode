/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BEC88
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v7; // eax
  HANDLE RegistryHandleFromDeviceMap; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG Length; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+50h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+A0h] [rbp+17h] BYREF

  memset(KeyValueInformation, 0, 0x48uLL);
  v5 = -1;
  v6 = 0;
  Length = 66;
  DestinationString = 0LL;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v7 = *((_DWORD *)a1 + 40);
    if ( (v7 & 0x800000) == 0
      && ((v7 & 0x4000000) == 0
       || (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
       || !Object
       || (PVOID)PsGetCurrentProcess(65533LL, v2, v3, v4) == gpepCSRSS
       || UserIsCurrentProcessDwm(v11, v10, v12, v13)) )
    {
      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
      if ( RegistryHandleFromDeviceMap )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( ZwQueryValueKey(
               RegistryHandleFromDeviceMap,
               &DestinationString,
               KeyValueFullInformation,
               KeyValueInformation,
               Length,
               &Length) >= 0 )
          v5 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        ZwClose(RegistryHandleFromDeviceMap);
        if ( v5 != -1 )
        {
          if ( v5 > 5 )
            return 5;
          return v5;
        }
      }
    }
  }
  return v6;
}
