/*
 * XREFs of IommupHvGetDeviceAtsCapability @ 0x14052287C
 * Callers:
 *     IommuGetAtsSettings @ 0x1403A3090 (IommuGetAtsSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvGetDeviceAtsCapability(__int64 a1, bool *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, __int128 *))qword_140C62200)(a1, &v4);
  if ( (int)result >= 0 )
  {
    *a2 = (v4 & 0x40) != 0;
    return 0LL;
  }
  return result;
}
