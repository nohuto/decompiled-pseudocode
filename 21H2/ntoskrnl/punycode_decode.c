/*
 * XREFs of punycode_decode @ 0x140916A3C
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058D434 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x14058D358 (FindLabelEnd.c)
 *     InsertChar @ 0x14058D40C (InsertChar.c)
 *     ValidateStd3Range @ 0x14058DA30 (ValidateStd3Range.c)
 *     adapt @ 0x14058DA6C (adapt.c)
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
  _BYTE *v8; // r13
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  unsigned __int16 *v11; // rbp
  wchar_t *v12; // r14
  unsigned __int16 *v13; // r12
  wchar_t *v14; // rsi
  char v15; // r15
  wchar_t *LabelEnd; // rax
  unsigned __int16 *v17; // r9
  signed __int64 v18; // r10
  unsigned __int64 v19; // r11
  wchar_t *v20; // rdi
  const wchar_t *v21; // rdx
  wchar_t *v22; // r8
  __int16 v23; // r11
  wchar_t *v24; // r9
  __int64 v25; // r10
  unsigned __int16 v26; // cx
  int v28; // eax
  int v29; // r13d
  int v30; // ebp
  int v31; // r11d
  wchar_t *v32; // r12
  int v33; // r10d
  int v34; // r9d
  int i; // r8d
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  __int64 v39; // r11
  __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ebp
  unsigned __int16 *v44; // r10
  unsigned __int16 *v45; // rax
  unsigned __int16 v46; // r11
  __int16 v47; // r11
  __int64 v48; // r10
  wchar_t *v49; // r8
  __int16 v50; // r9
  int v51; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v52; // [rsp+30h] [rbp-68h]
  unsigned __int64 v53; // [rsp+38h] [rbp-60h]
  wchar_t *v54; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v55; // [rsp+48h] [rbp-50h]
  int v56; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v57; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v58; // [rsp+B8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = &v9[v10];
  v12 = Str1;
  v13 = v9;
  v52 = v9;
  v55 = v9;
  v53 = (unsigned __int64)v11;
  v14 = &Str1[a2];
  v54 = Str1 - 1;
  *a8 = v9 - 1;
  if ( Str1 >= v14 )
    return 3221227286LL;
  v15 = a5;
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v12, (unsigned __int64)v14, v15);
    v20 = LabelEnd;
    if ( LabelEnd == v12 )
      break;
    if ( !v15
      && (a6 && (*v12 == 45 || (unsigned __int64)LabelEnd > v19 && *(LabelEnd - 1) == 45)
       || (__int64)(((char *)LabelEnd - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > v18) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_80;
    v21 = L"xl--";
    if ( !v15 )
      v21 = L"xn--";
    if ( wcsnicmp(v12, v21, 4uLL) )
    {
      LOWORD(v18) = 126;
LABEL_80:
      if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      v49 = v12;
      if ( v12 < v20 )
      {
        v50 = 1;
        while ( (v15 || (!a6 || ValidateStd3Range(*v49)) && *v49 >= 0x20u && *v49 != 127)
             && (unsigned __int16)(*v49 - v50) <= (unsigned __int16)v18 )
        {
          *v9 = *v49++;
          v57 = ++v9;
          if ( v49 >= v20 )
            goto LABEL_92;
        }
        return 3221227286LL;
      }
      goto LABEL_92;
    }
    *v8 = 0;
    v12 += 4;
    v22 = v20 - 1;
    if ( v20 - 1 < v12 )
    {
LABEL_18:
      v22 = 0LL;
    }
    else
    {
      while ( *v22 != 45 )
      {
        if ( --v22 < v12 )
          goto LABEL_18;
      }
    }
    if ( v22 == v20 - 1 )
      return 3221227286LL;
    if ( v22 && v22 > v12 )
    {
      v23 = 1;
      v24 = v12;
      v25 = v22 - v12;
      do
      {
        if ( v9 >= v11 )
          break;
        if ( !v15 && (a6 && !ValidateStd3Range(*v24) || *v24 < 0x20u || *v24 == 127) )
          return 3221227286LL;
        v26 = *v24;
        if ( (unsigned __int16)(*v24 - v23) > 0x7Eu )
          return 3221227286LL;
        if ( !v15 && (unsigned __int16)(v26 - 65) <= 0x19u )
          v26 += 32;
        *v9 = v26;
        ++v24;
        v57 = ++v9;
      }
      while ( v24 != v22 );
      if ( v24 != v22 )
        return 3221227286LL;
    }
    else
    {
      LODWORD(v25) = 0;
    }
    v56 = 0;
    v28 = v25 + 1;
    v29 = 128;
    if ( (int)v25 <= 0 )
      v28 = 0;
    v30 = 0;
    v31 = 72;
    v32 = &v12[v28];
    if ( v32 < v20 )
    {
LABEL_40:
      v33 = v30;
      v34 = 1;
      for ( i = 36; v32 < v20; i += 36 )
      {
        v36 = *v32;
        if ( (unsigned __int16)(v36 - 48) > 9u )
        {
          if ( (unsigned __int16)(v36 - 97) > 0x19u )
            v37 = (unsigned __int16)(v36 - 65) > 0x19u ? -1 : v36 - 65;
          else
            v37 = v36 - 97;
        }
        else
        {
          v37 = v36 - 22;
        }
        ++v32;
        if ( v37 < 0 || v37 > (0x7FFFFFF - v30) / v34 )
          break;
        v30 += v34 * v37;
        if ( i > v31 )
        {
          if ( i < v31 + 26 )
            v38 = i - v31;
          else
            v38 = 26;
        }
        else
        {
          v38 = 1;
        }
        if ( v37 < v38 )
        {
          v51 = adapt(v30 - v33, (unsigned int)(v9 - v52) - v56 + 1, v33 == 0);
          v40 = v39 - v56;
          v41 = v30 / (v40 + 1);
          v42 = v30 % (v40 + 1);
          v43 = v42;
          if ( v41 > 0x7FFFFFF - v29 )
            return 3221227286LL;
          v29 += v41;
          if ( (unsigned int)(v29 - 128) > 0x10FF7F || (unsigned int)(v29 - 55296) <= 0x7FF )
            return 3221227286LL;
          if ( v56 <= 0 )
          {
            v44 = &v52[(int)v42];
          }
          else
          {
            v44 = v52;
            if ( (int)v42 > 0 )
            {
              while ( v44 < v9 )
              {
                v45 = v44 + 1;
                LODWORD(v42) = v42 - 1;
                if ( (unsigned __int16)(*v44 + 10240) > 0x7FFu )
                  v45 = v44;
                v44 = v45 + 1;
                if ( (int)v42 <= 0 )
                  goto LABEL_70;
              }
              return 3221227286LL;
            }
          }
LABEL_70:
          if ( v29 >= 0x10000 )
          {
            if ( (unsigned __int64)v9 >= v53 - 2 || v44 > v9 )
              return 3221227286LL;
            InsertChar((v29 - 0x10000) / 1024 - 10240, v44, &v57);
            ++v56;
            v46 = v47 - 9216;
            v44 = (unsigned __int16 *)(v48 + 2);
          }
          else
          {
            if ( (unsigned __int64)v9 >= v53 || v44 > v9 )
              return 3221227286LL;
            v46 = v29;
          }
          InsertChar(v46, v44, &v57);
          v9 = v57;
          v30 = v43 + 1;
          if ( v32 >= v20 )
            goto LABEL_91;
          v31 = v51;
          goto LABEL_40;
        }
        if ( v34 > 0x7FFFFFF / (36 - v38) )
          return 3221227286LL;
        v34 *= 36 - v38;
      }
      return 3221227286LL;
    }
LABEL_91:
    v8 = a7;
    v11 = (unsigned __int16 *)v53;
    v13 = v52;
LABEL_92:
    if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
      return 3221227286LL;
    if ( v20 != v14 )
    {
      if ( v9 >= v11 )
        return 3221227286LL;
      *v9++ = *v20;
      v57 = v9;
    }
    if ( v15 )
    {
      v15 = 0;
      v54 = v20;
      *a8 = (char *)v9 - (v14 != v20 ? 2 : 0);
      if ( v20 == v14 - 1 )
        return 3221227286LL;
    }
    v12 = v20 + 1;
    v52 = v9;
    v13 = v9;
    v17 = v9;
    if ( v20 >= v14 )
      goto LABEL_104;
  }
  if ( v15 || LabelEnd != v14 )
    return 3221227286LL;
LABEL_104:
  if ( v17 != v55 && v14 - v54 <= 256LL - (*(v14 - 1) != 46) )
  {
    *v58 = v17 - v55;
    return 0LL;
  }
  return 3221227286LL;
}
