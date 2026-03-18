/*
 * XREFs of _CmGetDeviceParent @ 0x140788ED4
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1406D04CC (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140789210 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14078A748 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetParentDeviceContainerId @ 0x140A28D58 (_CmGetParentDeviceContainerId.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x140789084 (_NtPlugPlayGetDeviceRelatedDevice.c)
 */

int __fastcall CmGetDeviceParent(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
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
                  (__int64)a2,
                  1LL,
                  0LL,
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
