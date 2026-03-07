__int64 __fastcall GetPrintableOperandValue(
        unsigned __int8 *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int StringForSid; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // r13d
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  wchar_t *v26; // rax
  unsigned int v27; // ecx
  _WORD *v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  __int64 v31; // r9
  unsigned __int8 *v32; // r10
  _WORD *v33; // r8
  SIZE_T v34; // rax
  __int64 v35; // rcx
  wchar_t *v36; // rax
  unsigned int v37; // edx
  unsigned __int64 v38; // rcx
  unsigned int v39; // r13d
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r14
  _WORD *v43; // rax
  unsigned int v44; // r11d
  __int64 v45; // rbx
  int v46; // r9d
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  unsigned int v49; // r13d
  _WORD *v50; // rax
  unsigned __int64 v51; // rbx
  unsigned __int8 v52; // r13
  unsigned __int8 v53; // r14
  wchar_t *v54; // rax
  wchar_t *v55; // rcx
  __int16 v56; // ax
  wchar_t *v57; // rdx
  __int64 v58; // rbx
  wchar_t v59; // ax
  wchar_t *v60; // rax
  wchar_t v61; // ax
  wchar_t v62; // ax
  __int64 v63; // r9
  int v65; // [rsp+20h] [rbp-D1h]
  PVOID P; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int v67; // [rsp+48h] [rbp-A9h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-A5h]
  unsigned int v69; // [rsp+50h] [rbp-A1h]
  unsigned int v70; // [rsp+54h] [rbp-9Dh]
  __int64 v71; // [rsp+58h] [rbp-99h]
  __int64 v72; // [rsp+60h] [rbp-91h]
  int v73[2]; // [rsp+68h] [rbp-89h]
  SIZE_T v74; // [rsp+70h] [rbp-81h]
  __int64 v75; // [rsp+78h] [rbp-79h]
  wchar_t pszFormat[8]; // [rsp+80h] [rbp-71h] BYREF
  _BYTE Sid1[80]; // [rsp+90h] [rbp-61h] BYREF

  *(_QWORD *)v73 = a5;
  v72 = a6;
  v75 = a7;
  StringForSid = 0;
  P = 0LL;
  v67 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 12;
            if ( v17 )
            {
              v18 = v17 - 8;
              if ( v18 )
              {
                v19 = v18 - 56;
                if ( v19 )
                {
                  if ( v19 == 1 && (unsigned int)(a2 - 1) >= 4 )
                  {
                    v20 = *(_DWORD *)(a1 + 1);
                    *a4 = 5;
                    if ( v20 <= 0x44 && a2 - 5 >= v20 )
                    {
                      memmove(Sid1, a1 + 5, v20);
                      StringForSid = LocalGetStringForSid(Sid1, (wchar_t **)&P, *(__int64 *)v73, v21, v65, a8);
                      if ( StringForSid )
                        goto LABEL_93;
                      *a4 += v20;
                      v22 = -1LL;
                      do
                        ++v22;
                      while ( *((_WORD *)P + v22) );
                      v23 = (unsigned int)(v22 + 6);
                      if ( (unsigned int)v23 < (unsigned int)v22 || (v24 = 2 * v23, v24 > 0xFFFFFFFF) )
                      {
LABEL_24:
                        StringForSid = 534;
                        goto LABEL_93;
                      }
                      v25 = (unsigned int)v24;
                      v26 = (wchar_t *)SddlpAlloc((unsigned int)v24);
                      *(_QWORD *)a3 = v26;
                      if ( v26 )
                      {
                        if ( RtlStringCchPrintfW(v26, v25 >> 1, L"SID(%ls)", P) >= 0 )
                          goto LABEL_93;
                        goto LABEL_76;
                      }
LABEL_50:
                      StringForSid = 8;
                      goto LABEL_93;
                    }
                  }
                }
                else if ( (unsigned int)(a2 - 1) >= 4 )
                {
                  v69 = *(_DWORD *)(a1 + 1);
                  v27 = v69;
                  *a4 = 5;
                  if ( v27 )
                  {
                    if ( a2 - 5 >= v27 )
                    {
                      v71 = 6LL;
                      v28 = SddlpAlloc(6uLL);
                      *(_QWORD *)a3 = v28;
                      if ( v28 )
                      {
                        *v28 = 123;
                        v29 = 0;
                        v30 = *a4;
                        v70 = v30;
                        v31 = v30;
                        v68 = 0;
                        while ( 1 )
                        {
                          v32 = &a1[v31 + v29];
                          if ( *v32 == 80 )
                            break;
                          StringForSid = GetPrintableOperandValue(
                                           (_DWORD)v32,
                                           a2 - v29 - v30,
                                           (unsigned int)&P,
                                           (_DWORD)a4,
                                           *(__int64 *)v73,
                                           v72,
                                           v75,
                                           a8);
                          if ( StringForSid )
                            goto LABEL_93;
                          v68 += *a4;
                          if ( (int)ULongAddStringSize((unsigned int)v71, P, &v67) < 0 || v67 + 4 < v67 )
                            goto LABEL_24;
                          v33 = *(_WORD **)a3;
                          v34 = v67 + 4;
                          v35 = -1LL;
                          v74 = v34;
                          v67 += 4;
                          do
                            ++v35;
                          while ( v33[v35] );
                          v36 = (wchar_t *)SddlpReAlloc(2 * v35, v34, v33);
                          *(_QWORD *)a3 = v36;
                          if ( !v36 )
                            goto LABEL_50;
                          if ( RtlStringCchPrintfW(
                                 &v36[((unsigned __int64)(unsigned int)v71 >> 1) - 2],
                                 (unsigned __int64)(unsigned int)(v74 - v71 + 4) >> 1,
                                 L"%ls, ",
                                 P) < 0 )
                            goto LABEL_76;
                          if ( P )
                            ExFreePoolWithTag(P, 0);
                          v37 = v69;
                          v29 = v68;
                          v30 = v70;
                          v71 = (unsigned int)v74;
                          v31 = v70;
                          P = 0LL;
                          if ( v69 <= v68 )
                          {
                            v38 = (unsigned __int64)(unsigned int)v74 >> 1;
                            *(_WORD *)(*(_QWORD *)a3 + 2 * v38 - 8) = 125;
                            *(_WORD *)(*(_QWORD *)a3 + 2 * v38 - 6) = 0;
                            *a4 = v37 + v70;
                            goto LABEL_93;
                          }
                        }
                        StringForSid = 1336;
                        goto LABEL_93;
                      }
                      goto LABEL_50;
                    }
                  }
                }
                return 1336;
              }
              if ( (unsigned int)(a2 - 1) >= 4 )
              {
                v39 = *(_DWORD *)(a1 + 1);
                *a4 = 5;
                if ( a2 - 5 >= v39 )
                {
                  if ( v39 )
                  {
                    v40 = 2LL * v39;
                    if ( v40 <= 0xFFFFFFFF && (int)v40 + 2 >= (unsigned int)v40 )
                    {
                      v41 = 2LL * (unsigned int)(v40 + 2);
                      if ( v41 <= 0xFFFFFFFF )
                      {
                        v42 = (unsigned int)v41;
                        v43 = SddlpAlloc((unsigned int)v41);
                        *(_QWORD *)a3 = v43;
                        if ( v43 )
                        {
                          *v43 = 35;
                          v44 = 0;
                          v45 = 0LL;
                          do
                          {
                            v46 = 2 * v44;
                            v47 = v45 + *a4;
                            ++v44;
                            ++v45;
                            v48 = a1[v47];
                            *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v46 + 1)) = a0123456789abcd[v48 >> 4];
                            *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v46 + 2)) = a0123456789abcd[v48 & 0xF];
                          }
                          while ( v44 < v39 );
                          StringForSid = 0;
                          *(_WORD *)(*(_QWORD *)a3 + 2 * (v42 >> 1) - 2) = 0;
                          *a4 += v39;
                          goto LABEL_93;
                        }
                        goto LABEL_50;
                      }
                    }
                    return 534;
                  }
                }
              }
              return 1336;
            }
            if ( (unsigned int)(a2 - 1) < 4 )
              return 1336;
            v49 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( a2 - 5 < v49 )
              return 1336;
            if ( v49 + 6 < v49 )
              return 534;
            v50 = SddlpAlloc(v49 + 6);
            *(_QWORD *)a3 = v50;
            if ( v50 )
            {
              *v50 = 34;
              memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v49);
              v51 = (unsigned __int64)v49 >> 1;
              *(_WORD *)(*(_QWORD *)a3 + 2 * v51 + 2) = 34;
              *(_WORD *)(*(_QWORD *)a3 + 2 * v51 + 4) = 0;
              *a4 += v49;
              goto LABEL_93;
            }
