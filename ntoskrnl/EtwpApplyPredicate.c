char __fastcall EtwpApplyPredicate(unsigned __int16 *a1, int a2, __int64 a3, const char *a4, unsigned int a5, bool *a6)
{
  const char *v6; // rdi
  char v9; // r14
  int v10; // r15d
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  bool v16; // bl
  bool v17; // zf
  unsigned int v18; // r9d
  char *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  const wchar_t *v22; // rsi
  char *j; // rcx
  __int64 v24; // rcx
  wchar_t v25; // r15
  size_t v26; // r13
  const char *v27; // r12
  char *v28; // rsi
  unsigned __int64 v29; // rax
  const char *v30; // rsi
  const char *i; // rcx
  unsigned int v32; // ecx
  const char *v33; // rdx
  char v34; // r12
  size_t v35; // r15
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v43; // [rsp+28h] [rbp-40h] BYREF
  const char *v44; // [rsp+30h] [rbp-38h] BYREF
  const char *v45; // [rsp+38h] [rbp-30h]
  const char *v46; // [rsp+40h] [rbp-28h]
  const wchar_t *v47; // [rsp+48h] [rbp-20h]

  v6 = a4;
  v43 = 0LL;
  v44 = 0LL;
  if ( !a5 )
    return 0;
  v9 = 0;
  v10 = *(unsigned __int16 *)(a3 + 2);
  if ( !a2 )
    return 0;
  v11 = a2 - 1;
  if ( !v11 )
  {
    if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v43) )
      return 0;
    v40 = *(_QWORD *)(a3 + 8);
    v41 = *(_QWORD *)(a3 + 16);
    if ( !v10 )
    {
      v17 = v43 == v40;
      goto LABEL_120;
    }
    if ( v10 != 1 )
    {
      switch ( v10 )
      {
        case 2:
          v16 = v43 <= v40;
          goto LABEL_121;
        case 3:
          v16 = v43 > v40;
          goto LABEL_121;
        case 4:
          v16 = v43 < v40;
          goto LABEL_121;
        case 5:
          v16 = v43 >= v40;
          goto LABEL_121;
        case 6:
          if ( v40 > v43 || v43 > v41 )
            goto LABEL_112;
          break;
        case 7:
          if ( v43 >= v40 && v41 >= v43 )
            goto LABEL_112;
          break;
        default:
          if ( v10 != 8 || !v40 )
            return 0;
          v38 = v43 % v40;
          goto LABEL_82;
      }
LABEL_109:
      v16 = 1;
      goto LABEL_121;
    }
    v39 = v43 == v40;
