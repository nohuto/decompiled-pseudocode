/*
 * XREFs of sub_180001E08 @ 0x180001E08
 * Callers:
 *     sub_180001C6C @ 0x180001C6C (sub_180001C6C.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 * Callees:
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int128 *__fastcall sub_180001E08(__int64 a1, __int64 a2, __int128 *a3, _OWORD *a4, _OWORD *a5)
{
  unsigned int v7; // r14d
  __int128 *result; // rax
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-48h] BYREF

  v10 = xmmword_18015B798;
  v7 = a2;
  if ( (unsigned int)sub_1800229D0(a1, a2, &v10) )
  {
    result = &v10;
    v10 = xmmword_18015B798;
  }
  else
  {
    result = (__int128 *)sub_180022AC0(a1, v11, v7, 0LL);
  }
  if ( a3 )
    *a3 = *result;
  if ( a4 )
    *a4 = xmmword_18015B798;
  if ( a5 )
    *a5 = xmmword_18015B798;
  return result;
}
