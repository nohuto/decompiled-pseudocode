/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B9B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800E691C (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 16) + 8LL) )
    return 0;
  while ( 1 )
  {
    v6 = (_DWORD *)(**(_QWORD **)(v2 + 16) + 144 * v3);
    if ( *v6 )
    {
      v7 = (unsigned int)v6[10];
      if ( (unsigned int)v7 < *(_DWORD *)(v2 + 32)
        && a2 != *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(*(_QWORD *)(v2 + 80) + 24 * v7, (__int64)v9) + 8) )
      {
        break;
      }
    }
    v2 = *((_QWORD *)this + 9);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v2 + 16) + 8LL) )
      return 0;
  }
  return 1;
}
