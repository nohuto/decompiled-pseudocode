/*
 * XREFs of IommupHvValidatePageRequestGpa @ 0x140523148
 * Callers:
 *     IommuProcessPageRequestQueue @ 0x140520C90 (IommuProcessPageRequestQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvValidatePageRequestGpa(int a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( IommupHvGpaAlwaysValid )
    return 0LL;
  v5[3] = 0LL;
  v5[0] = a2;
  v5[2] = a4 & 0xF | a3 & 0xFFFFFFFFFFFFF000uLL;
  v5[1] = ((unsigned __int64)(a1 & 0xFFFFF) << 11) | 0x4000000000000400LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD *))qword_140C62240)(1LL, v5);
}
