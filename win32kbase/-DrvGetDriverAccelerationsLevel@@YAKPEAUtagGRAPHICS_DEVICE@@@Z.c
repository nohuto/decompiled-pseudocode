__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // eax
  HANDLE RegistryHandleFromDeviceMap; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG Length; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+50h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+A0h] [rbp+17h] BYREF

  memset(KeyValueInformation, 0, 0x48uLL);
  v3 = -1;
  v4 = 0;
  Length = 66;
  DestinationString = 0LL;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v5 = *((_DWORD *)a1 + 40);
    if ( (v5 & 0x800000) == 0 )
    {
      if ( (v5 & 0x4000000) == 0
        || (v8 = *(_QWORD *)(SGDGetSessionState(v2) + 24), (unsigned __int16)(gProtocolType - 1) > 0xFFFDu)
        || !*(_QWORD *)(v8 + 3096)
        || (PVOID)PsGetCurrentProcess(v8, 65533LL, v9, v10) == gpepCSRSS
        || UserIsCurrentProcessDwm(v12, v11, v13, v14) )
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
            v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
          ZwClose(RegistryHandleFromDeviceMap);
          if ( v3 != -1 )
          {
            if ( v3 > 5 )
              return 5;
            return v3;
          }
        }
      }
    }
  }
  return v4;
}
