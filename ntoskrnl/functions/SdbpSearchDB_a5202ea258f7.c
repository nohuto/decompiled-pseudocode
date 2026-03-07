__int64 __fastcall SdbpSearchDB(__int64 a1, void *a2, __int16 a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  unsigned int *v6; // r13
  wchar_t *Str1; // rdi
  unsigned int v9; // esi
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // r12
  int FirstStringIndexedTag; // eax
  int v14; // edi
  __int64 v15; // rdi
  __int64 v16; // r12
  int v18; // eax
  __int64 v19; // rdi
  int FirstIndexedWildCardTag; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  __int64 v24; // r12
  int FirstNamedTagHelper; // eax
  int v26; // eax
  int v27; // edi
  int NextIndexedWildCardTag; // eax
  int v29; // eax
  int v30; // edi
  unsigned int v31; // eax
  int FirstTag; // [rsp+40h] [rbp-40h]
  wchar_t *v33; // [rsp+48h] [rbp-38h]
  __int64 v34[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v35; // [rsp+60h] [rbp-20h]
  __int64 v36; // [rsp+70h] [rbp-10h]
  int v38; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+58h]

  v39 = a4;
  LOWORD(v38) = a3;
  v6 = a5;
  Str1 = *(wchar_t **)(a4 + 40);
  LODWORD(a6) = 0;
  v9 = 0;
  v36 = 0LL;
  v38 = 0;
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
  memset(a5, 0, 0x80uLL);
  v33 = Str1;
  FirstTag = SdbFindFirstTag(a2, 0LL, 28673LL);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_11;
  }
  v10 = 16;
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    v11 = 1LL;
    FirstIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, (__int64)v34);
    goto LABEL_21;
  }
  v11 = 0LL;
  if ( a2 != *(void **)(a1 + 8) )
  {
    FirstIndexedWildCardTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24587, Str1, 1);
LABEL_21:
    while ( 1 )
    {
      v21 = FirstIndexedWildCardTag;
      if ( !FirstIndexedWildCardTag )
        break;
      v22 = SdbpCheckExe(a1, (int)a2, FirstIndexedWildCardTag, (int)&v38, v39, 1, (__int64)&a6, v6);
      v9 = v38;
      if ( v22 )
      {
        if ( (_DWORD)a6 != 2 )
          goto LABEL_10;
      }
      else if ( (unsigned int)v38 > 0x10 )
      {
        goto LABEL_17;
      }
      if ( v11 )
        FirstIndexedWildCardTag = SdbpFindNextIndexedWildCardTag(a2, v34);
      else
        FirstIndexedWildCardTag = SdbpFindNextNamedTagHelper((int)a2, FirstTag, v21, 24587, v33, 1);
    }
    Str1 = v33;
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    v12 = 1LL;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, Str1, (unsigned int *)v34);
  }
  else
  {
    v12 = 0LL;
    FirstStringIndexedTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24577, Str1, 0);
  }
  while ( 1 )
  {
    v14 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v18 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v38, v39, 0, (__int64)&a6, v6);
    v9 = v38;
    if ( v18 )
    {
      if ( (_DWORD)a6 != 2 )
        goto LABEL_10;
    }
    else if ( (unsigned int)v38 > 0x10 )
    {
      goto LABEL_17;
    }
    if ( v12 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v34);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTagHelper((int)a2, FirstTag, v14, 24577, v33, 0);
  }
  v15 = v39;
  if ( *(_QWORD *)(v39 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2) )
    {
      v23 = 1;
      v24 = 1LL;
    }
    else
    {
      v23 = 0;
      v24 = 0LL;
    }
    if ( v23 )
      FirstNamedTagHelper = SdbFindFirstStringIndexedTag(
                              a2,
                              28679LL,
                              24608,
                              *(const WCHAR **)(v15 + 48),
                              (unsigned int *)v34);
    else
      FirstNamedTagHelper = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24608, *(wchar_t **)(v15 + 48), 0);
    while ( 1 )
    {
      v27 = FirstNamedTagHelper;
      if ( !FirstNamedTagHelper )
        break;
      v26 = SdbpCheckExe(a1, (int)a2, FirstNamedTagHelper, (int)&v38, v39, 0, (__int64)&a6, v6);
      v9 = v38;
      if ( v26 )
      {
        if ( (_DWORD)a6 != 2 )
          goto LABEL_10;
      }
      else if ( (unsigned int)v38 > 0x10 )
      {
        goto LABEL_17;
      }
      if ( v24 )
        FirstNamedTagHelper = SdbFindNextStringIndexedTag(a2, v34);
      else
        FirstNamedTagHelper = SdbpFindNextNamedTagHelper((int)a2, FirstTag, v27, 24608, *(wchar_t **)(v39 + 48), 0);
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    v16 = 1LL;
    NextIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, (__int64)v34);
    goto LABEL_58;
  }
  v16 = 0LL;
  if ( a2 != *(void **)(a1 + 8) )
  {
    NextIndexedWildCardTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24587, v33, 1);
LABEL_58:
    while ( 1 )
    {
      v30 = NextIndexedWildCardTag;
      if ( !NextIndexedWildCardTag )
        break;
      v29 = SdbpCheckExe(a1, (int)a2, NextIndexedWildCardTag, (int)&v38, v39, 2, (__int64)&a6, v6);
      v9 = v38;
      if ( v29 )
      {
        if ( (_DWORD)a6 != 2 )
          break;
      }
      else if ( (unsigned int)v38 > 0x10 )
      {
        goto LABEL_17;
      }
      if ( v16 )
        NextIndexedWildCardTag = SdbpFindNextIndexedWildCardTag(a2, v34);
      else
        NextIndexedWildCardTag = SdbpFindNextNamedTagHelper((int)a2, FirstTag, v30, 24587, v33, 1);
    }
  }
LABEL_10:
  if ( v9 <= 0x10 )
  {
LABEL_11:
    v10 = v9;
    if ( !v9 )
      return v9;
  }
LABEL_17:
  v19 = v10;
  do
  {
    v31 = SdbFindFirstTag(a2, *v6, 24582LL);
    if ( v31 )
      SdbGetStringTagPtr(a2, v31);
    v6 += 2;
    --v19;
  }
  while ( v19 );
  return v9;
}
