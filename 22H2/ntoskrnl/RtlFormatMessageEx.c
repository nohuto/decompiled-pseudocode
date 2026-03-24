/*
 * XREFs of RtlFormatMessageEx @ 0x140910EE8
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1406B8FC8 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E568 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140910E90 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x14031BC50 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x14032EBA4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r11
  char v10; // r10
  unsigned int v12; // r9d
  NTSTRSAFE_PWSTR v13; // r8
  NTSTRSAFE_PWSTR v14; // rbx
  signed int v15; // r14d
  unsigned int v16; // esi
  NTSTRSAFE_PWSTR v17; // r13
  __int16 v18; // ax
  NTSTRSAFE_PWSTR v19; // rcx
  int v20; // ecx
  NTSTRSAFE_PWSTR v21; // rdx
  unsigned int v22; // r15d
  unsigned int v23; // edx
  __int16 v24; // ax
  unsigned int v25; // edx
  unsigned int v26; // esi
  __int64 v27; // r15
  unsigned int v28; // r12d
  _WORD *v29; // rdi
  NTSTRSAFE_PWSTR v30; // r8
  char v31; // r10
  wchar_t v32; // cx
  wchar_t v33; // dx
  char *v34; // r9
  unsigned int v35; // eax
  int v36; // ecx
  NTSTATUS v37; // eax
  char *v38; // rcx
  __int16 v39; // dx
  unsigned __int16 v40; // ax
  int v41; // esi
  __int64 v42; // rdx
  signed __int64 v43; // r8
  __int16 v44; // ax
  unsigned __int16 v45; // ax
  signed __int64 v46; // r8
  __int16 v47; // ax
  char *v48; // rax
  unsigned int v49; // r10d
  unsigned int v50; // edx
  __int64 v51; // rax
  wchar_t *v52; // r9
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // r10d
  __int64 v58; // rax
  __int16 v59; // ax
  NTSTRSAFE_PWSTR v60; // rdx
  NTSTRSAFE_PWSTR v61; // rcx
  __int16 v62; // ax
  __int64 v63; // rax
  __int64 v64; // rbx
  _WORD *v65; // r13
  _WORD *v66; // rbx
  _WORD *v67; // rbx
  _DWORD *v69; // rdx
  __int64 v70; // [rsp+38h] [rbp-D0h]
  unsigned int v73; // [rsp+5Ch] [rbp-ACh]
  unsigned int v74; // [rsp+60h] [rbp-A8h]
  __int64 v75; // [rsp+68h] [rbp-A0h]
  unsigned int v76; // [rsp+70h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v79; // [rsp+80h] [rbp-88h] BYREF
  int v80; // [rsp+88h] [rbp-80h]
  int v81; // [rsp+8Ch] [rbp-7Ch]
  int v82; // [rsp+90h] [rbp-78h]
  NTSTRSAFE_PWSTR v83; // [rsp+98h] [rbp-70h]
  __int64 v84; // [rsp+A0h] [rbp-68h]
  NTSTRSAFE_PWSTR v85; // [rsp+A8h] [rbp-60h]
  __int64 v86; // [rsp+B0h] [rbp-58h]
  _QWORD v87[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v89[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  char v90; // [rsp+736h] [rbp+62Eh] BYREF

  v9 = a6;
  v10 = a3;
  v12 = a2;
  v13 = a7;
  v86 = a9;
  v14 = a7;
  v75 = (__int64)a6;
  v83 = a7;
  ppszDestEnd = 0LL;
  v79 = 0LL;
  v73 = 0;
  v15 = a8 >> 1;
  v80 = 37;
  v84 = 8LL;
  v81 = 10;
  v82 = 32;
LABEL_2:
  v16 = 0;
  v74 = 0;
LABEL_3:
  v17 = 0LL;
  while ( 1 )
  {
    v18 = *a1;
    v19 = v14;
    if ( !*a1 )
      break;
    ++a1;
    if ( v18 != (_WORD)v80 )
    {
      if ( v18 == 13 || v18 == (_WORD)v81 )
      {
        if ( v18 == 10 && *a1 == 13 || v18 == 13 && *a1 == 10 )
          ++a1;
        if ( !v12 )
        {
          v15 -= 2;
          if ( v15 < 0 )
            return 2147483653LL;
          *v14 = 13;
          v67 = v14 + 1;
          *v67 = 10;
          v14 = v67 + 1;
          goto LABEL_2;
        }
        v17 = v14;
        v18 = 32;
      }
      if ( --v15 < 0 )
        return 2147483653LL;
      *v14 = v18;
      ++v16;
      ++v14;
      if ( v18 != (_WORD)v82 )
        v19 = v17;
      v17 = v19;
      goto LABEL_118;
    }
    v20 = (unsigned __int16)*a1;
    v21 = v14;
    v85 = v14;
    if ( (unsigned __int16)(v20 - 49) <= (unsigned __int16)v84 )
    {
      ++a1;
      v22 = v20 - 48;
      v23 = (unsigned __int16)*a1;
      v24 = v23;
      if ( (unsigned __int16)v23 >= 0x30u && v23 <= 0x39 )
      {
        ++a1;
        v22 = v23 + 2 * (5 * v22 - 24);
        v25 = (unsigned __int16)*a1;
        v24 = v25;
        if ( (unsigned __int16)v25 >= 0x30u && v25 <= 0x39 )
        {
          ++a1;
          v22 = v25 + 2 * (5 * v22 - 24);
          v24 = *a1;
          if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)*a1 <= 0x39u )
            return 3221225485LL;
        }
      }
      v26 = v22;
      v27 = v22 - 1;
      v76 = 0;
      v28 = 0;
      if ( v24 == 33 )
      {
        v29 = a1 + 1;
        pszDest = 37;
        v30 = v89;
        v31 = 0;
        ppszDestEnd = v89;
        v32 = *v29;
        if ( *v29 != 33 )
        {
          v33 = *v29;
          v34 = (char *)v89;
          while ( v33 )
          {
            if ( v34 >= &v90 )
              break;
            if ( v33 == 42 )
            {
              v35 = v28;
              v33 = v32;
              v76 = ++v28;
              if ( v35 > 1 )
                break;
            }
            *v30 = v33;
            ++v29;
            v30 = (NTSTRSAFE_PWSTR)(v34 + 2);
            ppszDestEnd = (NTSTRSAFE_PWSTR)(v34 + 2);
            v34 += 2;
            v32 = *v29;
            v33 = *v29;
            if ( *v29 == 33 )
              goto LABEL_21;
          }
          return 3221225485LL;
        }
LABEL_21:
        a1 = v29 + 1;
        *v30 = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        v30 = ppszDestEnd;
        v31 = 1;
        v9 = (__int64 *)v75;
      }
      if ( a3 )
      {
        if ( v31 == 1 )
          goto LABEL_30;
        v36 = pszDest - 37;
        if ( pszDest == 37 )
        {
          v36 = v89[0] - 115;
          if ( v89[0] == 115 )
            v36 = v89[1];
        }
        if ( !v36 )
        {
LABEL_30:
          LODWORD(v70) = v26;
          v37 = RtlStringCchPrintfExW(v14, v15, &v79, 0LL, 0, L"%%%u", v70);
        }
        else
        {
          LODWORD(v70) = v26;
          v37 = RtlStringCchPrintfExW(v14, v15, &v79, 0LL, 0, L"%%%u!%s!", v70, v89);
        }
LABEL_73:
        if ( v37 < 0 )
          return 2147483653LL;
        v58 = v79 - v14;
        v15 -= v58;
        if ( v15 < 0 )
          return 2147483653LL;
        v16 = v74;
        v9 = (__int64 *)v75;
        v21 = v85;
        v13 = v83;
        v12 = a2;
        v10 = a3;
        v14 += (int)v58;
        goto LABEL_102;
      }
      if ( !v9 || v28 + (unsigned int)v27 >= 0xC8 )
        return 3221225485LL;
      if ( a4 )
      {
        v38 = (char *)(v30 - 1);
        v39 = *(v30 - 1);
        if ( v39 == 99 )
        {
          v40 = *(v30 - 2) - 104;
          if ( v40 > 0xFu || (v41 = 32785, !_bittest(&v41, v40)) )
          {
            v42 = 3LL;
            v43 = (char *)L"hc" - v38;
            do
            {
              if ( v42 == -2147483643 )
                break;
              v44 = *(_WORD *)&v38[v43];
              if ( !v44 )
                break;
              *(_WORD *)v38 = v44;
              v38 += 2;
              --v42;
            }
            while ( v42 );
            goto LABEL_50;
          }
        }
        else
        {
          v41 = 32785;
        }
        if ( v39 != 115 || (v45 = *(v30 - 2) - 104, v45 <= 0xFu) && _bittest(&v41, v45) )
        {
          if ( v39 == 83 )
          {
            *(_WORD *)v38 = 115;
          }
          else if ( v39 == 67 )
          {
            *(_WORD *)v38 = 99;
          }
        }
        else
        {
          v42 = 3LL;
          v46 = (char *)L"hs" - v38;
          do
          {
            if ( v42 == -2147483643 )
              break;
            v47 = *(_WORD *)&v38[v46];
            if ( !v47 )
              break;
            *(_WORD *)v38 = v47;
            v38 += 2;
            --v42;
          }
          while ( v42 );
LABEL_50:
          v48 = v38 - 2;
          if ( v42 )
            v48 = v38;
          *(_WORD *)v48 = 0;
        }
      }
      v49 = v73;
      if ( (unsigned int)v27 >= v73 )
      {
        do
        {
          v50 = v49 + 1;
          if ( a5 )
          {
            v51 = *v9++;
          }
          else
          {
            *v9 += 8LL;
            v51 = *(_QWORD *)(*v9 - 8);
          }
          v87[v49++] = v51;
        }
        while ( v50 <= (unsigned int)v27 );
        v28 = v76;
        v75 = (__int64)v9;
        v73 = v50;
      }
      v52 = (wchar_t *)v87[v27];
      ppszDestEnd = v52;
      v53 = 0LL;
      v54 = 0LL;
      if ( v28 )
      {
        if ( a5 )
        {
          v53 = *v9;
          v55 = v49++;
          v73 = v49;
          v87[v55] = *v9++;
          v75 = (__int64)v9;
        }
        else
        {
          *v9 += 8LL;
          v53 = *(_QWORD *)(*v9 - 8);
        }
        if ( v28 > 1 )
        {
          v56 = v49;
          v57 = v49 + 1;
          v73 = v57;
          if ( a5 )
          {
            v54 = *v9;
            v75 = (__int64)(v9 + 1);
          }
          else
          {
            *v9 += 8LL;
            v73 = v57;
            v54 = *(_QWORD *)(*v9 - 8);
          }
          v87[v56] = v54;
        }
      }
      v37 = RtlStringCchPrintfExW(v14, v15, &v79, 0LL, 0, &pszDest, v52, v53, v54);
      goto LABEL_73;
    }
    if ( (_WORD)v20 == 48 )
      break;
    if ( !(_WORD)v20 )
      return 3221225485LL;
    switch ( v20 )
    {
      case 'r':
        if ( --v15 < 0 )
          return 2147483653LL;
        *v14 = 13;
LABEL_81:
        ++v14;
        ++a1;
LABEL_103:
        v17 = 0LL;
        v16 = 0;
        goto LABEL_118;
      case 'n':
        v15 -= 2;
        if ( v15 < 0 )
          return 2147483653LL;
        *v14++ = 13;
        *v14 = 10;
        goto LABEL_81;
      case 't':
        if ( --v15 < 0 )
          return 2147483653LL;
        if ( (v16 & 7) != 0 )
          v16 = (v16 + 7) & 0xFFFFFFF8;
        else
          v16 += 8;
        v59 = 9;
LABEL_91:
        v17 = v14;
        goto LABEL_92;
      case 'b':
        if ( --v15 < 0 )
          return 2147483653LL;
        v59 = 32;
        goto LABEL_91;
    }
    if ( !v10 )
    {
      if ( --v15 < 0 )
        return 2147483653LL;
      *v14 = v20;
      goto LABEL_101;
    }
    v15 -= 2;
    if ( v15 < 0 )
      return 2147483653LL;
    *v14++ = 37;
    v59 = *a1;
LABEL_92:
    *v14 = v59;
LABEL_101:
    ++v14;
    ++a1;
LABEL_102:
    if ( !v21 )
      goto LABEL_103;
    v16 += v14 - v21;
LABEL_118:
    v74 = v16;
    if ( v12 && v12 != -1 && v16 >= v12 )
    {
      if ( v17 )
      {
        v60 = v17;
        do
        {
          if ( *v60 != 32 && *v60 != 9 )
            break;
          ++v60;
        }
        while ( v60 != v14 );
        if ( v17 > v13 )
        {
          do
          {
            v61 = v17 - 1;
            v62 = *(v17 - 1);
            if ( v62 != 32 && v62 != 9 )
              break;
            --v17;
          }
          while ( v61 > v13 );
        }
        v63 = v60 - v17;
        if ( (_DWORD)v63 == 1 )
        {
          if ( --v15 >= 0 )
            goto LABEL_135;
          return 2147483653LL;
        }
        if ( (unsigned int)v63 > 2 )
          v15 = v63 + v15 - 2;
LABEL_135:
        v64 = v14 - v60;
        v16 = v64;
        v74 = v64;
        memmove(v17 + 2, v60, 2 * v64);
        v12 = a2;
        *v17 = 13;
        v65 = v17 + 1;
        *v65 = 10;
        v66 = &v65[(unsigned int)v64];
      }
      else
      {
        v15 -= 2;
        if ( v15 < 0 )
          return 2147483653LL;
        *v14 = 13;
        v66 = v14 + 1;
        v16 = 0;
        v74 = 0;
        *v66 = 10;
      }
      v9 = (__int64 *)v75;
      v14 = v66 + 1;
      v13 = v83;
      v10 = a3;
      goto LABEL_3;
    }
  }
  if ( v15 < 1 )
    return 2147483653LL;
  v69 = (_DWORD *)v86;
  *v14 = 0;
  if ( v69 )
    *v69 = 2 * (((char *)v14 - (char *)v13 + 2) >> 1);
  return 0LL;
}
