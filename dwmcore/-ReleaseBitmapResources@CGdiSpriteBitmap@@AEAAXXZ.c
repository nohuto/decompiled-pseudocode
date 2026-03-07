void __fastcall CGdiSpriteBitmap::ReleaseBitmapResources(CGdiSpriteBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 44);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_QWORD *)this + 51) )
    *((_QWORD *)this + 51) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
}
