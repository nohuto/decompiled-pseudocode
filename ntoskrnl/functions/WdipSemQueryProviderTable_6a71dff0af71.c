__int64 __fastcall WdipSemQueryProviderTable(_QWORD *a1)
{
  __int64 v1; // rdx
  int v3; // r8d
  _QWORD *v4; // r11
  __int64 v5; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    v3 = 0;
    if ( dword_140C34AA0 )
    {
      while ( 1 )
      {
        v4 = (_QWORD *)WdipSemProviderTable[v3];
        v5 = *a1 - *v4;
        if ( *a1 == *v4 )
          v5 = a1[1] - v4[1];
        if ( !v5 )
          break;
        if ( ++v3 >= (unsigned int)dword_140C34AA0 )
          return v1;
      }
      return WdipSemProviderTable[v3];
    }
  }
  return v1;
}
