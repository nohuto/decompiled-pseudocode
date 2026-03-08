/*
 * XREFs of AppendUlongAsHexadecimalW @ 0x1405D3078
 * Callers:
 *     CarCreateViolationHashString @ 0x1405D313C (CarCreateViolationHashString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall AppendUlongAsHexadecimalW(__int64 a1, int a2)
{
  char v2; // r8
  __int64 v4; // r9
  unsigned int v6; // r10d
  __int64 v7; // rdx
  __int16 v8; // cx
  _DWORD v9[8]; // [rsp+0h] [rbp-30h]

  if ( a1 )
  {
    v2 = 0;
    v4 = 0LL;
    v6 = -268435456;
    do
    {
      v9[0] = 3211312;
      v9[1] = 3342386;
      v9[2] = 3473460;
      v7 = (a2 & v6) >> (4 * (7 - v2));
      v9[3] = 3604534;
      v9[4] = 3735608;
      v9[5] = 4325441;
      v9[6] = 4456515;
      v9[7] = 4587589;
      if ( (unsigned int)v7 > 0xF )
        v8 = 63;
      else
        v8 = *((_WORD *)v9 + v7);
      *(_WORD *)(a1 + 2 * v4) = v8;
      ++v2;
      ++v4;
      v6 >>= 4;
    }
    while ( v4 < 8 );
  }
}
