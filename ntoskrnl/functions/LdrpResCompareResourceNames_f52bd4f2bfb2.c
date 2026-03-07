__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v8; // ebx
  __int64 v12; // rcx
  unsigned __int16 *v14; // rsi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx

  v8 = 0;
  if ( a5 && a6 )
  {
    v12 = *a6;
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (int)v12 >= 0 )
      {
        *a8 = -1;
        return v8;
      }
      LODWORD(v12) = v12 & 0x7FFFFFFF;
      v14 = (unsigned __int16 *)(v12 + a5);
      if ( (a7 & 0x1000) != 0 )
      {
        if ( (unsigned __int64)v14 < a5 )
          return (unsigned int)-1073741701;
        if ( (unsigned __int64)(v14 + 2) < a5 )
          return (unsigned int)-1073741701;
        v15 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (unsigned __int64)(v14 + 2) > v15 + a3 )
          return (unsigned int)-1073741701;
        v16 = a5 + v12 + 2 * (*v14 + 2LL);
        if ( v16 < a5 || v16 > v15 + a3 )
          return (unsigned int)-1073741701;
      }
      if ( ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return (unsigned int)-1073741701;
      v17 = wcsncmp(a4, v14 + 1, *v14);
      if ( v17 )
        goto LABEL_21;
      v18 = -1LL;
      do
        ++v18;
      while ( a4[v18] );
      if ( v18 == *v14 )
      {
LABEL_21:
        *a8 = v17;
        return v8;
      }
    }
    else
    {
      if ( (int)v12 >= 0 )
      {
        if ( (a7 & 0x1000) == 0 || (v12 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          *a8 = (_DWORD)a4 - v12;
          return v8;
        }
        return (unsigned int)-1073741701;
      }
      if ( (a7 & 0x1000) != 0 && (v12 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return (unsigned int)-1073741701;
    }
    *a8 = 1;
    return v8;
  }
  return 3221225485LL;
}
