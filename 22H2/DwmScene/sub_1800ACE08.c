/*
 * XREFs of sub_1800ACE08 @ 0x1800ACE08
 * Callers:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     sub_1800AD1E0 @ 0x1800AD1E0 (sub_1800AD1E0.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800F76B4 @ 0x1800F76B4 (sub_1800F76B4.c)
 * Callees:
 *     sub_18007E720 @ 0x18007E720 (sub_18007E720.c)
 *     sub_1800AA188 @ 0x1800AA188 (sub_1800AA188.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1800ACE08(__int64 a1)
{
  _DWORD *result; // rax
  float v3; // xmm0_4
  float v4; // [rsp+20h] [rbp-38h] BYREF
  float v5; // [rsp+24h] [rbp-34h]
  unsigned __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(a1 + 336) )
  {
    if ( *(_BYTE *)(a1 + 1612) )
    {
      sub_1800AA188(a1, (__int64)&v6);
      result = sub_18007E720(&v4, &v7, &v6);
      if ( v5 != 0.0 )
      {
        v3 = v4 / v5;
        if ( (float)(v4 / v5) != *(float *)(a1 + 332) )
        {
          *(_DWORD *)(a1 + 544) |= 2u;
          *(float *)(a1 + 332) = v3;
        }
        *(_BYTE *)(a1 + 1612) = 0;
      }
    }
  }
  return result;
}
