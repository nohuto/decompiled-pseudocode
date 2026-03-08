/*
 * XREFs of punycode_decode @ 0x1409BC720
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405AD830 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x1405AD798 (FindLabelEnd.c)
 *     InsertChar @ 0x1405AD808 (InsertChar.c)
 *     ValidateStd3Range @ 0x1405ADE48 (ValidateStd3Range.c)
 *     adapt @ 0x1405ADE84 (adapt.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *Str1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  wchar_t *v11; // rdi
  unsigned __int16 *v12; // r13
  wchar_t *v13; // r14
  unsigned __int16 *v14; // r15
  wchar_t *v15; // rbp
  char v16; // r12
  wchar_t *LabelEnd; // rax
  unsigned __int16 *v18; // r9
  unsigned __int16 v19; // r10
  unsigned __int64 v20; // r11
  wchar_t *v21; // rsi
  signed __int64 v22; // rdi
  const wchar_t *v24; // rdx
  wchar_t *v25; // r8
  wchar_t *v26; // r9
  unsigned __int16 v27; // r11
  __int64 v28; // r10
  unsigned __int16 v29; // cx
  int v30; // eax
  int v31; // edi
  int v32; // r13d
  int v33; // r11d
  wchar_t *v34; // r15
  int v35; // r9d
  int v36; // r10d
  int i; // r8d
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  __int64 v41; // r11
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int16 *v45; // r11
  int v46; // ecx
  unsigned __int16 v47; // ax
  int v48; // r10d
  __int64 v49; // r11
  wchar_t *j; // r8
  unsigned __int16 v51; // ax
  bool v52; // zf
  int v53; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v54; // [rsp+30h] [rbp-68h]
  unsigned __int64 v55; // [rsp+38h] [rbp-60h]
  wchar_t *v56; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v57; // [rsp+48h] [rbp-50h]
  int v58; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v59; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v60; // [rsp+B8h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = Str1 - 1;
  v12 = &v9[v10];
  v13 = Str1;
  v56 = Str1 - 1;
  v14 = v9;
  v54 = v9;
  v57 = v9;
  v15 = &Str1[a2];
  v55 = (unsigned __int64)v12;
  *a8 = v9 - 1;
  if ( Str1 >= v15 )
    return 3221227286LL;
  v16 = a5;
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v13, (unsigned __int64)v15, v16);
    v21 = LabelEnd;
    if ( LabelEnd == v13 )
      break;
    if ( v16 )
    {
      v22 = (char *)LabelEnd - (char *)v13;
    }
    else
    {
      if ( a6 && (*v13 == 45 || (unsigned __int64)LabelEnd > v20 && *(LabelEnd - 1) == 45) )
        return 3221227286LL;
      v22 = (char *)LabelEnd - (char *)v13;
      if ( (__int64)(((char *)LabelEnd - (char *)v13) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        return 3221227286LL;
    }
    if ( (__int64)(((char *)v15 - (char *)v13) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
    {
      v24 = L"xl--";
      if ( !v16 )
        v24 = L"xn--";
      if ( !wcsnicmp(v13, v24, 4uLL) )
      {
        v13 += 4;
        *a7 = 0;
        v25 = v21 - 1;
        if ( v21 - 1 < v13 )
        {
LABEL_20:
          v25 = 0LL;
        }
        else
        {
          while ( *v25 != 45 )
          {
            if ( --v25 < v13 )
              goto LABEL_20;
          }
        }
        if ( v25 == v21 - 1 )
          return 3221227286LL;
        if ( v25 && v25 > v13 )
        {
          v26 = v13;
          v27 = 128;
          v28 = v25 - v13;
          while ( v9 < v12 )
          {
            if ( v16 )
            {
              v29 = *v26;
              if ( !*v26 )
                return 3221227286LL;
            }
            else
            {
              if ( a6 && !ValidateStd3Range(*v26) || *v26 < 0x20u || *v26 == 127 )
                return 3221227286LL;
              v29 = *v26;
            }
            if ( v29 >= v27 )
              return 3221227286LL;
            if ( !v16 && (unsigned __int16)(v29 - 65) <= 0x19u )
              v29 += 32;
            *v9 = v29;
            ++v26;
            v59 = ++v9;
            if ( v26 == v25 )
              goto LABEL_40;
          }
          return 3221227286LL;
        }
        LODWORD(v28) = 0;
LABEL_40:
        v58 = 0;
        v30 = v28 + 1;
        v31 = 0;
        if ( (int)v28 <= 0 )
          v30 = 0;
        v32 = 128;
        v33 = 72;
        v34 = &v13[v30];
        if ( v34 < v21 )
        {
LABEL_43:
          v35 = 1;
          v36 = v31;
          for ( i = 36; v34 < v21; i += 36 )
          {
            v38 = *v34;
            if ( (unsigned __int16)(v38 - 48) > 9u )
            {
              if ( (unsigned __int16)(v38 - 97) > 0x19u )
              {
                if ( (unsigned __int16)(v38 - 65) > 0x19u )
                  return 3221227286LL;
                v39 = v38 - 65;
              }
              else
              {
                v39 = v38 - 97;
              }
            }
            else
            {
              v39 = v38 - 22;
            }
            ++v34;
            if ( v39 < 0 || v39 > (0x7FFFFFF - v31) / v35 )
              break;
            v31 += v35 * v39;
            if ( i > v33 )
            {
              if ( i < v33 + 26 )
                v40 = i - v33;
              else
                v40 = 26;
            }
            else
            {
              v40 = 1;
            }
            if ( v39 < v40 )
            {
              v53 = adapt(v31 - v36, (unsigned int)(v9 - v54) - v58 + 1, v36 == 0);
              v42 = v41 - v58 + 1;
              v43 = v31 / v42;
              if ( v43 > 0x7FFFFFF - v32 )
                return 3221227286LL;
              v32 += v43;
              v44 = v31 % v42;
              if ( (unsigned int)(v32 - 128) > 0x10FF7F || (unsigned int)(v32 - 55296) <= 0x7FF )
                return 3221227286LL;
              if ( v58 <= 0 )
              {
                v45 = &v54[(int)v44];
              }
              else
              {
                v45 = v54;
                v46 = v44;
                if ( (int)v44 > 0 )
                {
                  while ( v45 < v9 )
                  {
                    if ( (unsigned __int16)(*v45 + 10240) <= 0x7FFu )
                      ++v45;
                    --v46;
                    ++v45;
                    if ( v46 <= 0 )
                      goto LABEL_72;
                  }
                  return 3221227286LL;
                }
              }
LABEL_72:
              if ( v32 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v55 - 2 || v45 > v9 )
                  return 3221227286LL;
                InsertChar((v32 - 0x10000) / 1024 - 10240, v45, &v59);
                ++v58;
                v47 = v48 % 1024 - 9216;
                v45 = (unsigned __int16 *)(v49 + 2);
              }
              else
              {
                if ( (unsigned __int64)v9 >= v55 || v45 > v9 )
                  return 3221227286LL;
                v47 = v32;
              }
              InsertChar(v47, v45, &v59);
              v9 = v59;
              v31 = v44 + 1;
              if ( v34 >= v21 )
                goto LABEL_81;
              v33 = v53;
              goto LABEL_43;
            }
            if ( v35 > 0x7FFFFFF / (36 - v40) )
              return 3221227286LL;
            v35 *= 36 - v40;
          }
          return 3221227286LL;
        }
LABEL_81:
        v12 = (unsigned __int16 *)v55;
        v14 = v54;
        goto LABEL_82;
      }
      v19 = 128;
    }
    if ( (__int64)(((char *)v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(v22 & 0xFFFFFFFFFFFFFFFEuLL) )
      return 3221227286LL;
    for ( j = v13; j < v21; v59 = v9 )
    {
      if ( v16 )
      {
        v51 = *j;
        v52 = *j == 0;
      }
      else
      {
        if ( a6 && !ValidateStd3Range(*j) )
          return 3221227286LL;
        v51 = *j;
        if ( *j < 0x20u )
          return 3221227286LL;
        v52 = v51 == 127;
      }
      if ( v52 || v51 >= v19 )
        return 3221227286LL;
      *v9 = v51;
      ++j;
      ++v9;
    }
LABEL_82:
    if ( !v16 && ((__int64)(((char *)v21 - (char *)v13) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v14) )
      return 3221227286LL;
    if ( v21 != v15 )
    {
      if ( v9 >= v12 )
        return 3221227286LL;
      *v9++ = *v21;
      v59 = v9;
    }
    if ( v16 )
    {
      v16 = 0;
      v56 = v21;
      v11 = v21;
      *a8 = (char *)v9 - (v15 != v21 ? 2 : 0);
      if ( v21 == v15 - 1 )
        return 3221227286LL;
    }
    else
    {
      v11 = v56;
    }
    v13 = v21 + 1;
    v54 = v9;
    v14 = v9;
    v18 = v9;
    if ( v21 >= v15 )
      goto LABEL_109;
  }
  if ( v16 || LabelEnd != v15 )
    return 3221227286LL;
LABEL_109:
  if ( v18 != v57 && v15 - v11 <= 256LL - (*(v15 - 1) != 46) )
  {
    *v60 = v9 - v57;
    return 0LL;
  }
  return 3221227286LL;
}
