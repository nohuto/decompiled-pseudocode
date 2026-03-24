/*
 * XREFs of RtlLocalTimeToSystemTime @ 0x140910070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FAA60 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlLocalTimeToSystemTime(_QWORD *a1, _QWORD *a2)
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
    *a2 = v6 + *a1;
    return 0LL;
  }
  return result;
}
