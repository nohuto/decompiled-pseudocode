/*
 * XREFs of sub_180122FC8 @ 0x180122FC8
 * Callers:
 *     sub_18005A334 @ 0x18005A334 (sub_18005A334.c)
 * Callees:
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180122FC8(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r9
  size_t v8; // r8
  __int64 v9; // rcx

  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  v4 = 16LL * a2;
  sub_1800322B0(v4 + *(_QWORD *)a1);
  v5 = *(_DWORD *)(a1 + 8);
  if ( a2 != v5 - 1 )
  {
    v6 = (unsigned int)(v5 - a2);
    v7 = v4 + *(_QWORD *)a1;
    v8 = 16LL * ((int)v6 - 1);
    if ( v8 )
    {
      if ( !v7 || v7 == -16 )
      {
        *(_DWORD *)o__errno(v6) = 22;
        goto LABEL_10;
      }
      if ( 16LL * (int)v6 < v8 )
      {
        *(_DWORD *)o__errno(v6) = 34;
LABEL_10:
        o__invalid_parameter_noinfo(v9);
        sub_1800B8610(-2147024809);
      }
      memmove((void *)(v4 + *(_QWORD *)a1), (const void *)(v7 + 16), v8);
      v5 = *(_DWORD *)(a1 + 8);
    }
  }
  *(_DWORD *)(a1 + 8) = v5 - 1;
  return 1LL;
}
