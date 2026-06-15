/*
 * XREFs of sub_180021ED0 @ 0x180021ED0
 * Callers:
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 * Callees:
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int128 *__fastcall sub_180021ED0(__int64 a1, unsigned int a2, __int128 *a3, __int128 *a4, __int128 *a5)
{
  __int128 *result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm0
  __int128 v13; // [rsp+20h] [rbp-88h] BYREF
  __int128 v14; // [rsp+30h] [rbp-78h]
  __int128 v15; // [rsp+40h] [rbp-68h]
  char v16[16]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v17; // [rsp+60h] [rbp-48h] BYREF

  v13 = xmmword_18015B798;
  result = (__int128 *)sub_180022AC0(a1, v16, a2, 0LL);
  v10 = *result;
  v11 = v10;
  v14 = *result;
  v17 = v10;
  v15 = v10;
  if ( a4 )
  {
    v13 = v10;
    if ( (unsigned int)sub_18005BB40(a1, &v13, a2) )
      result = &v17;
    else
      result = &xmmword_18015B798;
    v12 = *result;
    v10 = v14;
    v11 = v15;
  }
  else
  {
    v12 = v13;
  }
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v12;
  if ( a5 )
    *a5 = v11;
  return result;
}
