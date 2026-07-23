/*
 * XREFs of RtlFormatMessageEx @ 0x140910FF8
 * Callers:
 *     PiGetDeviceRegProperty @ 0x140634FF8 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E678 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140910FA0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140240E00 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  va_list *v10; // r11
  BOOLEAN v11; // r10
  ULONG v13; // r9d
  PWSTR v14; // r8
  PWSTR v15; // rbx
  signed int v16; // r14d
  unsigned int v17; // esi
  PWSTR v18; // r13
  WCHAR v19; // ax
  PWSTR v20; // rcx
  int v21; // ecx
  PWSTR v22; // rdx
  unsigned int v23; // r15d
  unsigned int v24; // edx
  WCHAR v25; // ax
  unsigned int v26; // edx
  unsigned int v27; // esi
  __int64 v28; // r15
  unsigned int v29; // r12d
  PWSTR v30; // rdi
  NTSTRSAFE_PWSTR v31; // r8
  char v32; // r10
  WCHAR v33; // cx
  WCHAR v34; // dx
  char *v35; // r9
  unsigned int v36; // eax
  int v37; // ecx
  NTSTATUS v38; // eax
  char *v39; // rcx
  __int16 v40; // dx
  unsigned __int16 v41; // ax
  int v42; // esi
  __int64 v43; // rdx
  signed __int64 v44; // r8
  __int16 v45; // ax
  unsigned __int16 v46; // ax
  signed __int64 v47; // r8
  __int16 v48; // ax
  char *v49; // rax
  unsigned int v50; // r10d
  unsigned int v51; // edx
  __int64 v52; // rax
  wchar_t *v53; // r9
  va_list v54; // r8
  va_list v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned int v58; // r10d
  __int64 v59; // rax
  WCHAR v60; // ax
  PWSTR v61; // rdx
  PWSTR v62; // rcx
  __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // rbx
  _WORD *v66; // r13
  _WORD *v67; // rbx
  _WORD *v68; // rbx
  PULONG v70; // rdx
  __int64 v71; // [rsp+38h] [rbp-D0h]
  unsigned int v74; // [rsp+5Ch] [rbp-ACh]
  unsigned int v75; // [rsp+60h] [rbp-A8h]
  va_list *v76; // [rsp+68h] [rbp-A0h]
  unsigned int v77; // [rsp+70h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v80; // [rsp+80h] [rbp-88h] BYREF
  int v81; // [rsp+88h] [rbp-80h]
  int v82; // [rsp+8Ch] [rbp-7Ch]
  int v83; // [rsp+90h] [rbp-78h]
  PWSTR v84; // [rsp+98h] [rbp-70h]
  __int64 v85; // [rsp+A0h] [rbp-68h]
  PWSTR v86; // [rsp+A8h] [rbp-60h]
  PULONG v87; // [rsp+B0h] [rbp-58h]
  _QWORD v88[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v90[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  char v91; // [rsp+736h] [rbp+62Eh] BYREF

  v10 = Arguments;
  v11 = IgnoreInserts;
  v13 = MaximumWidth;
  v14 = Buffer;
  v87 = ReturnLength;
  v15 = Buffer;
  v76 = Arguments;
  v84 = Buffer;
  ppszDestEnd = 0LL;
  v80 = 0LL;
  v74 = 0;
  v16 = Length >> 1;
  v81 = 37;
  v85 = 8LL;
  v82 = 10;
  v83 = 32;
LABEL_2:
  v17 = 0;
  v75 = 0;
LABEL_3:
  v18 = 0LL;
  while ( 1 )
  {
    v19 = *MessageFormat;
    v20 = v15;
    if ( !*MessageFormat )
      break;
    ++MessageFormat;
    if ( v19 != (_WORD)v81 )
    {
      if ( v19 == 13 || v19 == (_WORD)v82 )
      {
        if ( v19 == 10 && *MessageFormat == 13 || v19 == 13 && *MessageFormat == 10 )
          ++MessageFormat;
        if ( !v13 )
        {
          v16 -= 2;
          if ( v16 < 0 )
            return -2147483643;
          *v15 = 13;
          v68 = v15 + 1;
          *v68 = 10;
          v15 = v68 + 1;
          goto LABEL_2;
        }
        v18 = v15;
        v19 = 32;
      }
      if ( --v16 < 0 )
        return -2147483643;
      *v15 = v19;
      ++v17;
      ++v15;
      if ( v19 != (_WORD)v83 )
        v20 = v18;
      v18 = v20;
      goto LABEL_118;
    }
    v21 = *MessageFormat;
    v22 = v15;
    v86 = v15;
    if ( (unsigned __int16)(v21 - 49) <= (unsigned __int16)v85 )
    {
      ++MessageFormat;
      v23 = v21 - 48;
      v24 = *MessageFormat;
      v25 = v24;
      if ( (unsigned __int16)v24 >= 0x30u && v24 <= 0x39 )
      {
        ++MessageFormat;
        v23 = v24 + 2 * (5 * v23 - 24);
        v26 = *MessageFormat;
        v25 = v26;
        if ( (unsigned __int16)v26 >= 0x30u && v26 <= 0x39 )
        {
          ++MessageFormat;
          v23 = v26 + 2 * (5 * v23 - 24);
          v25 = *MessageFormat;
          if ( *MessageFormat >= 0x30u && *MessageFormat <= 0x39u )
            return -1073741811;
        }
      }
      v27 = v23;
      v28 = v23 - 1;
      v77 = 0;
      v29 = 0;
      if ( v25 == 33 )
      {
        v30 = MessageFormat + 1;
        pszDest = 37;
        v31 = v90;
        v32 = 0;
        ppszDestEnd = v90;
        v33 = *v30;
        if ( *v30 != 33 )
        {
          v34 = *v30;
          v35 = (char *)v90;
          while ( v34 )
          {
            if ( v35 >= &v91 )
              break;
            if ( v34 == 42 )
            {
              v36 = v29;
              v34 = v33;
              v77 = ++v29;
              if ( v36 > 1 )
                break;
            }
            *v31 = v34;
            ++v30;
            v31 = (NTSTRSAFE_PWSTR)(v35 + 2);
            ppszDestEnd = (NTSTRSAFE_PWSTR)(v35 + 2);
            v35 += 2;
            v33 = *v30;
            v34 = *v30;
            if ( *v30 == 33 )
              goto LABEL_21;
          }
          return -1073741811;
        }
LABEL_21:
        MessageFormat = v30 + 1;
        *v31 = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        v31 = ppszDestEnd;
        v32 = 1;
        v10 = v76;
      }
      if ( IgnoreInserts )
      {
        if ( v32 == 1 )
          goto LABEL_30;
        v37 = pszDest - 37;
        if ( pszDest == 37 )
        {
          v37 = v90[0] - 115;
          if ( v90[0] == 115 )
            v37 = v90[1];
        }
        if ( !v37 )
        {
LABEL_30:
          LODWORD(v71) = v27;
          v38 = RtlStringCchPrintfExW(v15, v16, &v80, 0LL, 0, L"%%%u", v71);
        }
        else
        {
          LODWORD(v71) = v27;
          v38 = RtlStringCchPrintfExW(v15, v16, &v80, 0LL, 0, L"%%%u!%s!", v71, v90);
        }
LABEL_73:
        if ( v38 < 0 )
          return -2147483643;
        v59 = v80 - v15;
        v16 -= v59;
        if ( v16 < 0 )
          return -2147483643;
        v17 = v75;
        v10 = v76;
        v22 = v86;
        v14 = v84;
        v13 = MaximumWidth;
        v11 = IgnoreInserts;
        v15 += (int)v59;
        goto LABEL_102;
      }
      if ( !v10 || v29 + (unsigned int)v28 >= 0xC8 )
        return -1073741811;
      if ( ArgumentsAreAnsi )
      {
        v39 = (char *)(v31 - 1);
        v40 = *(v31 - 1);
        if ( v40 == 99 )
        {
          v41 = *(v31 - 2) - 104;
          if ( v41 > 0xFu || (v42 = 32785, !_bittest(&v42, v41)) )
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
            goto LABEL_50;
          }
        }
        else
        {
          v42 = 32785;
        }
        if ( v40 != 115 || (v46 = *(v31 - 2) - 104, v46 <= 0xFu) && _bittest(&v42, v46) )
        {
          if ( v40 == 83 )
          {
            *(_WORD *)v39 = 115;
          }
          else if ( v40 == 67 )
          {
            *(_WORD *)v39 = 99;
          }
        }
        else
        {
          v43 = 3LL;
          v47 = (char *)L"hs" - v39;
          do
          {
            if ( v43 == -2147483643 )
              break;
            v48 = *(_WORD *)&v39[v47];
            if ( !v48 )
              break;
            *(_WORD *)v39 = v48;
            v39 += 2;
            --v43;
          }
          while ( v43 );
LABEL_50:
          v49 = v39 - 2;
          if ( v43 )
            v49 = v39;
          *(_WORD *)v49 = 0;
        }
      }
      v50 = v74;
      if ( (unsigned int)v28 >= v74 )
      {
        do
        {
          v51 = v50 + 1;
          if ( ArgumentsAreAnArray )
          {
            v52 = (__int64)*v10++;
          }
          else
          {
            *v10 += 8;
            v52 = *((_QWORD *)*v10 - 1);
          }
          v88[v50++] = v52;
        }
        while ( v51 <= (unsigned int)v28 );
        v29 = v77;
        v76 = v10;
        v74 = v51;
      }
      v53 = (wchar_t *)v88[v28];
      ppszDestEnd = v53;
      v54 = 0LL;
      v55 = 0LL;
      if ( v29 )
      {
        if ( ArgumentsAreAnArray )
        {
          v54 = *v10;
          v56 = v50++;
          v74 = v50;
          v88[v56] = *v10++;
          v76 = v10;
        }
        else
        {
          *v10 += 8;
          v54 = (va_list)*((_QWORD *)*v10 - 1);
        }
        if ( v29 > 1 )
        {
          v57 = v50;
          v58 = v50 + 1;
          v74 = v58;
          if ( ArgumentsAreAnArray )
          {
            v55 = *v10;
            v76 = v10 + 1;
          }
          else
          {
            *v10 += 8;
            v74 = v58;
            v55 = (va_list)*((_QWORD *)*v10 - 1);
          }
          v88[v57] = v55;
        }
      }
      v38 = RtlStringCchPrintfExW(v15, v16, &v80, 0LL, 0, &pszDest, v53, v54, v55);
      goto LABEL_73;
    }
    if ( (_WORD)v21 == 48 )
      break;
    if ( !(_WORD)v21 )
      return -1073741811;
    switch ( v21 )
    {
      case 'r':
        if ( --v16 < 0 )
          return -2147483643;
        *v15 = 13;
LABEL_81:
        ++v15;
        ++MessageFormat;
LABEL_103:
        v18 = 0LL;
        v17 = 0;
        goto LABEL_118;
      case 'n':
        v16 -= 2;
        if ( v16 < 0 )
          return -2147483643;
        *v15++ = 13;
        *v15 = 10;
        goto LABEL_81;
      case 't':
        if ( --v16 < 0 )
          return -2147483643;
        if ( (v17 & 7) != 0 )
          v17 = (v17 + 7) & 0xFFFFFFF8;
        else
          v17 += 8;
        v60 = 9;
LABEL_91:
        v18 = v15;
        goto LABEL_92;
      case 'b':
        if ( --v16 < 0 )
          return -2147483643;
        v60 = 32;
        goto LABEL_91;
    }
    if ( !v11 )
    {
      if ( --v16 < 0 )
        return -2147483643;
      *v15 = v21;
      goto LABEL_101;
    }
    v16 -= 2;
    if ( v16 < 0 )
      return -2147483643;
    *v15++ = 37;
    v60 = *MessageFormat;
LABEL_92:
    *v15 = v60;
LABEL_101:
    ++v15;
    ++MessageFormat;
LABEL_102:
    if ( !v22 )
      goto LABEL_103;
    v17 += v15 - v22;
LABEL_118:
    v75 = v17;
    if ( v13 && v13 != -1 && v17 >= v13 )
    {
      if ( v18 )
      {
        v61 = v18;
        do
        {
          if ( *v61 != 32 && *v61 != 9 )
            break;
          ++v61;
        }
        while ( v61 != v15 );
        if ( v18 > v14 )
        {
          do
          {
            v62 = v18 - 1;
            v63 = *(v18 - 1);
            if ( v63 != 32 && v63 != 9 )
              break;
            --v18;
          }
          while ( v62 > v14 );
        }
        v64 = v61 - v18;
        if ( (_DWORD)v64 == 1 )
        {
          if ( --v16 >= 0 )
            goto LABEL_135;
          return -2147483643;
        }
        if ( (unsigned int)v64 > 2 )
          v16 = v64 + v16 - 2;
LABEL_135:
        v65 = v15 - v61;
        v17 = v65;
        v75 = v65;
        memmove(v18 + 2, v61, 2 * v65);
        v13 = MaximumWidth;
        *v18 = 13;
        v66 = v18 + 1;
        *v66 = 10;
        v67 = &v66[(unsigned int)v65];
      }
      else
      {
        v16 -= 2;
        if ( v16 < 0 )
          return -2147483643;
        *v15 = 13;
        v67 = v15 + 1;
        v17 = 0;
        v75 = 0;
        *v67 = 10;
      }
      v10 = v76;
      v15 = v67 + 1;
      v14 = v84;
      v11 = IgnoreInserts;
      goto LABEL_3;
    }
  }
  if ( v16 < 1 )
    return -2147483643;
  v70 = v87;
  *v15 = 0;
  if ( v70 )
    *v70 = 2 * (((char *)v15 - (char *)v14 + 2) >> 1);
  return 0;
}
