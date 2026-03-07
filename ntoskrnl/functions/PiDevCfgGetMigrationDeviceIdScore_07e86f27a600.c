__int64 __fastcall PiDevCfgGetMigrationDeviceIdScore(wchar_t *Str1, wchar_t *Str2)
{
  const wchar_t *v2; // rbx
  wchar_t *v3; // rdi
  unsigned __int16 v4; // si
  char v5; // r15
  unsigned __int16 v6; // r12
  const wchar_t *v7; // rbp
  wchar_t v8; // cx
  const wchar_t *v9; // r14
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  const wchar_t *v13; // rbp
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rax
  wchar_t *v17; // rdi
  bool v18; // zf
  __int64 v19; // rax
  const wchar_t *v20; // rbx

  v2 = Str2;
  v3 = Str1;
  v4 = 0;
  v5 = 0;
  if ( !Str1 )
    return (unsigned __int16)-1;
  if ( !Str2 )
    return (unsigned __int16)-1;
  v6 = 0x4000;
  v7 = Str2;
  if ( !*Str2 )
    return (unsigned __int16)-1;
  do
  {
    v8 = *v3;
    v9 = v3;
    if ( *v3 )
    {
      while ( wcsicmp(v9, v7) )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v9[v10] );
        v9 += v10 + 1;
        if ( !*v9 )
        {
          v8 = 0;
          goto LABEL_11;
        }
      }
      v8 = *v9;
      v5 = 1;
    }
LABEL_11:
    v11 = v4 | v6;
    if ( v8 )
      v11 = v4;
    v4 = v11;
    v12 = -1LL;
    do
      ++v12;
    while ( v7[v12] );
    v13 = &v7[v12];
    v14 = v6 >> 1;
    v7 = v13 + 1;
    if ( v6 <= 2u )
      v14 = v6;
    v6 = v14;
  }
  while ( *v7 );
  if ( v5 )
  {
    if ( wcsicmp(v3, v2) )
      v4 |= 0x8000u;
    v15 = -1LL;
    do
      ++v15;
    while ( v3[v15] );
    while ( 1 )
    {
      v18 = v3[v15 + 1] == 0;
      v16 = -1LL;
      if ( v18 )
        break;
      do
        ++v16;
      while ( v3[v16] );
      v17 = &v3[v16];
      v15 = -1LL;
      v3 = v17 + 1;
      do
        ++v15;
      while ( v3[v15] );
    }
    do
      ++v16;
    while ( v2[v16] );
    while ( v2[v16 + 1] )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v2[v19] );
      v20 = &v2[v19];
      v16 = -1LL;
      v2 = v20 + 1;
      do
        ++v16;
      while ( v2[v16] );
    }
    if ( wcsicmp(v3, v2) )
      v4 |= 1u;
  }
  else
  {
    return (unsigned __int16)-1;
  }
  return v4;
}
