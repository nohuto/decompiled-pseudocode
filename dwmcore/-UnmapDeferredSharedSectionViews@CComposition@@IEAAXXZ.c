void __fastcall CComposition::UnmapDeferredSharedSectionViews(CComposition *this)
{
  __int64 v2; // rsi
  char *v3; // rbx

  if ( *((_DWORD *)this + 208) )
  {
    v2 = 0LL;
    v3 = (char *)this + 808;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*(_QWORD *)v3 + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 208) );
    *((_DWORD *)v3 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v3, 8u);
  }
}
