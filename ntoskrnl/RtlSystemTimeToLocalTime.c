/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x140856360
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlSystemTimeToLocalTime(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = ZwQuerySystemInformation(3LL, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    *a2 = *a1 - v6;
    return 0LL;
  }
  return result;
}
