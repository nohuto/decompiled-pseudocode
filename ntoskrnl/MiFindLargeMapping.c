/*
 * XREFs of MiFindLargeMapping @ 0x14063F10C
 * Callers:
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindLargeMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // r8d
  unsigned __int64 *v4; // r10
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rdx
  char *i; // rcx
  _OWORD v10[2]; // [rsp+8h] [rbp-40h] BYREF
  char v11; // [rsp+38h] [rbp-10h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = 3;
  v4 = (unsigned __int64 *)&v11;
  v5 = 3LL;
  v6 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  do
  {
    v4 -= 2;
    --v5;
    *(v4 - 1) = v2;
    *v4 = v6;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v3;
  }
  while ( v3 );
  v7 = &v10[v5];
  while ( 2 )
  {
    for ( i = (char *)*(v7 - 1); (unsigned __int64)i <= *v7; i += 8 )
    {
      if ( *i < 0 )
        return 1LL;
    }
    ++v3;
    v7 += 2;
    if ( v3 < 3 )
      continue;
    break;
  }
  return 0LL;
}
