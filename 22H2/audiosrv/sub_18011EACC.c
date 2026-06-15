/*
 * XREFs of sub_18011EACC @ 0x18011EACC
 * Callers:
 *     sub_18005A334 @ 0x18005A334 (sub_18005A334.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18011EACC(__int64 a1, int a2)
{
  __int64 v2; // r9
  int v4; // r8d
  int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // rcx

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v4 )
    return 0LL;
  if ( a2 != v4 - 1 )
  {
    v5 = v4 - a2;
    v6 = *(_QWORD *)a1 + 16 * v2;
    v7 = 16LL * (v5 - 1);
    if ( v7 )
    {
      if ( !v6 || v6 == -16 )
      {
        *(_DWORD *)o__errno(v6) = 22;
        goto LABEL_10;
      }
      if ( 16LL * v5 < v7 )
      {
        *(_DWORD *)o__errno(v6) = 34;
LABEL_10:
        o__invalid_parameter_noinfo(v8);
        sub_1800B8610(-2147024809);
      }
      memmove((void *)v6, (const void *)(v6 + 16), 16LL * (v5 - 1));
      v4 = *(_DWORD *)(a1 + 8);
    }
  }
  *(_DWORD *)(a1 + 8) = v4 - 1;
  return 1LL;
}
