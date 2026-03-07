__int64 __fastcall StringListContains(wchar_t *Str1, int a2, const wchar_t *a3, int a4)
{
  const wchar_t *v5; // rdi
  unsigned int i; // esi
  const wchar_t *v9; // rbx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v16; // rcx

  v5 = a3;
  for ( i = 0; *v5; v5 += v16 + 1 )
  {
    v9 = Str1;
    if ( *Str1 )
    {
      while ( 1 )
      {
        if ( a4 )
        {
          v13 = wcsicmp(v9, v5) == 0;
        }
        else
        {
          v10 = v9;
          do
          {
            v11 = *(const wchar_t *)((char *)v10 + (char *)v5 - (char *)v9);
            v12 = *v10 - v11;
            if ( v12 )
              break;
            ++v10;
          }
          while ( v11 );
          v13 = v12 == 0;
        }
        if ( v13 )
          break;
        v14 = -1LL;
        do
          ++v14;
        while ( v9[v14] );
        v9 += v14 + 1;
        if ( !*v9 )
          goto LABEL_12;
      }
      i = 1;
    }
LABEL_12:
    if ( a2 == 18 || a2 == 8210 && i )
      break;
    v16 = -1LL;
    do
      ++v16;
    while ( v5[v16] );
  }
  return i;
}
