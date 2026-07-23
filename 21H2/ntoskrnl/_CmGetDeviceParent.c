/*
 * XREFs of _CmGetDeviceParent @ 0x14060F984
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407689A4 (PiCMGetRelatedDeviceInstance.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14076AAD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetParentDeviceContainerId @ 0x1407D09F4 (_CmGetParentDeviceContainerId.c)
 *     _CmGetDeviceSiblings @ 0x14097A964 (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x14060FB38 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 */

int __fastcall CmGetDeviceParent(int a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rdi
  int result; // eax
  unsigned int v10; // ecx
  wchar_t *v11; // r8
  unsigned int v12; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszSrc[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v12 = 0;
  v13 = 0;
  *a4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return -1073741810;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(a1, (unsigned int)&DestinationString, 1, (unsigned int)pszSrc);
    if ( result == -1073741810 )
    {
      result = PnpGetObjectProperty(
                 a1,
                 (_DWORD)a2,
                 1,
                 0,
                 0LL,
                 (__int64)DEVPKEY_Device_LastKnownParent,
                 (__int64)&v13,
                 (__int64)pszSrc,
                 400,
                 (__int64)&v12,
                 0);
      v10 = v12;
      if ( result < 0 )
      {
        result = -1073741810;
      }
      else
      {
        v10 = v12 >> 1;
        v12 >>= 1;
      }
      if ( result == -1073741810 )
      {
        *a4 = 13;
        if ( (unsigned int)v4 >= 0xD )
        {
          v11 = (wchar_t *)L"HTREE\\ROOT\\0";
          return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
        }
        return -1073741789;
      }
    }
    else
    {
      v10 = v12;
    }
    if ( result < 0 )
      return result;
    *a4 = v10;
    if ( (unsigned int)v4 >= v10 )
    {
      v11 = pszSrc;
      return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
    }
    return -1073741789;
  }
  return result;
}
