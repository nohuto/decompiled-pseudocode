__int64 punycode_encode(wchar_t *Str1, int a2, ...)
{
  wchar_t *j; // rbx
  _DWORD *v3; // r13
  wchar_t *v4; // rsi
  NTSTRSAFE_PWSTR v5; // r15
  wchar_t *v6; // r11
  wchar_t *v7; // r12
  char v8; // r14
  NTSTRSAFE_PWSTR v9; // rbp
  NTSTRSAFE_PWSTR v10; // r9
  wchar_t *LabelEnd; // rax
  NTSTRSAFE_PWSTR v12; // r10
  wchar_t *v13; // r11
  unsigned __int16 *v14; // rdi
  const wchar_t *v15; // r13
  __int64 v16; // r9
  wchar_t *v17; // r8
  int i; // r15d
  int v19; // ecx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // r12
  wchar_t *v23; // rdx
  wchar_t *v24; // rcx
  int v25; // edx
  int v26; // r13d
  int v27; // r9d
  int v28; // r11d
  unsigned __int16 *v29; // r10
  int UTF32; // eax
  __int64 v31; // r10
  __int64 v32; // rcx
  unsigned __int16 *v33; // rax
  int v34; // r9d
  bool k; // cf
  int v36; // eax
  int v37; // r9d
  int v38; // ecx
  int v39; // r13d
  int m; // r10d
  int v41; // r8d
  int v42; // r13d
  __int16 v43; // ax
  int v44; // edx
  __int16 v45; // ax
  int v46; // eax
  __int64 v47; // rcx
  int v49; // [rsp+40h] [rbp-88h]
  int v50; // [rsp+44h] [rbp-84h]
  wchar_t *v51; // [rsp+48h] [rbp-80h]
  int v52; // [rsp+50h] [rbp-78h]
  unsigned __int16 *v53; // [rsp+58h] [rbp-70h]
  wchar_t *v54; // [rsp+60h] [rbp-68h]
  NTSTRSAFE_PWSTR v55; // [rsp+68h] [rbp-60h]
  NTSTRSAFE_PWSTR v56; // [rsp+70h] [rbp-58h]
  __int64 v57; // [rsp+78h] [rbp-50h]
  int v59; // [rsp+D8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+18h]
  int *v62; // [rsp+E8h] [rbp+20h]
  __int64 v63; // [rsp+F0h] [rbp+28h]
  __int64 v64; // [rsp+F8h] [rbp+30h]
  va_list va1; // [rsp+100h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  ppszDestEnd = va_arg(va1, NTSTRSAFE_PWSTR);
  v62 = va_arg(va1, int *);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  j = ppszDestEnd;
  v56 = ppszDestEnd;
  v3 = v62;
  v55 = ppszDestEnd;
  v4 = Str1;
  v5 = ppszDestEnd;
  v6 = &Str1[a2];
  v54 = v6;
  v7 = &ppszDestEnd[*v62];
  v51 = v7;
  if ( a2 <= 0 )
    goto LABEL_91;
  v8 = v63;
  v9 = ppszDestEnd;
  v10 = ppszDestEnd;
  if ( Str1 < v6 )
  {
    while ( 1 )
    {
      LabelEnd = FindLabelEnd(v4, (unsigned __int64)v6, v8);
      v14 = LabelEnd;
      if ( LabelEnd == v4 )
        break;
      if ( !v8 && (_BYTE)v64 && (*v4 == 45 || LabelEnd > Str1 && *(LabelEnd - 1) == 45) )
        goto LABEL_91;
      v15 = L"xl--";
      if ( !v8 )
        v15 = L"xn--";
      if ( RtlStringCchCopyNExW(j, v7 - j, v15, 4uLL, (NTSTRSAFE_PWSTR *)va, 0LL, 0) < 0 )
      {
LABEL_87:
        *v62 = 0;
        return 3221225507LL;
      }
      j = ppszDestEnd;
      v16 = 2LL;
      v17 = v4;
      for ( i = 0; v17 < v14; v17 = (wchar_t *)((char *)v17 + v16) )
      {
        v19 = *v17;
        if ( (unsigned __int16)v19 >= 0x80u )
        {
          if ( (unsigned __int16)(v19 + 10240) <= 0x3FFu )
            v17 = (wchar_t *)((char *)v17 + v16);
        }
        else
        {
          if ( v8 )
          {
            v20 = (_WORD)v19 == 0;
          }
          else
          {
            if ( (_BYTE)v64 && !ValidateStd3Range(v19) || (unsigned __int16)v19 < 0x20u )
              goto LABEL_91;
            v20 = (_WORD)v19 == 127;
          }
          if ( v20 )
            goto LABEL_91;
          if ( j >= v7 )
            goto LABEL_87;
          if ( !v8 && (unsigned __int16)(v19 - 65) <= 0x19u )
            LOWORD(v19) = v19 + 32;
          *j = v19;
          j = (wchar_t *)((char *)j + v16);
          ppszDestEnd = j;
          ++i;
        }
      }
      v21 = i;
      v52 = i;
      v22 = v14 - v4;
      v57 = v22;
      if ( i == v22 )
      {
        v23 = j - 4;
        v24 = v9;
        for ( j = v23; v24 < v23; v24 = (wchar_t *)((char *)v24 + v16) )
          *v24 = v24[4];
        ppszDestEnd = v23;
      }
      else
      {
        if ( (__int64)(((char *)v54 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
        {
          if ( !wcsnicmp(v4, v15, 4uLL) )
            goto LABEL_91;
          v21 = i;
        }
        v59 = 0;
        v25 = 0;
        if ( i > 0 )
        {
          if ( j >= v51 )
            goto LABEL_87;
          *j++ = 45;
          ppszDestEnd = j;
        }
        v49 = 72;
        v26 = 128;
        v27 = 0;
        if ( v21 < v22 )
        {
          do
          {
            v28 = 0x7FFFFFF;
            v29 = v4;
            if ( v4 < v14 )
            {
              do
              {
                UTF32 = GetUTF32(v29);
                if ( UTF32 >= v26 && UTF32 < v28 )
                  v28 = UTF32;
                v32 = 4LL;
                if ( UTF32 < 0x10000 )
                  v32 = 2LL;
                v29 = (unsigned __int16 *)(v32 + v31);
              }
              while ( v29 < v14 );
              v22 = v57;
              v25 = v59;
            }
            v33 = v4;
            v34 = (v28 - v26) * (i - v25 + 1) + v27;
            for ( k = v4 < v14; ; k = &v53[v47] < v14 )
            {
              v53 = v33;
              if ( !k )
                break;
              v36 = GetUTF32(v33);
              v38 = v37 + 1;
              v50 = v36;
              if ( v36 >= v28 )
                v38 = v37;
              v34 = v38;
              if ( v36 == v28 )
              {
                v39 = v38;
                for ( m = 36; ; m += 36 )
                {
                  if ( m > v49 )
                    v41 = m < v49 + 26 ? m - v49 : 26;
                  else
                    v41 = 1;
                  if ( v39 < v41 )
                    break;
                  if ( j >= v51 )
                    goto LABEL_87;
                  v42 = v39 - v41;
                  v43 = 22;
                  v44 = v41 + v42 % (36 - v41);
                  if ( v44 <= 25 )
                    v43 = 97;
                  *j++ = v44 + v43;
                  v39 = v42 / (36 - v41);
                }
                if ( j >= v51 )
                  goto LABEL_87;
                v45 = 22;
                if ( v39 <= 25 )
                  v45 = 97;
                *j++ = v39 + v45;
                ppszDestEnd = j;
                v46 = adapt(v38, i - v59 + 1, i == v52);
                v25 = v59;
                ++i;
                v49 = v46;
                v34 = 0;
                v36 = v50;
                if ( v28 >= 0x10000 )
                {
                  ++i;
                  v25 = ++v59;
                }
              }
              else
              {
                v25 = v59;
              }
              v47 = 2LL;
              if ( v36 < 0x10000 )
                v47 = 1LL;
              v33 = &v53[v47];
            }
            v27 = v34 + 1;
            v26 = v28 + 1;
          }
          while ( i < v22 );
        }
      }
      if ( !v8 && (__int64)(((char *)j - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_91;
      v6 = v54;
      v7 = v51;
      if ( v14 != v54 )
      {
        if ( j >= v51 )
          goto LABEL_87;
        *j++ = *v14;
        ppszDestEnd = j;
        if ( v8 )
        {
          if ( *v14 == 64 )
          {
            v8 = 0;
            v56 = j;
          }
        }
      }
      v4 = v14 + 1;
      v9 = j;
      v10 = j;
      if ( v14 >= v54 )
      {
        v5 = v55;
        v3 = v62;
        goto LABEL_83;
      }
    }
    if ( v8 || LabelEnd != v13 )
      goto LABEL_91;
    v5 = v55;
    v3 = v62;
LABEL_84:
    if ( v10 - v56 > 255LL - (*(v12 - 1) != 46) )
      goto LABEL_91;
    goto LABEL_85;
  }
LABEL_83:
  v12 = v9;
  if ( !v8 )
    goto LABEL_84;
LABEL_85:
  if ( *(j - 1) != 64 )
  {
    *v3 = j - v5;
    return 0LL;
  }
LABEL_91:
  *v62 = 0;
  return 3221227286LL;
}
