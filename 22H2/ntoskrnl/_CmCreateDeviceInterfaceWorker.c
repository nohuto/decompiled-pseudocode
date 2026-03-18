/*
 * XREFs of _CmCreateDeviceInterfaceWorker @ 0x140880754
 * Callers:
 *     _CmCreateDeviceInterface @ 0x1408805EC (_CmCreateDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406C9FE4 (_CmGetDeviceInterfaceClassGuidString.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406CC2A8 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmCreateInterfaceClass @ 0x140880868 (_CmCreateInterfaceClass.c)
 *     _CmRaiseCreateEvent @ 0x140880A74 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceInterfaceWorker(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, __int16 a6)
{
  int DeviceInterfaceClassGuidString; // ebx
  __int64 v11; // r9
  _DWORD v13[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-88h] BYREF

  v13[0] = 0;
  if ( a6 )
  {
    DeviceInterfaceClassGuidString = -1073741811;
  }
  else
  {
    DeviceInterfaceClassGuidString = CmGetDeviceInterfaceClassGuidString(a1, a2, (__int64)v14);
    if ( DeviceInterfaceClassGuidString >= 0 )
    {
      DeviceInterfaceClassGuidString = CmCreateInterfaceClass(a1, (unsigned int)v14, 0, 0, 0LL, 0);
      if ( DeviceInterfaceClassGuidString >= 0 )
      {
        DeviceInterfaceClassGuidString = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v11, a3, 1, (__int64)a4, v13);
        if ( DeviceInterfaceClassGuidString >= 0 )
        {
          if ( v13[0] == 1 )
          {
            *a5 = 1;
            CmRaiseCreateEvent(a1, a2, 3LL, *a4);
          }
          else
          {
            *a5 = 0;
          }
          return (unsigned int)DeviceInterfaceClassGuidString;
        }
      }
    }
  }
  if ( *a4 )
  {
    ZwClose(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)DeviceInterfaceClassGuidString;
}
