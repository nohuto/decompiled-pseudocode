void __fastcall CCompositionCubeMap::NotifyUpdate(
        CCompositionCubeMap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5)
{
  if ( a2 || a3 || a4 || a5 )
  {
    *((_BYTE *)this + 72) = 1;
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 10) + 72LL))((char *)this - 80, 0LL, 0LL);
  }
}
