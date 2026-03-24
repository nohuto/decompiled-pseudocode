/*
 * XREFs of HalpIumSetTime @ 0x1404D6710
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIumSetTime(__int128 *a1)
{
  __int128 v2; // [rsp+30h] [rbp-38h] BYREF

  if ( !qword_140C4A2D0 )
    return 0x8000000000000003uLL;
  v2 = *a1;
  return qword_140C4A2D0(1LL, 0LL, 0LL, &v2);
}
