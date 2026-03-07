__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, _QWORD *a2, wchar_t **a3)
{
  wchar_t *v5; // rbx
  unsigned int SidForString; // edi
  unsigned int v7; // r15d
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  int i; // r8d
  unsigned int v14; // edx
  _QWORD *PoolWithTag; // rax
  __int16 v16; // si
  unsigned int v17; // r12d
  _WORD *v18; // rax
  _WORD *v19; // r15
  int v20; // r13d
  unsigned int v21; // r15d
  int v22; // r12d
  wchar_t *j; // rbx
  wchar_t v24; // ax
  wchar_t *v25; // rax
  wchar_t *v26; // rbx
  __int64 v27; // rcx
  _WORD *v28; // rbx
  _WORD *v29; // rax
  _WORD *v30; // [rsp+A0h] [rbp+48h] BYREF
  int v31; // [rsp+A8h] [rbp+50h]
  int v32; // [rsp+B0h] [rbp+58h]
  wchar_t *v33; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = 0LL;
  v5 = Str1;
  v31 = 0;
  SidForString = 0;
  v33 = 0LL;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *a3 = v11;
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  LODWORD(v30) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( !v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 8;
  v17 = 48 * v14 + 8;
  if ( v17 > 0xFFFF )
    v17 = 0xFFFF;
  v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x6C416553u);
  *a2 = v18;
  v19 = v18;
  if ( !v18 )
    return (unsigned int)-1073741670;
  v32 = 8;
  memset(v18, 0, v17);
  *v19 = 2;
  v19[1] = v17;
  v20 = 0;
  *((_DWORD *)v19 + 1) = 0;
  v21 = (unsigned int)v30;
  if ( (_DWORD)v30 )
  {
    while ( 1 )
    {
      v22 = 0;
      LODWORD(v30) = 0;
      while ( *v5 == 32 )
        ++v5;
      if ( *v5 == 40 )
      {
        do
          ++v5;
        while ( *v5 == 32 );
      }
      if ( wcsnicmp_0(v5, L"A", 1uLL) )
        break;
      for ( j = v5 + 2; *j == 32; ++j )
        ;
      if ( *j != 59 )
        break;
      do
        v24 = *++j;
      while ( *j == 32 );
      for ( ; v24 != 59; v24 = *v25 )
      {
        if ( v24 == 32 )
        {
          do
            ++j;
          while ( *j == 32 );
        }
        if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
        {
          v22 |= v31;
          v25 = v33;
          LODWORD(v30) = v22;
        }
        else
        {
          SepSddlParseWideStringUlong(j, &v33, &v30);
          v25 = v33;
          if ( v33 == j )
            goto LABEL_66;
          v22 = (int)v30;
        }
        j = v25;
      }
      v26 = j + 1;
      v27 = 2LL;
      do
      {
        while ( *v26 == 32 )
          ++v26;
        if ( *v26 != 59 )
          SidForString = -1073741811;
        ++v26;
        --v27;
      }
      while ( v27 );
      if ( SidForString )
        goto LABEL_67;
      while ( *v26 == 32 )
        ++v26;
      v30 = 0LL;
      SidForString = SepSddlGetSidForString(v26);
      if ( SidForString )
      {
LABEL_63:
        v16 = v32;
        goto LABEL_64;
      }
      v28 = v30;
      if ( !v30 )
        goto LABEL_56;
      while ( *v28 == 32 )
        ++v28;
      if ( *v28 != 41 )
      {
LABEL_56:
        SidForString = -1073741705;
        goto LABEL_67;
      }
      v5 = v28 + 1;
      if ( *v5 == 40 )
        ++v5;
      if ( ++v20 >= v21 )
        goto LABEL_63;
    }
LABEL_66:
    SidForString = -1073741811;
LABEL_67:
    v29 = (_WORD *)*a2;
  }
  else
  {
LABEL_64:
    v29 = (_WORD *)*a2;
    if ( !SidForString )
    {
      v29[1] = v16;
      return SidForString;
    }
  }
  ExFreePoolWithTag(v29, 0);
  *a2 = 0LL;
  return SidForString;
}
