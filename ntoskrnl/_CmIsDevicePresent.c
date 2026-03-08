/*
 * XREFs of _CmIsDevicePresent @ 0x1406C8810
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406C8740 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1408247A0 (_CmEnumSubkeyCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409579A0 (PiPnpRtlServiceFilterCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406C8898 (_NtPlugPlayGetDeviceStatus.c)
 */

NTSTATUS __fastcall CmIsDevicePresent(int a1, const WCHAR *a2, _BYTE *a3)
{
  NTSTATUS result; // eax
  int v6; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v7[2]; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v6 = 0;
  v9 = 0;
  v7[0] = 0LL;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(v7, a2);
  if ( result < 0
    || (result = NtPlugPlayGetDeviceStatus(a1, (unsigned int)v7, (unsigned int)&v6, (unsigned int)&v9, (__int64)&v8),
        result < 0) )
  {
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
