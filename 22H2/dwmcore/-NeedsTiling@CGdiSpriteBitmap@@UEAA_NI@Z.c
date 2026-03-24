/*
 * XREFs of ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NI@Z @ 0x1800CA460
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180033288 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C193C (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::NeedsTiling(CGdiSpriteBitmap *this, unsigned int a2)
{
  bool result; // al
  CGdiSpriteBitmap *v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // r8d

  result = 0;
  if ( *((_DWORD *)this + 102) > a2 || *((_DWORD *)this + 103) > a2 )
  {
    if ( *((_QWORD *)this + 54) != *((_QWORD *)this + 55) )
      return 1;
    if ( *((_QWORD *)this + 42) )
    {
      v3 = (CGdiSpriteBitmap *)((char *)this - 56);
      if ( CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)((char *)this - 56))
        && (int)CGdiSpriteBitmap::CreateSectionBitmapSubRects(v3, v4, v5) >= 0 )
      {
        return 1;
      }
    }
  }
  return result;
}
