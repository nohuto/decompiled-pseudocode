/*
 * XREFs of _CmGetDeviceChildren @ 0x1406D068C
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1406D04CC (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 *     _PnpMultiSzAppend @ 0x1406D0858 (_PnpMultiSzAppend.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x140789084 (_NtPlugPlayGetDeviceRelatedDevice.c)
 */

int __fastcall CmGetDeviceChildren(int a1, const WCHAR *a2, _WORD *a3, _DWORD *a4)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszSrc; // [rsp+60h] [rbp-A0h] BYREF

  DestinationString = 0LL;
  if ( a3 && *a4 )
    *a3 = 0;
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(a1, (unsigned int)&DestinationString, 2, (unsigned int)&pszSrc);
    if ( result >= 0 )
      return -1073741275;
  }
  return result;
}
