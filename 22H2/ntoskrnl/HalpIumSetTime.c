/*
 * XREFs of HalpIumSetTime @ 0x140520770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIumSetTime(__int128 *a1)
{
  __int128 v2; // [rsp+30h] [rbp-38h] BYREF

  if ( !qword_140C62650 )
    return 0x8000000000000003uLL;
  v2 = *a1;
  return qword_140C62650(1LL, 0LL, 0LL, &v2);
}