LABEL_118:
    v16 = !v39;
    goto LABEL_121;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !(unsigned __int8)EtwpGetFieldValue(a4, a5, &v44) )
      return 0;
    if ( !v10 )
    {
      v17 = v44 == *(const char **)(a3 + 8);
      goto LABEL_120;
    }
    if ( v10 != 1 )
    {
      switch ( v10 )
      {
        case 2:
          v16 = (unsigned __int64)v44 <= *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 3:
          v16 = (unsigned __int64)v44 > *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 4:
          v16 = (unsigned __int64)v44 < *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 5:
          v16 = (unsigned __int64)v44 >= *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 6:
          if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v44 || (unsigned __int64)v44 > *(_QWORD *)(a3 + 16) )
            goto LABEL_112;
          break;
        case 7:
          if ( (unsigned __int64)v44 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v44 )
            goto LABEL_112;
          break;
        case 8:
          v37 = *(_QWORD *)(a3 + 8);
          if ( !v37 )
            return 0;
          v38 = (unsigned __int64)v44 % v37;
LABEL_82:
          v17 = v38 == 0;
          goto LABEL_120;
        default:
          return 0;
      }
      goto LABEL_109;
    }
    v39 = v44 == *(const char **)(a3 + 8);
    goto LABEL_118;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v28 = (char *)a1 + a1[24];
    v29 = (unsigned __int64)&v28[a1[25]];
    v30 = &v28[*(_QWORD *)(a3 + 8)];
    if ( (unsigned __int64)v30 >= v29 )
      return 0;
    for ( i = v30; *i && (unsigned __int64)i < v29; ++i )
      ;
    v32 = (_DWORD)i - (_DWORD)v30;
    if ( v32 )
    {
      if ( v10 != 20 )
      {
        if ( v10 != 21 )
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v16 = v9;
          if ( v32 == a5 )
          {
            v16 = 1;
            v33 = v30;
            while ( v32 )
            {
              if ( *v6 != *v30 )
              {
                v16 = 0;
                break;
              }
              v46 = ++v6;
              v30 = v33 + 1;
              v33 = v30;
              v44 = v30;
              --v32;
            }
LABEL_31:
            if ( v9 )
            {
LABEL_13:
              v17 = !v16;
LABEL_120:
              v16 = v17;
            }
          }
LABEL_121:
          *a6 = v16;
          return 1;
        }
        v9 = 1;
      }
      v16 = v9;
      if ( v32 > a5 )
        goto LABEL_121;
      v34 = *v30;
      v35 = v32;
      v36 = (unsigned __int64)&a4[a5 - (unsigned __int64)v32 + 1];
      v16 = 0;
      while ( (unsigned __int64)v6 < v36 )
      {
        if ( *v6 == v34 && !strncmp(v6, v30, v35) )
        {
          v16 = 1;
          goto LABEL_31;
        }
        v46 = ++v6;
      }
      goto LABEL_31;
    }
LABEL_112:
    v16 = 0;
    goto LABEL_121;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (a5 & 1) != 0 )
      return 0;
    v18 = a5 >> 1;
    v19 = (char *)a1 + a1[22];
    v20 = (unsigned __int64)&v19[2 * ((unsigned __int64)a1[23] >> 1)];
    v21 = *(_QWORD *)(a3 + 8);
    v22 = (const wchar_t *)&v19[2 * v21];
    if ( (unsigned __int64)v22 >= v20 )
      return 0;
    for ( j = &v19[2 * v21]; *(_WORD *)j && (unsigned __int64)j < v20; j += 2 )
      ;
    v24 = (j - (char *)v22) >> 1;
    if ( (_DWORD)v24 )
    {
      if ( v10 != 20 )
      {
        if ( v10 != 21 )
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v16 = v9;
          if ( (_DWORD)v24 == v18 )
          {
            v16 = 1;
            while ( (_DWORD)v24 )
            {
              if ( *v22 != *(_WORD *)v6 )
              {
                v16 = 0;
                goto LABEL_31;
              }
              v6 += 2;
              v45 = v6;
              v47 = ++v22;
              LODWORD(v24) = v24 - 1;
            }
            goto LABEL_31;
          }
          goto LABEL_121;
        }
        v9 = 1;
      }
      v16 = v9;
      if ( (unsigned int)v24 > v18 )
        goto LABEL_121;
      v25 = *v22;
      v26 = (unsigned int)v24;
      v27 = &v6[2 * (v18 - (unsigned __int64)(unsigned int)v24) + 2];
      v16 = 0;
      while ( v6 < v27 )
      {
        if ( *(_WORD *)v6 == v25 && !wcsncmp((const wchar_t *)v6, v22, v26) )
        {
          v16 = 1;
          goto LABEL_31;
        }
        v6 += 2;
        v45 = v6;
      }
      goto LABEL_31;
    }
    goto LABEL_112;
  }
  if ( v14 == 1 && a5 == 16 )
  {
    v15 = *(_QWORD *)a4 - *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)a4 == *(_QWORD *)(a3 + 8) )
      v15 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
    v16 = v15 == 0;
    if ( v10 == 30 )
      goto LABEL_121;
    if ( v10 == 31 )
      goto LABEL_13;
  }
  return 0;
}
