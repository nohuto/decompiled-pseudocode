/*
 * XREFs of RtlFormatMessageEx @ 0x1409B6C28
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x1409B6BD0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1402E1820 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
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
  unsigned int v10; // r12d
  char v11; // r14
  unsigned int v12; // esi
  unsigned int v14; // r9d
  NTSTRSAFE_PWSTR v15; // r8
  NTSTRSAFE_PWSTR v16; // rbx
  signed int v17; // r15d
  char v18; // r10
  NTSTRSAFE_PWSTR v19; // r13
  __int16 v20; // ax
  NTSTRSAFE_PWSTR v21; // rcx
  int v22; // ecx
  NTSTRSAFE_PWSTR v23; // rdx
  unsigned int v24; // r14d
  unsigned int v25; // edx
  __int16 v26; // ax
  unsigned int v27; // edx
  unsigned int v28; // esi
  __int64 v29; // r14
  __int64 *v30; // r9
  NTSTRSAFE_PWSTR v31; // rdx
  _WORD *v32; // rdi
  char v33; // r8
  wchar_t v34; // cx
  NTSTRSAFE_PWSTR v35; // rax
  unsigned int v36; // eax
  int v37; // ecx
  NTSTATUS v38; // eax
  char *v39; // rcx
  __int16 v40; // ax
  unsigned int v41; // eax
  int v42; // edx
  __int64 v43; // rdx
  signed __int64 v44; // r8
  __int16 v45; // ax
  unsigned int v46; // eax
  int v47; // edx
  signed __int64 v48; // r8
  __int16 v49; // ax
  char *v50; // rax
  unsigned int v51; // esi
  unsigned int v52; // r8d
  __int64 v53; // rax
  __int64 *v54; // rcx
  wchar_t *v55; // r10
  __int64 *v56; // r8
  __int64 v57; // rax
  __int64 *v58; // rcx
  __int64 v59; // rdx
  unsigned int v60; // esi
  __int64 *v61; // rcx
  __int64 v62; // rax
  __int16 v63; // ax
  NTSTRSAFE_PWSTR v64; // rdx
  NTSTRSAFE_PWSTR v65; // rcx
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rbx
  _WORD *v69; // r13
  _WORD *v70; // rbx
  _DWORD *v72; // rdx
  __int64 v73; // [rsp+38h] [rbp-D0h]
  unsigned int v76; // [rsp+5Ch] [rbp-ACh]
  unsigned int v77; // [rsp+60h] [rbp-A8h]
  __int64 v78; // [rsp+68h] [rbp-A0h]
  unsigned int v79; // [rsp+70h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v82; // [rsp+80h] [rbp-88h] BYREF
  int v83; // [rsp+88h] [rbp-80h]
  int v84; // [rsp+8Ch] [rbp-7Ch]
  int v85; // [rsp+90h] [rbp-78h]
  NTSTRSAFE_PWSTR v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h]
  NTSTRSAFE_PWSTR v88; // [rsp+A8h] [rbp-60h]
  __int64 v89; // [rsp+B0h] [rbp-58h]
  _QWORD v90[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v92[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  wchar_t v93[9]; // [rsp+736h] [rbp+62Eh] BYREF

  v9 = a6;
  v10 = 0;
  v11 = a3;
  v12 = 0;
  v14 = a2;
  v15 = a7;
  v89 = a9;
  v16 = a7;
  v78 = (__int64)a6;
  v86 = a7;
  ppszDestEnd = 0LL;
  v82 = 0LL;
  v76 = 0;
  v17 = a8 >> 1;
  v77 = 0;
  v83 = 37;
  v87 = 8LL;
  v84 = 10;
  v85 = 32;
LABEL_2:
  v18 = a5;
LABEL_3:
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *a1;
    v21 = v16;
    if ( !*a1 )
      break;
    ++a1;
    if ( v20 != (_WORD)v83 )
    {
      if ( v20 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_111;
      }
      else
      {
        if ( v20 != (_WORD)v84 )
        {
LABEL_113:
          if ( --v17 < 0 )
            return 2147483653LL;
          *v16 = v20;
          ++v12;
          ++v16;
          if ( v20 != (_WORD)v85 )
            v21 = v19;
          v19 = v21;
          goto LABEL_117;
        }
        if ( *a1 != 13 )
        {
LABEL_111:
          if ( !v14 )
          {
            v17 -= 2;
            if ( v17 < 0 )
              return 2147483653LL;
            v12 = 0;
            *(_DWORD *)v16 = 655373;
            v77 = 0;
            v16 += 2;
            goto LABEL_3;
          }
          v19 = v16;
          v20 = 32;
          goto LABEL_113;
        }
      }
      ++a1;
      goto LABEL_111;
    }
    v22 = (unsigned __int16)*a1;
    v23 = v16;
    v88 = v16;
    if ( (unsigned __int16)(v22 - 49) > (unsigned __int16)v87 )
    {
      if ( (_WORD)v22 == 48 )
        break;
      if ( !(_WORD)v22 )
        return 3221225485LL;
      switch ( v22 )
      {
        case 'r':
          if ( --v17 < 0 )
            return 2147483653LL;
          *v16++ = 13;
          ++a1;
LABEL_103:
          v19 = 0LL;
          v12 = 0;
          goto LABEL_117;
        case 'n':
          v17 -= 2;
          if ( v17 < 0 )
            return 2147483653LL;
          *(_DWORD *)v16 = 655373;
          v16 += 2;
          ++a1;
          goto LABEL_103;
        case 't':
          if ( --v17 < 0 )
            return 2147483653LL;
          if ( (v12 & 7) != 0 )
            v12 = (v12 + 7) & 0xFFFFFFF8;
          else
            v12 += 8;
          v63 = 9;
          goto LABEL_91;
        case 'b':
          if ( --v17 < 0 )
            return 2147483653LL;
          v63 = 32;
LABEL_91:
          v19 = v16;
          *v16 = v63;
LABEL_100:
          ++v16;
          break;
        default:
          if ( !v11 )
          {
            if ( --v17 < 0 )
              return 2147483653LL;
            *v16 = v22;
            goto LABEL_100;
          }
          v17 -= 2;
          if ( v17 < 0 )
            return 2147483653LL;
          *v16 = 37;
          v16[1] = *a1;
          v16 += 2;
          break;
      }
      ++a1;
      goto LABEL_102;
    }
    ++a1;
    v24 = v22 - 48;
    v25 = (unsigned __int16)*a1;
    v26 = v25;
    if ( (unsigned __int16)v25 >= 0x30u && v25 <= 0x39 )
    {
      ++a1;
      v24 = v25 + 2 * (5 * v24 - 24);
      v27 = (unsigned __int16)*a1;
      v26 = v27;
      if ( (unsigned __int16)v27 >= 0x30u && v27 <= 0x39 )
      {
        ++a1;
        v24 = v27 + 2 * (5 * v24 - 24);
        v26 = *a1;
        if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)*a1 <= 0x39u )
          return 3221225485LL;
      }
    }
    v28 = v24;
    v79 = 0;
    v29 = v24 - 1;
    if ( v26 == 33 )
    {
      v30 = 0LL;
      v31 = v92;
      v32 = a1 + 1;
      ppszDestEnd = v92;
      v33 = 0;
      pszDest = 37;
      v34 = *v32;
      if ( *v32 != 33 )
      {
        v35 = v92;
        while ( v34 )
        {
          if ( v35 >= v93 )
            break;
          if ( v34 == 42 )
          {
            v36 = v10++;
            v79 = v10;
            if ( v36 > 1 )
              break;
          }
          ++v32;
          *v31++ = v34;
          v30 = 0LL;
          ppszDestEnd = v31;
          v35 = v31;
          v34 = *v32;
          if ( *v32 == 33 )
            goto LABEL_21;
        }
        return 3221225485LL;
      }
LABEL_21:
      a1 = v32 + 1;
      *v31 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v31 = ppszDestEnd;
      v33 = 1;
      v9 = (__int64 *)v78;
      v30 = 0LL;
      v18 = a5;
    }
    if ( !a3 )
    {
      if ( !v9 || v10 + (unsigned int)v29 >= 0xC8 )
        return 3221225485LL;
      if ( a4 )
      {
        v39 = (char *)(v31 - 1);
        v40 = *(v31 - 1);
        switch ( v40 )
        {
          case 'c':
            v41 = *(v31 - 2);
            LOWORD(v41) = v41 - 104;
            if ( (unsigned __int16)v41 > 0xFu || (v42 = 32785, !_bittest(&v42, v41)) )
            {
              v43 = 3LL;
              v44 = (char *)L"hc" - v39;
              do
              {
                if ( v43 == -2147483643 )
                  break;
                v45 = *(_WORD *)&v39[v44];
                if ( !v45 )
                  break;
                *(_WORD *)v39 = v45;
                v39 += 2;
                --v43;
              }
              while ( v43 );
              goto LABEL_51;
            }
            break;
          case 's':
            v46 = *(v31 - 2);
            LOWORD(v46) = v46 - 104;
            if ( (unsigned __int16)v46 > 0xFu || (v47 = 32785, !_bittest(&v47, v46)) )
            {
              v43 = 3LL;
              v48 = (char *)L"hs" - v39;
              do
              {
                if ( v43 == -2147483643 )
                  break;
                v49 = *(_WORD *)&v39[v48];
                if ( !v49 )
                  break;
                *(_WORD *)v39 = v49;
                v39 += 2;
                --v43;
              }
              while ( v43 );
LABEL_51:
              v50 = v39 - 2;
              if ( v43 )
                v50 = v39;
              *(_WORD *)v50 = 0;
            }
            break;
          case 'S':
            *(_WORD *)v39 = 115;
            break;
          case 'C':
            *(_WORD *)v39 = 99;
            break;
        }
      }
      v51 = v76;
      if ( (unsigned int)v29 >= v76 )
      {
        do
        {
          v52 = v51 + 1;
          if ( v18 )
          {
            v53 = *v9++;
          }
          else
          {
            v54 = (__int64 *)*v9;
            *v9 += 8LL;
            v53 = *v54;
          }
          v90[v51++] = v53;
        }
        while ( v52 <= (unsigned int)v29 );
        v10 = v79;
        v78 = (__int64)v9;
        v76 = v52;
      }
      v55 = (wchar_t *)v90[v29];
      ppszDestEnd = v55;
      v56 = 0LL;
      if ( !v10 )
        goto LABEL_72;
      if ( a5 )
      {
        v30 = (__int64 *)*v9;
        v57 = v51++;
        v76 = v51;
        v90[v57] = *v9++;
        v78 = (__int64)v9;
      }
      else
      {
        v58 = (__int64 *)*v9;
        *v9 += 8LL;
        v30 = (__int64 *)*v58;
      }
      if ( v10 > 1 )
      {
        v59 = v51;
        v10 = 0;
        v60 = v51 + 1;
        v76 = v60;
        if ( a5 )
        {
          v56 = (__int64 *)*v9;
          v78 = (__int64)(v9 + 1);
          v90[v59] = *v9;
        }
        else
        {
          v61 = (__int64 *)*v9;
          v76 = v60;
          *v9 += 8LL;
          v56 = (__int64 *)*v61;
          v90[v59] = *v61;
        }
      }
      else
      {
LABEL_72:
        v10 = 0;
      }
      v38 = RtlStringCchPrintfExW(v16, v17, &v82, 0LL, 0, &pszDest, v55, v30, v56);
      goto LABEL_74;
    }
    if ( v33 == 1 )
    {
      v10 = 0;
    }
    else
    {
      v37 = pszDest - 37;
      if ( pszDest == 37 && (v37 = v92[0] - 115, v92[0] == 115) )
      {
        v10 = 0;
        v37 = v92[1];
      }
      else
      {
        v10 = 0;
      }
      if ( v37 )
      {
        LODWORD(v73) = v28;
        v38 = RtlStringCchPrintfExW(v16, v17, &v82, 0LL, 0, L"%%%u!%s!", v73, v92);
        goto LABEL_74;
      }
    }
    LODWORD(v73) = v28;
    v38 = RtlStringCchPrintfExW(v16, v17, &v82, 0LL, 0, L"%%%u", v73);
LABEL_74:
    if ( v38 < 0 )
      return 2147483653LL;
    v62 = v82 - v16;
    v17 -= v62;
    if ( v17 < 0 )
      return 2147483653LL;
    v12 = v77;
    v23 = v88;
    v9 = (__int64 *)v78;
    v15 = v86;
    v14 = a2;
    v18 = a5;
    v11 = a3;
    v16 += (int)v62;
LABEL_102:
    if ( !v23 )
      goto LABEL_103;
    v12 += v16 - v23;
LABEL_117:
    v77 = v12;
    if ( v14 - 1 <= 0xFFFFFFFD && v12 >= v14 )
    {
      if ( v19 )
      {
        v64 = v19;
        do
        {
          if ( *v64 != 32 && *v64 != 9 )
            break;
          ++v64;
        }
        while ( v64 != v16 );
        v10 = 0;
        if ( v19 > v15 )
        {
          do
          {
            v65 = v19 - 1;
            v66 = *(v19 - 1);
            if ( v66 != 32 && v66 != 9 )
              break;
            --v19;
          }
          while ( v65 > v15 );
        }
        v67 = v64 - v19;
        if ( (_DWORD)v67 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_133;
          return 2147483653LL;
        }
        if ( (unsigned int)v67 > 2 )
          v17 = v67 + v17 - 2;
LABEL_133:
        v68 = v16 - v64;
        v12 = v68;
        v77 = v68;
        memmove(v19 + 2, v64, 2 * v68);
        v14 = a2;
        *v19 = 13;
        v69 = v19 + 1;
        *v69 = 10;
        v70 = &v69[(unsigned int)v68];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return 2147483653LL;
        *v16 = 13;
        v70 = v16 + 1;
        v12 = 0;
        v77 = 0;
        *v70 = 10;
      }
      v9 = (__int64 *)v78;
      v16 = v70 + 1;
      v15 = v86;
      goto LABEL_2;
    }
  }
  if ( v17 < 1 )
    return 2147483653LL;
  v72 = (_DWORD *)v89;
  *v16 = 0;
  if ( v72 )
    *v72 = 2 * (((char *)v16 - (char *)v15 + 2) >> 1);
  return 0LL;
}
