/*
 * XREFs of _CmCreateDeviceInterfaceWorker @ 0x14076A7E8
 * Callers:
 *     _CmCreateDeviceInterface @ 0x14076A680 (_CmCreateDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmRaiseCreateEvent @ 0x14076A8FC (_CmRaiseCreateEvent.c)
 *     _CmCreateInterfaceClass @ 0x14076A9A0 (_CmCreateInterfaceClass.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140784B14 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1407875CC (_CmGetDeviceInterfaceClassGuidString.c)
 */

__int64 __fastcall CmCreateDeviceInterfaceWorker(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, __int16 a6)
{
  int DeviceInterfaceClassGuidString; // ebx
  int v11; // r9d
  _DWORD v13[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-88h] BYREF

  v13[0] = 0;
  if ( a6 )
  {
    DeviceInterfaceClassGuidString = -1073741811;
  }
  else
  {
    DeviceInterfaceClassGuidString = CmGetDeviceInterfaceClassGuidString(a1, a2, v14);
    if ( DeviceInterfaceClassGuidString >= 0 )
    {
      DeviceInterfaceClassGuidString = CmCreateInterfaceClass(a1, (unsigned int)v14, 0, 0, 0LL, 0);
      if ( DeviceInterfaceClassGuidString >= 0 )
      {
        DeviceInterfaceClassGuidString = CmOpenDeviceInterfaceRegKey(a1, a2, 48, v11, a3, 1, (__int64)a4, (__int64)v13);
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
