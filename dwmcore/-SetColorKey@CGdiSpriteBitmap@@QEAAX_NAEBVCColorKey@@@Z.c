void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  char *v3; // r9

  v3 = (char *)this + 368;
  if ( a2 != *((_BYTE *)this + 146)
    || (CColorKey::IsNonEmpty((CGdiSpriteBitmap *)((char *)this + 368)) || CColorKey::IsNonEmpty(a3))
    && (*(float *)v3 != *(float *)a3
     || *((float *)v3 + 1) != *((float *)a3 + 1)
     || *((float *)v3 + 2) != *((float *)a3 + 2)
     || *((float *)v3 + 3) != *((float *)a3 + 3)
     || *((float *)v3 + 4) != *((float *)a3 + 4)
     || *((float *)v3 + 5) != *((float *)a3 + 5)
     || *((float *)v3 + 6) != *((float *)a3 + 6)
     || *((float *)v3 + 7) != *((float *)a3 + 7)) )
  {
    *((_BYTE *)this + 146) = a2;
    *(_OWORD *)v3 = *(_OWORD *)a3;
    *((_OWORD *)v3 + 1) = *((_OWORD *)a3 + 1);
    *((_DWORD *)v3 + 8) = *((_DWORD *)a3 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization(this) )
      CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
