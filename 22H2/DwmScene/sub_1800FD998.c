/*
 * XREFs of sub_1800FD998 @ 0x1800FD998
 * Callers:
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 * Callees:
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800FD998(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  unsigned __int8 *v10; // rcx
  __int64 v11; // rax
  unsigned __int8 *i; // rcx
  _BYTE v14[256]; // [rsp+20h] [rbp-118h] BYREF

  if ( a3 < a2 )
  {
    memset(v14, 0, sizeof(v14));
    v9 = a5;
    v10 = (unsigned __int8 *)a4;
    if ( a4 > a4 + a5 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        v11 = *v10++;
        v14[v11] = 1;
      }
      while ( &v10[-a4] != (unsigned __int8 *)v9 );
    }
    for ( i = (unsigned __int8 *)(a1 + a3); (unsigned __int64)i < a1 + a2; ++i )
    {
      if ( !v14[*i] )
        return (__int64)&i[-a1];
    }
  }
  return -1LL;
}
