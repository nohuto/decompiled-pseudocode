/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x1409D2214
 * Callers:
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     iswspace @ 0x1403D4650 (iswspace.c)
 *     wcstoxq @ 0x1403D653C (wcstoxq.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x140750A70 (LocalGetSidForString.c)
 *     DecodeAttributeName @ 0x1409CFF1C (DecodeAttributeName.c)
 *     GetDigitFromChar @ 0x1409D0648 (GetDigitFromChar.c)
 *     GetFlags @ 0x1409D06C8 (GetFlags.c)
 *     GetValueType @ 0x1409D18F8 (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x1409D1AA0 (IsLegalAttributeChar2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetRelativeAttributeForString(
        _WORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6,
        __int16 a7,
        char a8)
{
  unsigned int v8; // r14d
  _DWORD *v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // r12d
  bool v12; // zf
  unsigned int ValueType; // edi
  wint_t *v14; // rdi
  int i; // eax
  __int64 v16; // rdi
  unsigned __int16 *j; // rbx
  __int16 v18; // cx
  wint_t *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // r15d
  wint_t *k; // rbx
  wint_t *v24; // rsi
  PWSTR v25; // rsi
  wint_t *v26; // rbx
  wint_t v27; // ax
  wint_t mm; // cx
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  wint_t v31; // r10
  unsigned int v32; // eax
  wint_t nn; // cx
  wint_t v34; // ax
  wint_t n; // cx
  PSID v36; // r14
  wint_t *v37; // rbx
  ULONG v38; // eax
  unsigned int v39; // ecx
  wint_t v40; // ax
  _WORD *v41; // rbx
  wint_t *v42; // rbx
  unsigned __int64 v43; // rax
  wint_t v44; // ax
  __int16 v45; // r14
  unsigned __int64 v46; // rax
  wint_t *v47; // rbx
  unsigned int v48; // ecx
  wint_t v49; // ax
  unsigned __int64 v50; // rax
  PWSTR v51; // rbx
  wint_t m; // cx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned int v55; // eax
  int v56; // ebx
  unsigned int v57; // ebx
  __int16 v58; // ax
  int v59; // r14d
  PVOID v60; // rdx
  size_t v61; // r8
  int v62; // eax
  unsigned int v63; // r14d
  unsigned __int64 *v64; // r12
  wint_t v65; // ax
  unsigned __int16 *jj; // r9
  unsigned int v67; // r8d
  wint_t *v68; // r9
  unsigned int v69; // r8d
  unsigned __int16 *v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r10
  __int64 v74; // r11
  _BYTE *v75; // r10
  wint_t ii; // cx
  PSID v77; // rbx
  ULONG v78; // eax
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  wint_t v81; // ax
  wint_t kk; // cx
  WCHAR v83; // ax
  WCHAR *v84; // r15
  unsigned int v85; // ecx
  size_t v86; // rbx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  char *v89; // [rsp+48h] [rbp-41h]
  int v90; // [rsp+50h] [rbp-39h]
  int v91; // [rsp+54h] [rbp-35h] BYREF
  PWSTR EndPointer; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v93; // [rsp+60h] [rbp-29h]
  int v94; // [rsp+64h] [rbp-25h] BYREF
  PSID Sid; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+70h] [rbp-19h] BYREF
  int v97; // [rsp+78h] [rbp-11h]
  __int64 v98; // [rsp+80h] [rbp-9h]
  char v99; // [rsp+D8h] [rbp+4Fh] BYREF
  _QWORD *v100; // [rsp+E0h] [rbp+57h]
  _QWORD *v101; // [rsp+E8h] [rbp+5Fh]
  unsigned int *v102; // [rsp+F0h] [rbp+67h]

  v102 = a4;
  v101 = a3;
  v100 = a2;
  v8 = 0;
  EndPointer = 0LL;
  v9 = 0LL;
  v89 = 0LL;
  v10 = 0;
  P = 0LL;
  v11 = 0;
  a7 = 0;
  v94 = 0;
  v90 = 0;
  v99 = 0;
  a8 = 0;
  LOBYTE(a5) = 0;
  Sid = 0LL;
  v91 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_25;
  }
  v12 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v12 )
    return 1336;
  v14 = a1 + 1;
  for ( i = iswspace(a1[1]); i; i = iswspace(*v14) )
    ++v14;
  if ( *v14 != 34 )
    return 1336;
  v16 = (__int64)(v14 + 1);
  for ( j = (unsigned __int16 *)v16; IsLegalAttributeChar2(*j); ++j )
  {
    if ( !v18 )
      return 1336;
    if ( v10 + 1 < v10 )
      return 534;
    ++v10;
  }
  if ( v18 != 34 || !v10 )
    return 1336;
  v19 = j + 1;
  ValueType = DecodeAttributeName(v16, 2 * v10, &P);
  if ( !ValueType )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_WORD *)P + v20) );
    v98 = (unsigned int)(v20 + 1);
    v97 = 2 * v98;
    v21 = 2 * v98 + 20;
    a6 = v21;
    if ( (unsigned int)(2 * v98) >= 0xFFFFFFEC )
    {
      ValueType = 534;
LABEL_24:
      v9 = 0LL;
      goto LABEL_25;
    }
    while ( iswspace(*v19) )
      ++v19;
    if ( *v19 != 44 )
      goto LABEL_34;
    do
      ++v19;
    while ( iswspace(*v19) );
    ValueType = GetValueType(v19, &EndPointer, &a7);
    if ( ValueType )
      goto LABEL_24;
    for ( k = EndPointer; iswspace(*k); ++k )
      ;
    if ( *k != 44 )
      goto LABEL_34;
    do
      ++k;
    while ( iswspace(*k) );
    ValueType = GetFlags(k, &EndPointer, &v94);
    if ( ValueType )
      goto LABEL_24;
    v24 = EndPointer;
    if ( (v94 & 0xFFC0) != 0 )
      goto LABEL_34;
    while ( iswspace(*v24) )
      ++v24;
    if ( *v24 != 44 )
      goto LABEL_34;
    v25 = v24 + 1;
    v26 = v25;
    if ( a7 == 1 )
    {
      v49 = *v25;
      if ( *v25 )
      {
        while ( 1 )
        {
          v91 = 0;
          v50 = wcstoxq(0LL, v26, &EndPointer, 0, 0, &v91);
          if ( EndPointer == v26 && !v50 )
            goto LABEL_142;
          if ( v91 )
            goto LABEL_155;
          v51 = EndPointer;
          ++v11;
          for ( m = *EndPointer; iswspace(m); m = *v51 )
            ++v51;
          v49 = *v51;
          if ( *v51 != 44 )
          {
            if ( v49 != 41 )
              goto LABEL_142;
            break;
          }
          v26 = v51 + 1;
          if ( !*v26 )
            goto LABEL_142;
        }
      }
      if ( v49 != 41 )
      {
LABEL_142:
        ValueType = 1336;
LABEL_143:
        v9 = 0LL;
        goto LABEL_25;
      }
      v53 = 8LL * v11;
      if ( v53 > 0xFFFFFFFF || (v48 = v53 + v21, (unsigned int)v53 + v21 < v21) )
      {
LABEL_155:
        ValueType = 534;
        goto LABEL_143;
      }
LABEL_148:
      v21 = v48;
      goto LABEL_149;
    }
    if ( a7 != 2 )
    {
      if ( a7 == 3 )
      {
        v40 = *v25;
        if ( *v25 )
        {
          do
          {
            if ( iswspace(v40) )
            {
              do
                ++v26;
              while ( iswspace(*v26) );
              v21 = a6;
            }
            if ( *v26 != 34 )
              break;
            v41 = v26 + 1;
            while ( *v41 != 34 && *v41 )
            {
              ++v41;
              if ( v8 + 1 < v8 )
                goto LABEL_131;
              ++v8;
            }
            if ( v8 + 1 < v8 )
              goto LABEL_131;
            ++v8;
            if ( *v41 != 34 )
              break;
            v42 = v41 + 1;
            ++v11;
            if ( iswspace(*v42) )
            {
              do
                ++v42;
              while ( iswspace(*v42) );
              v21 = a6;
            }
            v40 = *v42;
            if ( *v42 != 44 )
            {
              if ( v40 != 41 )
                break;
              goto LABEL_109;
            }
            v26 = v42 + 1;
            v40 = *v26;
          }
          while ( *v26 );
        }
        else
        {
LABEL_109:
          if ( v40 == 41 )
          {
            v43 = 2LL * v8;
LABEL_129:
            if ( v43 > 0xFFFFFFFF )
              goto LABEL_131;
            v48 = v43 + v21;
            if ( (unsigned int)v43 + v21 < v21 )
              goto LABEL_131;
            goto LABEL_148;
          }
        }
LABEL_86:
        ValueType = 1336;
LABEL_132:
        v9 = v89;
        goto LABEL_25;
      }
      if ( a7 == 5 )
      {
        v34 = *v25;
        if ( *v25 )
        {
          while ( 1 )
          {
            for ( n = v34; iswspace(n); n = *v26 )
              ++v26;
            ValueType = LocalGetSidForString(v26, (__int64 *)&Sid, &EndPointer, &v99);
            if ( ValueType )
              goto LABEL_132;
            v36 = Sid;
            if ( !Sid )
            {
LABEL_125:
              v9 = 0LL;
              goto LABEL_25;
            }
            v37 = EndPointer;
            ++v11;
            v38 = RtlLengthSid(Sid);
            v39 = v38 + v21;
            if ( v38 + v21 < v21 )
              goto LABEL_131;
            v21 = v39 + 4;
            if ( v39 + 4 < v39 )
              goto LABEL_131;
            if ( v99 )
            {
              ExFreePoolWithTag(v36, 0);
              Sid = 0LL;
            }
            while ( iswspace(*v37) )
              ++v37;
            v34 = *v37;
            if ( *v37 != 44 )
            {
              if ( v34 != 41 )
                goto LABEL_86;
              break;
            }
            v26 = v37 + 1;
            v34 = *v26;
            if ( !*v26 )
              goto LABEL_86;
          }
        }
        if ( v34 != 41 )
          goto LABEL_86;
LABEL_149:
        v54 = 4LL * (v11 - 1);
        if ( v54 <= 0xFFFFFFFF )
        {
          v55 = v54 + v21;
          if ( (unsigned int)v54 + v21 >= v21 )
          {
            v56 = v55 + 3;
            if ( v55 + 3 < v55 )
            {
              v56 = -1;
              ValueType = 534;
            }
            v57 = v56 & 0xFFFFFFFC;
            v93 = v57;
            v89 = (char *)SddlpAlloc(v57);
            v9 = v89;
            if ( !v89 )
            {
              ValueType = 8;
              goto LABEL_25;
            }
            v58 = a7;
            v59 = 4 * v11 + 16;
            v60 = P;
            v61 = 2LL * (unsigned int)v98;
            *((_WORD *)v89 + 3) = 0;
            *((_WORD *)v89 + 2) = v58;
            v62 = v94;
            *(_DWORD *)v89 = v59;
            v63 = v97 + v59;
            *((_DWORD *)v89 + 2) = v62;
            *((_DWORD *)v89 + 3) = v11;
            memmove(&v89[4 * v11 + 16], v60, v61);
            v64 = (unsigned __int64 *)&v89[v63];
            if ( a7 == 1 )
            {
              v65 = *v25;
              if ( *v25 )
              {
                while ( 1 )
                {
                  v91 = 0;
                  v88 = wcstoxq(0LL, v25, &EndPointer, 0, 0, &v91);
                  if ( EndPointer == v25 && !v88 )
                    goto LABEL_238;
                  if ( v91 )
                  {
LABEL_239:
                    ValueType = 534;
                    goto LABEL_25;
                  }
                  *(_DWORD *)&v89[4 * v90 + 16] = v63;
                  *v64 = v88;
                  v63 += 8;
                  v25 = EndPointer;
                  v64 = (unsigned __int64 *)&v89[v63];
                  ++v90;
                  if ( iswspace(*EndPointer) )
                  {
                    do
                      ++v25;
                    while ( iswspace(*v25) );
                    v57 = v93;
                  }
                  v65 = *v25;
                  if ( *v25 != 44 )
                    goto LABEL_198;
                  if ( !*++v25 )
                    goto LABEL_238;
                }
              }
              goto LABEL_198;
            }
            if ( a7 == 2 )
              goto LABEL_219;
            if ( a7 != 3 )
            {
              if ( a7 == 5 )
              {
                v65 = *v25;
                if ( *v25 )
                {
                  while ( 1 )
                  {
                    for ( ii = v65; iswspace(ii); ii = *v25 )
                      ++v25;
                    ValueType = LocalGetSidForString(v25, (__int64 *)&Sid, &EndPointer, &v99);
                    if ( ValueType )
                      goto LABEL_25;
                    v77 = Sid;
                    if ( !Sid )
                      goto LABEL_25;
                    v78 = RtlLengthSid(Sid);
                    *(_DWORD *)&v89[4 * v90 + 16] = v63;
                    v79 = v63 + 4;
                    v63 = v78 + v79;
                    *(_DWORD *)v64 = v78;
                    memmove(&v89[v79], v77, v78);
                    ++v90;
                    v25 = EndPointer;
                    v64 = (unsigned __int64 *)&v89[v63];
                    if ( v99 )
                    {
                      ExFreePoolWithTag(v77, 0);
                      Sid = 0LL;
                    }
                    while ( iswspace(*v25) )
                      ++v25;
                    v65 = *v25;
                    if ( *v25 != 44 )
                    {
                      if ( v65 != 41 )
                        goto LABEL_238;
                      v57 = v93;
                      goto LABEL_198;
                    }
                    v65 = *++v25;
                    if ( !*v25 )
                      goto LABEL_238;
                  }
                }
                goto LABEL_198;
              }
              if ( a7 != 6 )
              {
                if ( a7 != 16 )
                  goto LABEL_238;
                v65 = *v25;
                if ( *v25 )
                {
                  while ( 1 )
                  {
                    if ( iswspace(v65) )
                    {
                      do
                        ++v25;
                      while ( iswspace(*v25) );
                      v57 = v93;
                    }
                    for ( jj = v25; GetDigitFromChar(*jj, &a6); jj = v68 + 1 )
                      ;
                    v69 = v67 >> 1;
                    *(_DWORD *)&v89[4 * v90 + 16] = v63;
                    *(_DWORD *)v64 = v69;
                    v63 += v69 + 4;
                    v70 = v68 - 1;
                    while ( v70 > v25 )
                    {
                      if ( !GetDigitFromChar(*v70, &a8) || !GetDigitFromChar(*(_WORD *)(v71 - 2), &a5) )
                        goto LABEL_238;
                      v70 = (unsigned __int16 *)(v72 - 4);
                      *(_BYTE *)(v74 + v73) = a8 | (16 * a5);
                    }
                    if ( v70 == v25 )
                    {
                      if ( !GetDigitFromChar(*v70, &a8) )
                        goto LABEL_238;
                      *v75 = a8;
                    }
                    v25 = v68;
                    ++v90;
                    v64 = (unsigned __int64 *)&v89[v63];
                    if ( iswspace(*v68) )
                    {
                      do
                        ++v25;
                      while ( iswspace(*v25) );
                      v57 = v93;
                    }
                    v65 = *v25;
                    if ( *v25 != 44 )
                      break;
                    v65 = *++v25;
                    if ( !*v25 )
                      goto LABEL_238;
                  }
                }
LABEL_198:
                if ( v65 == 41 )
                {
LABEL_199:
                  v80 = v100;
                  *v101 = v9;
                  *v102 = v57;
                  *v80 = v25 + 1;
                  goto LABEL_25;
                }
LABEL_238:
                ValueType = 1336;
                goto LABEL_25;
              }
LABEL_219:
              v65 = *v25;
              if ( *v25 )
              {
                while ( 1 )
                {
                  v91 = 0;
                  v87 = wcstoxq(0LL, v25, &EndPointer, 0, 1, &v91);
                  if ( EndPointer == v25 && !v87 )
                    goto LABEL_238;
                  if ( v91 )
                    goto LABEL_239;
                  v9[v90 + 4] = v63;
                  *v64 = v87;
                  v63 += 8;
                  v25 = EndPointer;
                  v64 = (unsigned __int64 *)((char *)v9 + v63);
                  ++v90;
                  if ( iswspace(*EndPointer) )
                  {
                    do
                      ++v25;
                    while ( iswspace(*v25) );
                    v9 = v89;
                  }
                  v65 = *v25;
                  if ( *v25 != 44 )
                    goto LABEL_198;
                  if ( !*++v25 )
                    goto LABEL_238;
                }
              }
              goto LABEL_198;
            }
            v81 = *v25;
            if ( *v25 )
            {
              while ( 1 )
              {
                for ( kk = v81; iswspace(kk); kk = *v25 )
                  ++v25;
                if ( *v25 != 34 )
                  break;
                v83 = v25[1];
                v84 = v25 + 1;
                v85 = 0;
                while ( v83 != 34 )
                {
                  if ( !v83 )
                    goto LABEL_86;
                  ++v84;
                  ++v85;
                  v83 = *v84;
                }
                *(_DWORD *)&v89[4 * v90 + 16] = v63;
                v63 += 2 * v85 + 2;
                v86 = 2LL * v85;
                memmove(v64, v25 + 1, v86);
                v25 = v84 + 1;
                *(_WORD *)((char *)v64 + v86) = 0;
                v64 = (unsigned __int64 *)&v89[v63];
                ++v90;
                while ( iswspace(*v25) )
                  ++v25;
                v81 = *v25;
                if ( *v25 != 44 )
                {
                  v9 = v89;
                  if ( v81 != 41 )
                    goto LABEL_238;
                  v57 = v93;
                  goto LABEL_217;
                }
                v81 = *++v25;
                if ( !*v25 )
                  goto LABEL_86;
              }
            }
            else
            {
LABEL_217:
              if ( v81 == 41 )
                goto LABEL_199;
            }
            goto LABEL_86;
          }
        }
LABEL_131:
        ValueType = 534;
        goto LABEL_132;
      }
      if ( a7 != 6 )
      {
        if ( a7 == 16 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            while ( 1 )
            {
              for ( mm = v27; iswspace(mm); mm = *v26 )
                ++v26;
              while ( GetDigitFromChar(*v26, &a6) )
              {
                ++v26;
                if ( v29 < v30 )
                  goto LABEL_155;
              }
              ++v11;
              v32 = (v29 >> 1) + v21;
              if ( v32 < v21 )
                goto LABEL_155;
              v21 = v32 + 4;
              if ( v32 + 4 < v32 )
                goto LABEL_155;
              for ( nn = v31; iswspace(nn); nn = *v26 )
                ++v26;
              v27 = *v26;
              if ( *v26 != 44 )
              {
                if ( v27 != 41 )
                  goto LABEL_142;
                break;
              }
              v27 = *++v26;
              if ( !*v26 )
                goto LABEL_142;
            }
          }
          if ( v27 != 41 )
            goto LABEL_142;
          goto LABEL_149;
        }
LABEL_34:
        ValueType = 1336;
        goto LABEL_24;
      }
    }
    v44 = *v25;
    if ( !*v25 )
      goto LABEL_127;
    v45 = a7;
    while ( 1 )
    {
      v91 = 0;
      v46 = wcstoxq(0LL, v26, &EndPointer, 0, 1, &v91);
      if ( EndPointer == v26 && !v46 )
      {
        ValueType = 1336;
        goto LABEL_125;
      }
      if ( v91 )
        goto LABEL_131;
      if ( v45 == 6 && v46 > 1 )
        goto LABEL_86;
      v47 = EndPointer;
      ++v11;
      if ( iswspace(*EndPointer) )
      {
        do
          ++v47;
        while ( iswspace(*v47) );
        v45 = a7;
      }
      v44 = *v47;
      if ( *v47 != 44 )
        break;
      v26 = v47 + 1;
      if ( !*v26 )
        goto LABEL_86;
    }
    if ( v44 == 41 )
    {
LABEL_127:
      if ( v44 == 41 )
      {
        v43 = 8LL * v11;
        goto LABEL_129;
      }
    }
    goto LABEL_86;
  }
LABEL_25:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( ValueType && v9 )
    ExFreePoolWithTag(v9, 0);
  return ValueType;
}
