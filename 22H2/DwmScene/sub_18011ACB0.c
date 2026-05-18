/*
 * XREFs of sub_18011ACB0 @ 0x18011ACB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18011ACB0(__int64 a1, _QWORD *a2, double a3)
{
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)sub_180118580(a1, a2, (double *)&v4) )
    return *(__m128 *)&a3;
  else
    return (__m128)v4;
}
