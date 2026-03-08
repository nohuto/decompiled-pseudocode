/*
 * XREFs of ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0086AF8
 * Callers:
 *     ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x1C0086764 (-GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z.c)
 *     ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0086854 (-IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CUmdfSvcConfig::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS result; // eax
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  result = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
  {
    if ( *(_DWORD *)&buffer[4] == 4 )
    {
      if ( result >= 0 )
        *Value = *(_DWORD *)&buffer[12];
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
