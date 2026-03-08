/*
 * XREFs of _CmGetDeviceParent @ 0x1406C7D1C
 * Callers:
 *     PiCMGetRelatedDeviceInstance @ 0x1406C6068 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14078A594 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceSiblings @ 0x140839C1C (_CmGetDeviceSiblings.c)
 *     _CmGetParentDeviceContainerId @ 0x14085CA14 (_CmGetParentDeviceContainerId.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmIsRootDevice @ 0x1406C7E80 (_CmIsRootDevice.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406C81CC (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

int __fastcall CmGetDeviceParent(int a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rbx
  int result; // eax
  int DeviceRelatedDevice; // ecx
  unsigned int v11; // eax
  wchar_t *v12; // r8
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszSrc[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v13 = 0;
  v14 = 0;
  *a4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return -1073741810;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    DeviceRelatedDevice = NtPlugPlayGetDeviceRelatedDevice(
                            a1,
                            (unsigned int)&DestinationString,
                            1,
                            (unsigned int)pszSrc);
    if ( DeviceRelatedDevice == -1073741810 )
    {
      if ( (int)PnpGetObjectProperty(
                  a1,
                  (_DWORD)a2,
                  1,
                  0,
                  0LL,
                  (__int64)DEVPKEY_Device_LastKnownParent,
                  (__int64)&v14,
                  (__int64)pszSrc,
                  400,
                  (__int64)&v13,
                  0) < 0 )
      {
        *a4 = 13;
        if ( (unsigned int)v4 >= 0xD )
        {
          v12 = (wchar_t *)L"HTREE\\ROOT\\0";
          return RtlStringCchCopyExW(a3, v4, v12, 0LL, 0LL, 0x900u);
        }
        return -1073741789;
      }
      v11 = v13 >> 1;
      v13 >>= 1;
    }
    else
    {
      result = DeviceRelatedDevice;
      if ( DeviceRelatedDevice < 0 )
        return result;
      v11 = v13;
    }
    *a4 = v11;
    if ( (unsigned int)v4 >= v11 )
    {
      v12 = pszSrc;
      return RtlStringCchCopyExW(a3, v4, v12, 0LL, 0LL, 0x900u);
    }
    return -1073741789;
  }
  return result;
}
