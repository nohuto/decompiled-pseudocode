__int64 __fastcall CGdiSpriteBitmap::RegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 **v3; // rax

  if ( !*((_BYTE *)this + 141) )
  {
    v1 = (__int64 *)((char *)this + 152);
    v2 = *((_QWORD *)g_pComposition + 28) + 232LL;
    v3 = *(__int64 ***)(*((_QWORD *)g_pComposition + 28) + 240LL);
    if ( *v3 != (__int64 *)v2 )
      __fastfail(3u);
    *v1 = v2;
    *((_QWORD *)this + 20) = v3;
    *v3 = v1;
    *(_QWORD *)(v2 + 8) = v1;
    *((_BYTE *)this + 141) = 1;
  }
  return 0LL;
}
