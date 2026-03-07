__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetDirtyFromAccumulation(
        __int64 a1,
        char a2)
{
  bool v2; // zf

  if ( a2 != *(_BYTE *)(a1 + 68) )
  {
    v2 = *(_QWORD *)(a1 + 120) == 0LL;
    *(_BYTE *)(a1 + 68) = a2;
    if ( !v2 )
    {
      if ( a2 )
      {
        *(_BYTE *)(a1 + 144) = 1;
        CGdiSpriteBitmap::DirtyFromAccum((CGdiSpriteBitmap *)a1);
      }
    }
  }
  return 0LL;
}
