/*
 * XREFs of NtGdiCreateBitmap @ 0x1C00D03A0
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x1C008D8A4 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 */

__int64 __fastcall NtGdiCreateBitmap(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 inited; // rax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int16 v17; // [rsp+48h] [rbp-30h]
  _BYTE v18[32]; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  if ( !a5 )
    return GreCreateBitmapInternal(a1, a2, a3, a4, &v14);
  v11 = ((a1 * (unsigned __int16)a3 * (unsigned __int64)(unsigned __int16)a4 + 15) >> 3) & 0x1FFFFFFFFFFFFFFELL;
  if ( v11 <= 0xFFFFFFFF )
  {
    v12 = a2 * v11;
    if ( v12 <= 0xFFFFFFFF )
    {
      if ( (_DWORD)v12 )
      {
        inited = umptr_r<unsigned char>::init_probe((__int64)v18, a5, (int)v12, 1LL);
        v14 = *(_QWORD *)inited;
        v15 = *(_QWORD *)(inited + 8);
        v16 = *(_QWORD *)(inited + 16);
        v17 = *(_WORD *)(inited + 24);
        if ( v14 )
          return GreCreateBitmapInternal(a1, a2, a3, a4, &v14);
      }
    }
  }
  return v5;
}
