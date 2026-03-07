void __fastcall CGdiSpriteBitmap::UnRegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  char *v2; // rax
  __int64 v3; // r8
  char **v4; // rcx

  if ( *((_BYTE *)this + 141) )
  {
    v2 = (char *)this + 152;
    v3 = *((_QWORD *)this + 19);
    if ( *(CGdiSpriteBitmap **)(v3 + 8) != (CGdiSpriteBitmap *)((char *)this + 152)
      || (v4 = (char **)*((_QWORD *)this + 20), *v4 != v2) )
    {
      __fastfail(3u);
    }
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *((_BYTE *)this + 141) = 0;
  }
}
