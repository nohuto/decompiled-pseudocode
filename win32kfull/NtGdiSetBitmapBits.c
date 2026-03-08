/*
 * XREFs of NtGdiSetBitmapBits @ 0x1C0150110
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C002941C (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x1C008D8A4 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  LONG v7; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v7 = 0;
  umptr_r<unsigned char>::init_probe((__int64)v6, a3, a2, 1LL);
  if ( v6[0] )
    return (unsigned int)GreSetBitmapBitsInternal(a1, (__int64)v6, &v7);
  return v3;
}
