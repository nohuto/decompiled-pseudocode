/*
 * XREFs of RtlFormatMessageEx @ 0x180067200
 * Callers:
 *     RtlFormatMessage @ 0x1800FC4D0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x18006717C (RtlStringCopyWorkerW_0.c)
 *     RtlStringCchPrintfExW @ 0x180067938 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
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
  ULONG v10; // r13d
  signed int v12; // r10d
  PWSTR v13; // r8
  ULONG cwSavColumn; // r14d
  PWSTR v15; // rbx
  WCHAR *v16; // rsi
  PWSTR v17; // r12
  __int16 v18; // ax
  WCHAR *v19; // rcx
  NTSTATUS result; // eax
  int v21; // ecx
  PWSTR v22; // rdx
  int v23; // r15d
  WCHAR v24; // ax
  va_list v25; // r8
  int v26; // r14d
  __int64 v27; // r15
  unsigned int v28; // r13d
  int v29; // r8d
  WCHAR *v30; // r11
  char v31; // r9
  va_list *v32; // r14
  unsigned int v33; // r11d
  unsigned int v34; // edx
  __int64 v35; // rax
  WCHAR *v36; // r9
  va_list v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  bool v40; // sf
  unsigned int v41; // r14d
  __int16 v42; // ax
  WCHAR *v43; // r12
  WCHAR v44; // cx
  WCHAR v45; // dx
  char *v46; // r8
  int v47; // eax
  SIZE_T v48; // rsi
  SIZE_T iwSrc; // rax
  ULONG fFlags; // ecx
  SIZE_T iwDst; // rax
  SIZE_T iwDstSpace; // rax
  unsigned int v53; // eax
  int v54; // ecx
  int v55; // eax
  WCHAR *v56; // rcx
  unsigned __int16 v57; // ax
  int v58; // r9d
  __int64 v59; // rdx
  char *v60; // r8
  WCHAR v61; // ax
  unsigned __int16 v62; // ax
  char *v63; // r8
  WCHAR v64; // ax
  char *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // r11d
  WCHAR *v69; // rdx
  PWSTR v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  _WORD *v73; // rsi
  _WORD *v74; // rbx
  __int64 v75; // [rsp+38h] [rbp-D0h]
  ULONG v76; // [rsp+58h] [rbp-B0h]
  unsigned int v79; // [rsp+60h] [rbp-A8h]
  ULONG v80; // [rsp+68h] [rbp-A0h]
  PWSTR v81; // [rsp+70h] [rbp-98h]
  va_list *v82; // [rsp+80h] [rbp-88h]
  __int64 v83; // [rsp+88h] [rbp-80h] BYREF
  PWSTR v84; // [rsp+90h] [rbp-78h]
  ULONG v85; // [rsp+98h] [rbp-70h]
  __int64 v86; // [rsp+A0h] [rbp-68h] BYREF
  PWSTR v87; // [rsp+A8h] [rbp-60h]
  PWSTR v88; // [rsp+B0h] [rbp-58h]
  PULONG v89; // [rsp+B8h] [rbp-50h]
  _QWORD v90[200]; // [rsp+C8h] [rbp-40h]
  unsigned __int16 v91; // [rsp+708h] [rbp+600h] BYREF
  _WORD v92[30]; // [rsp+70Ah] [rbp+602h] BYREF
  char v93; // [rsp+746h] [rbp+63Eh] BYREF

  v10 = MaximumWidth;
  v85 = MaximumWidth;
  v12 = Length >> 1;
  v89 = ReturnLength;
  v13 = Buffer;
  v88 = MessageFormat;
  v82 = Arguments;
  v79 = 0;
  v76 = Length >> 1;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    iwSrc = ParseContext->iwSrc;
    fFlags = ParseContext->fFlags & 0xFFFFFFFE;
    cwSavColumn = ParseContext->cwSavColumn;
    v16 = 0LL;
    ParseContext->fFlags = fFlags;
    v80 = cwSavColumn;
    v17 = &MessageFormat[iwSrc];
    iwDst = ParseContext->iwDst;
    v84 = v17;
    v15 = &Buffer[iwDst];
    iwDstSpace = ParseContext->iwDstSpace;
    if ( iwDstSpace != -1LL )
      v16 = &Buffer[iwDstSpace];
    v12 -= LODWORD(ParseContext->iwDst);
    v76 = v12;
    if ( !ArgumentsAreAnArray && Arguments )
    {
      *Arguments = ParseContext->lpvArgStart;
      fFlags = ParseContext->fFlags;
    }
    if ( (fFlags & 2) != 0 )
    {
      ParseContext->fFlags = fFlags & 0xFFFFFFFD;
      v81 = Buffer;
      goto LABEL_155;
    }
  }
  else
  {
    cwSavColumn = 0;
    v15 = Buffer;
    v16 = 0LL;
    v80 = 0;
    v17 = MessageFormat;
    v84 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  v81 = Buffer;
  while ( 1 )
  {
    v18 = *v17;
    v19 = v15;
    if ( !*v17 )
      break;
    ++v17;
    if ( v18 == 37 )
    {
      v21 = *v17;
      v22 = v15;
      v87 = v15;
      if ( (unsigned __int16)(v21 - 49) > 8u )
      {
        if ( (_WORD)v21 == 48 )
          break;
        if ( !(_WORD)v21 )
          return -1073741811;
        switch ( v21 )
        {
          case 'r':
            v76 = --v12;
            if ( v12 < 0 )
              goto LABEL_87;
            *v15++ = 13;
            goto LABEL_84;
          case 'n':
            v12 -= 2;
            v76 = v12;
            if ( v12 < 0 )
              goto LABEL_87;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
LABEL_84:
            ++v17;
            goto LABEL_85;
          case 't':
            v76 = --v12;
            if ( v12 < 0 )
              goto LABEL_87;
            if ( (cwSavColumn & 7) != 0 )
              v41 = (cwSavColumn + 7) & 0xFFFFFFF8;
            else
              v41 = cwSavColumn + 8;
            v80 = v41;
            v42 = 9;
            goto LABEL_62;
          case 'b':
            v76 = --v12;
            if ( v12 < 0 )
              goto LABEL_87;
            v42 = 32;
LABEL_62:
            v16 = v15;
            *v15 = v42;
LABEL_63:
            ++v15;
            break;
          default:
            if ( !IgnoreInserts )
            {
              v76 = --v12;
              if ( v12 < 0 )
                goto LABEL_87;
              *v15 = v21;
              goto LABEL_63;
            }
            v12 -= 2;
            v76 = v12;
            if ( v12 < 0 )
              goto LABEL_87;
            *v15 = 37;
            v15[1] = *v17;
            v15 += 2;
            break;
        }
        ++v17;
        goto LABEL_47;
      }
      ++v17;
      v23 = v21 - 48;
      v24 = *v17;
      if ( *v17 >= 0x30u && v24 <= 0x39u )
      {
        v47 = *v17++;
        v23 = v47 + 2 * (5 * v23 - 24);
        v24 = *v17;
        if ( *v17 >= 0x30u && v24 <= 0x39u )
        {
          v55 = *v17++;
          v23 = v55 + 2 * (5 * v23 - 24);
          v24 = *v17;
          if ( *v17 >= 0x30u && v24 <= 0x39u )
            return -1073741811;
        }
      }
      v25 = 0LL;
      v26 = v23;
      v27 = (unsigned int)(v23 - 1);
      v28 = 0;
      if ( v24 == 33 )
      {
        v43 = v17 + 1;
        v91 = 37;
        v30 = v92;
        v31 = 0;
        v81 = v92;
        v44 = *v43;
        if ( *v43 != 33 )
        {
          v45 = *v43;
          v46 = (char *)v92;
          while ( v45 )
          {
            if ( v46 >= &v93 )
              break;
            if ( v45 == 42 )
            {
              v53 = v28;
              v45 = v44;
              ++v28;
              if ( v53 > 1 )
                break;
            }
            *v30 = v45;
            ++v43;
            v30 = (WCHAR *)(v46 + 2);
            v81 = (PWSTR)(v46 + 2);
            v46 += 2;
            v44 = *v43;
            v45 = *v43;
            if ( *v43 == 33 )
            {
              v25 = 0LL;
              goto LABEL_75;
            }
          }
          return -1073741811;
        }
LABEL_75:
        v17 = v43 + 1;
        *v30 = 0;
      }
      else
      {
        v86 = 0LL;
        v29 = RtlStringCopyWorkerW_0(&v91, 48LL, &v86, (__int64)L"%s");
        if ( (int)(v29 + 0x80000000) < 0 || v29 == -2147483643 )
        {
          v30 = &v92[v86 - 1];
          v81 = v30;
        }
        else
        {
          v30 = v81;
        }
        v12 = v76;
        v31 = 1;
        v25 = 0LL;
      }
      if ( IgnoreInserts )
      {
        if ( v31 == 1 )
          goto LABEL_52;
        v54 = v91 - 37;
        if ( v91 == 37 )
        {
          v54 = v92[0] - 115;
          if ( v92[0] == 115 )
            v54 = v92[1];
        }
        if ( !v54 )
        {
LABEL_52:
          LODWORD(v75) = v26;
          v38 = RtlStringCchPrintfExW((_DWORD)v15, v12, (unsigned int)&v83, 0, 0, (__int64)L"%%%u", v75);
        }
        else
        {
          LODWORD(v75) = v26;
          v38 = RtlStringCchPrintfExW((_DWORD)v15, v12, (unsigned int)&v83, 0, 0, (__int64)L"%%%u!%s!", v75, v92);
        }
        goto LABEL_44;
      }
      v32 = v82;
      if ( !v82 || (unsigned int)v27 + v28 >= 0xC8 )
        return -1073741811;
      if ( ArgumentsAreAnsi )
      {
        v56 = v30 - 1;
        if ( *(v30 - 1) == 99 )
        {
          v57 = *(v30 - 2) - 104;
          if ( v57 > 0xFu || (v58 = 32785, !_bittest(&v58, v57)) )
          {
            v59 = 3LL;
            v60 = (char *)((char *)L"hc" - (char *)v56);
            do
            {
              if ( v59 == -2147483643 )
                break;
              v61 = *(WCHAR *)((char *)v56 + (_QWORD)v60);
              if ( !v61 )
                break;
              *v56++ = v61;
              --v59;
            }
            while ( v59 );
LABEL_138:
            v25 = 0LL;
            v65 = (char *)(v56 - 1);
            if ( v59 )
              v65 = (char *)v56;
            *(_WORD *)v65 = 0;
            goto LABEL_37;
          }
        }
        else
        {
          v58 = 32785;
        }
        if ( *v56 != 115 || (v62 = *(v30 - 2) - 104, v62 <= 0xFu) && _bittest(&v58, v62) )
        {
          if ( *v56 == 83 )
          {
            *v56 = 115;
          }
          else if ( *v56 == 67 )
          {
            *v56 = 99;
          }
          goto LABEL_37;
        }
        v59 = 3LL;
        v63 = (char *)((char *)L"hs" - (char *)v56);
        do
        {
          if ( v59 == -2147483643 )
            break;
          v64 = *(_WORD *)&v63[(_QWORD)v56];
          if ( !v64 )
            break;
          *v56++ = v64;
          --v59;
        }
        while ( v59 );
        goto LABEL_138;
      }
LABEL_37:
      v33 = v79;
      if ( (unsigned int)v27 >= v79 )
      {
        do
        {
          v34 = v33 + 1;
          if ( ArgumentsAreAnArray )
          {
            v35 = (__int64)*v32++;
          }
          else
          {
            *v32 += 8;
            v35 = *((_QWORD *)*v32 - 1);
          }
          v90[v33++] = v35;
        }
        while ( v34 <= (unsigned int)v27 );
        v12 = v76;
        v82 = v32;
        v79 = v34;
      }
      v36 = (WCHAR *)v90[v27];
      v81 = v36;
      v37 = 0LL;
      if ( v28 )
      {
        if ( ArgumentsAreAnArray )
        {
          v25 = *v32;
          v66 = v33++;
          ++v32;
          v79 = v33;
          v82 = v32;
          v90[v66] = v25;
        }
        else
        {
          *v32 += 8;
          v25 = (va_list)*((_QWORD *)*v32 - 1);
        }
        if ( v28 > 1 )
        {
          v67 = v33;
          v68 = v33 + 1;
          v79 = v68;
          if ( ArgumentsAreAnArray )
          {
            v37 = *v32;
            v82 = v32 + 1;
          }
          else
          {
            *v32 += 8;
            v79 = v68;
            v37 = (va_list)*((_QWORD *)*v32 - 1);
          }
          v90[v67] = v37;
        }
      }
      v38 = RtlStringCchPrintfExW((_DWORD)v15, v12, (unsigned int)&v83, 0, 0, (__int64)&v91, v36, v25, v37);
LABEL_44:
      if ( v38 < 0 )
        goto LABEL_87;
      v39 = (v83 - (__int64)v15) >> 1;
      v40 = (int)(v76 - v39) < 0;
      v12 = v76 - v39;
      v76 -= v39;
      if ( v40 )
        goto LABEL_87;
      v22 = v87;
      v13 = Buffer;
      v10 = v85;
      v15 += (int)v39;
LABEL_47:
      if ( v22 )
      {
        cwSavColumn = v15 - v22 + v80;
        goto LABEL_14;
      }
LABEL_85:
      v16 = 0LL;
      cwSavColumn = 0;
LABEL_14:
      v80 = cwSavColumn;
      v84 = v17;
      if ( v10 && v10 != -1 && cwSavColumn >= v10 )
      {
LABEL_155:
        if ( v16 )
        {
          v69 = v16;
          do
          {
            if ( *v69 != 32 && *v69 != 9 )
              break;
            ++v69;
          }
          while ( v69 != v15 );
          if ( v16 > Buffer )
          {
            do
            {
              v70 = v16 - 1;
              if ( *(v16 - 1) != 32 && *v70 != 9 )
                break;
              --v16;
            }
            while ( v70 > Buffer );
          }
          v71 = v69 - v16;
          if ( (_DWORD)v71 == 1 )
          {
            v76 = v12 - 1;
            if ( v12 - 1 < 0 )
              goto LABEL_166;
          }
          else if ( (unsigned int)v71 > 2 )
          {
            v76 = v71 + v12 - 2;
          }
          v72 = v15 - v69;
          cwSavColumn = v72;
          v80 = v72;
          memmove(v16 + 2, v69, 2 * v72);
          v12 = v76;
          *v16 = 13;
          v73 = v16 + 1;
          *v73 = 10;
          v74 = &v73[(unsigned int)v72];
        }
        else
        {
          v12 -= 2;
          v76 = v12;
          if ( v12 < 0 )
          {
LABEL_166:
            if ( ParseContext )
            {
              ParseContext->fFlags |= 2u;
              goto LABEL_87;
            }
            return -2147483643;
          }
          cwSavColumn = 0;
          *v15 = 13;
          v74 = v15 + 1;
          v80 = 0;
          *v74 = 10;
        }
        v13 = Buffer;
        v16 = 0LL;
        v15 = v74 + 1;
      }
    }
    else
    {
      if ( v18 != 13 && v18 != 10 )
        goto LABEL_10;
      if ( v18 == 10 && *v17 == 13 || v18 == 13 && *v17 == 10 )
        ++v17;
      if ( v10 )
      {
        v16 = v15;
        v18 = 32;
LABEL_10:
        v76 = --v12;
        if ( v12 < 0 )
          goto LABEL_87;
        *v15 = v18;
        ++cwSavColumn;
        ++v15;
        if ( v18 != 32 )
          v19 = v16;
        v16 = v19;
        goto LABEL_14;
      }
      v12 -= 2;
      v76 = v12;
      if ( v12 < 0 )
        goto LABEL_87;
      cwSavColumn = 0;
      *(_DWORD *)v15 = 655373;
      v80 = 0;
      v15 += 2;
      v16 = 0LL;
      v84 = v17;
    }
  }
  if ( v12 < 1 )
  {
LABEL_87:
    if ( ParseContext )
    {
      ParseContext->cwSavColumn = v80;
      ParseContext->iwSrc = v84 - v88;
      ParseContext->iwDst = v15 - Buffer;
      if ( v16 )
        v48 = v16 - Buffer;
      else
        v48 = -1LL;
      ParseContext->fFlags |= 1u;
      ParseContext->iwDstSpace = v48;
    }
    return -2147483643;
  }
  *v15 = 0;
  result = 0;
  if ( v89 )
    *v89 = 2 * (((char *)v15 - (char *)v13 + 2) >> 1);
  return result;
}