LABEL_62:
            StringForSid = 8;
            goto LABEL_93;
          }
        }
      }
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v52 = a1[9];
    v53 = a1[10];
    v72 = *(_QWORD *)(a1 + 1);
    v54 = (wchar_t *)SddlpAlloc(0x40uLL);
    *(_QWORD *)a3 = v54;
    v55 = v54;
    if ( !v54 )
      goto LABEL_62;
    if ( v52 == 1 )
    {
      v56 = 43;
    }
    else
    {
      if ( v52 != 2 )
        goto LABEL_68;
      v56 = 45;
    }
    *v55++ = v56;
LABEL_68:
    v57 = pszFormat;
    v58 = 8LL;
    if ( v53 == 1 )
    {
      *v55++ = 48;
      do
      {
        if ( v58 == -2147483638 )
          break;
        v59 = *(wchar_t *)((char *)v57 + (char *)L"%I64o" - (char *)pszFormat);
        if ( !v59 )
          break;
        *v57++ = v59;
        --v58;
      }
      while ( v58 );
    }
    else if ( v53 == 3 )
    {
      *(_DWORD *)v55 = 7864368;
      v55 += 2;
      do
      {
        if ( v58 == -2147483638 )
          break;
        v61 = *(wchar_t *)((char *)v57 + (char *)L"%I64x" - (char *)pszFormat);
        if ( !v61 )
          break;
        *v57++ = v61;
        --v58;
      }
      while ( v58 );
    }
    else
    {
      do
      {
        if ( v58 == -2147483638 )
          break;
        v62 = *(wchar_t *)((char *)v57 + (char *)L"%I64u" - (char *)pszFormat);
        if ( !v62 )
          break;
        *v57++ = v62;
        --v58;
      }
      while ( v58 );
    }
    v60 = v57 - 1;
    if ( v58 )
      v60 = v57;
    *v60 = 0;
    if ( v58 )
    {
      if ( !v72 && v53 == 1 )
        goto LABEL_92;
      v63 = -v72;
      if ( v52 != 2 )
        v63 = v72;
      if ( RtlStringCchPrintfW(v55, 32 - (((__int64)v55 - *(_QWORD *)a3) >> 1), pszFormat, v63) >= 0 )
      {
LABEL_92:
        *a4 += 10;
LABEL_93:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return StringForSid;
      }
    }
LABEL_76:
    StringForSid = 50;
    goto LABEL_93;
  }
  return 87LL;
}
