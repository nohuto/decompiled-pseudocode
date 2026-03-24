/*
 * XREFs of KeyboardClassGetWaitWakeEnableState @ 0x1C000F5E0
 * Callers:
 *     KeyboardStart @ 0x1C0002840 (KeyboardStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002DE0 (__security_check_cookie.c)
 *     memset @ 0x1C00031C0 (memset.c)
 *     KeyboardQueryDeviceKey @ 0x1C000DEA0 (KeyboardQueryDeviceKey.c)
 */

char __fastcall KeyboardClassGetWaitWakeEnableState(__int64 a1)
{
  char v2; // bl
  NTSTATUS v3; // eax
  ULONG v4; // r9d
  ULONGLONG v5; // rax
  int v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE OutputBuffer[80]; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+90h] [rbp-70h] BYREF

  DeviceRegKey = 0LL;
  v8 = 0;
  v2 = 0;
  v3 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 24), 1u, 0x1F0000u, &DeviceRegKey);
  if ( v3 < 0 )
    goto LABEL_17;
  if ( (int)KeyboardQueryDeviceKey(DeviceRegKey, L"WaitWakeEnabled", &v8, v4) >= 0 )
  {
    v2 = 1;
    *(_BYTE *)(a1 + 362) = v8 != 0;
  }
  LOBYTE(v3) = ZwClose(DeviceRegKey);
  DeviceRegKey = 0LL;
  if ( !v2 )
  {
LABEL_17:
    if ( !*(_BYTE *)(a1 + 362) )
    {
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.wProductType = 1;
      v5 = VerSetConditionMask(0LL, 0x80u, 1u);
      v3 = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v5);
      if ( v3 >= 0 )
      {
        memset(OutputBuffer, 0, 0x4CuLL);
        v6 = 4;
        v3 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
        if ( v3 >= 0 )
        {
          if ( !OutputBuffer[5] )
          {
            if ( OutputBuffer[4] )
            {
              v6 = 3;
            }
            else
            {
              LOBYTE(v3) = -OutputBuffer[3];
              v6 = OutputBuffer[3] != 0 ? 2 : 0;
            }
          }
          if ( *(_DWORD *)(a1 + 288) >= v6 )
            *(_BYTE *)(a1 + 362) = 1;
        }
      }
    }
  }
  return v3;
}
