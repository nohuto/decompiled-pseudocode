/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B63A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800E5D4C (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 16) + 8LL) )
    return 0;
  while ( a2 == *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(
                              *(_QWORD *)(v2 + 80) + 24LL * *(unsigned int *)(**(_QWORD **)(v2 + 16) + 144 * v3 + 40),
                              (__int64)v7)
                          + 8) )
  {
    v2 = *((_QWORD *)this + 9);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v2 + 16) + 8LL) )
      return 0;
  }
  return 1;
}
