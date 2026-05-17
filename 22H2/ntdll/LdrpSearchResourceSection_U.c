/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180033BCC
 * Callers:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlLoadString @ 0x180053B40 (RtlLoadString.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x18006A4D0 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x180071690 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800818D0 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E0E30 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     ResourceEntryBinarySearch @ 0x180034888 (ResourceEntryBinarySearch.c)
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlULongAdd @ 0x180038AC4 (RtlULongAdd.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 *     LdrpGetParentLangId @ 0x18007EB64 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E340 (_wcsicmp.c)
 *     RtlULongMult @ 0x18009C9E8 (RtlULongMult.c)
 *     NtQueryDefaultLocale @ 0x18009D780 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v10; // rbx
  int v11; // ecx
  __int16 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // r9
  unsigned __int64 CurrentLocale_low; // rcx
  int v22; // r15d
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // r14d
  __int64 Heap; // rax
  unsigned __int64 v28; // rdx
  int v29; // edi
  __int64 *v30; // rcx
  unsigned __int64 v31; // r15
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int16 v38; // ax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edi
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  struct _TEB *v48; // rax
  _DWORD *RcConfig; // rax
  __int64 v50; // r10
  __int16 v51; // r11
  unsigned int *v52; // rdx
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  unsigned int v56; // ecx
  __int64 *v57; // rdi
  int ResourceFromAlternativeModule; // eax
  int v59; // eax
  int v60; // eax
  _WORD v61[2]; // [rsp+40h] [rbp-128h] BYREF
  bool v62; // [rsp+44h] [rbp-124h]
  int v63; // [rsp+48h] [rbp-120h]
  __int16 v64; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v65; // [rsp+50h] [rbp-118h]
  unsigned int v66; // [rsp+58h] [rbp-110h]
  __int64 v67; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-100h]
  unsigned __int64 v69; // [rsp+70h] [rbp-F8h]
  __int64 *v70; // [rsp+78h] [rbp-F0h]
  int v71; // [rsp+80h] [rbp-E8h]
  unsigned int v72; // [rsp+84h] [rbp-E4h]
  char v73[4]; // [rsp+88h] [rbp-E0h] BYREF
  int v74; // [rsp+8Ch] [rbp-DCh] BYREF
  __int64 v75; // [rsp+90h] [rbp-D8h]
  __int64 v76; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-C8h] BYREF
  int v78; // [rsp+A8h] [rbp-C0h] BYREF
  int v79; // [rsp+ACh] [rbp-BCh] BYREF
  unsigned int v80; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v81; // [rsp+B4h] [rbp-B4h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-A0h]
  int v85; // [rsp+D0h] [rbp-98h] BYREF
  struct _TEB *v86; // [rsp+D8h] [rbp-90h]
  unsigned int *v87; // [rsp+E0h] [rbp-88h]
  __int64 *v88; // [rsp+E8h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v90; // [rsp+100h] [rbp-68h] BYREF
  __int64 v91; // [rsp+108h] [rbp-60h]
  __int64 v92; // [rsp+110h] [rbp-58h]
  __int64 v93; // [rsp+118h] [rbp-50h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v69 = a1;
  v65 = a4;
  v70 = a5;
  v10 = 0LL;
  v62 = 0;
  v82 = 0LL;
  v72 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v11 = a3;
  if ( a3 == 4 )
    v11 = 3;
  v66 = v11;
  v71 = v11;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v11 - 1) <= 2 )
  {
    if ( v11 == 3 )
      v12 = *(_WORD *)(a2 + 16);
    else
      v12 = 0;
    v64 = v12;
    v13 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v13 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v14 = wcsicmp((const wchar_t *)v13, L"MUI"), v8 = v69, v14))
      || (~(_BYTE)v5 & 8) == 0
      || (v12 & 0xF3FF) != 0
      || v12 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v65 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v63 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v90 = *v7;
          if ( v66 < 2 )
            v16 = 0LL;
          else
            v16 = v7[1];
          v91 = v16;
          if ( v66 == 3 )
            v10 = v7[2];
          v92 = v10;
          if ( a3 == 4 )
            v93 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(v69, (unsigned int)&v90, a3, v5, (__int64)v70);
          v63 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v65 = v5;
    }
  }
  v17 = RtlpImageDirectoryEntryToDataEx(v69, 1, 2u, &v85, &v83);
  v19 = v83;
  if ( v17 < 0 )
    v19 = 0LL;
  v83 = v19;
  v84 = v19;
  if ( !v19 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(v69, &v82, 256LL, v18);
  v63 = result;
  if ( (int)result >= 0 )
  {
    v77 = v19;
    v67 = 61166LL;
    v68 = 0;
    CurrentLocale_low = 0LL;
    v76 = 0LL;
    v75 = 0LL;
    v61[0] = 0;
    v64 = 0;
    v74 = 0;
    v22 = -1073741811;
    while ( 1 )
    {
      v23 = 3221225610LL;
      if ( !v19 )
        goto LABEL_48;
      v24 = v71;
      v23 = (unsigned int)--v71;
      if ( !v24 )
        goto LABEL_47;
      if ( !(_DWORD)v23 )
      {
        v25 = v75;
        if ( v66 == 3 )
          v25 = v19;
        v75 = v25;
      }
      if ( v75 )
      {
        v61[0] = 0;
        v64 = *(_WORD *)(a2 + 16);
        v62 = (v64 & 0x3FF) == 0;
        v26 = v66;
        goto LABEL_77;
      }
LABEL_155:
      result = RtlULongAdd(*(unsigned __int16 *)(v19 + 12), *(unsigned __int16 *)(v19 + 14), &v80);
      v63 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v80, 8LL, &v81);
      v63 = result;
      if ( (int)result < 0 )
        return result;
      v52 = (unsigned int *)(v19 + 16);
      v87 = v52;
      v53 = v69;
      v54 = v82 + (v69 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v52 + v81 > v54 )
        return 3221225595LL;
      v55 = *v7;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v52 += 2 * v50;
        v87 = v52;
        LOWORD(v50) = v51;
      }
      if ( !(_WORD)v50 )
      {
        v56 = v66;
        switch ( v66 - v71 )
        {
          case 1u:
            v22 = -1073741686;
            break;
          case 2u:
            v22 = -1073741685;
            v63 = -1073741685;
            goto LABEL_169;
          case 3u:
            v22 = -1073741308;
            v63 = -1073741308;
            return (unsigned int)v22;
        }
        v63 = v22;
        if ( (unsigned int)(v22 + 1073741686) <= 1 )
        {
LABEL_169:
          if ( (v5 & 0x2040000) == 0 && v66 == 3 )
          {
            v90 = *(_QWORD *)a2;
            v91 = *(_QWORD *)(a2 + 8);
            v92 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v93 = *(_QWORD *)(a2 + 24);
            v57 = v70;
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              v69,
                                              (unsigned int)&v90,
                                              a3,
                                              v5 | 0x1000000,
                                              (__int64)v70);
            v56 = v66;
            if ( ResourceFromAlternativeModule != -1073020927 )
            {
              if ( ResourceFromAlternativeModule != -1073020922 )
                v22 = ResourceFromAlternativeModule;
              v63 = v22;
            }
            goto LABEL_178;
          }
        }
        v57 = v70;
LABEL_178:
        if ( (unsigned int)(v22 + 1073741686) <= 1 )
        {
          v59 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v59 & 0x20000) != 0 && (v59 & 0x10) != 0 && v56 == 3 )
          {
            v90 = *(_QWORD *)a2;
            v91 = *(_QWORD *)(a2 + 8);
            v92 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v93 = *(_QWORD *)(a2 + 24);
            v22 = LdrpLoadResourceFromAlternativeModule(v53, (unsigned int)&v90, a3, v5, (__int64)v57);
            v63 = v22;
            if ( v22 >= 0 )
              LdrpResReportResourceAccessInternal(v53, 0LL, &v90, a3);
          }
        }
        return (unsigned int)v22;
      }
      if ( v75 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               v69,
                               v82,
                               (unsigned __int16)v50,
                               v84,
                               (__int64)v52,
                               v55,
                               (__int64)&v77,
                               (__int64)&v76) )
        return 3221225595LL;
      v88 = ++v7;
      v19 = v77;
      CurrentLocale_low = v76;
    }
    v19 = 0LL;
    v77 = 0LL;
    v67 = *v52;
    CurrentLocale_low = v84 + v52[1];
    if ( CurrentLocale_low > v54 )
      return 3221225595LL;
    v76 = v84 + v52[1];
LABEL_47:
    v23 = 3221225610LL;
LABEL_48:
    if ( CurrentLocale_low && (v5 & 2) == 0 )
    {
      *v70 = CurrentLocale_low;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v86 = NtCurrentTeb();
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL);
        v86->ResourceRetValue = (void *)Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v28 = v69;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v69;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v76;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v28;
      }
      v29 = 0;
      v63 = 0;
      v5 = v65;
      v26 = v66;
      goto LABEL_55;
    }
    if ( v19 && (v5 & 2) != 0 )
    {
      v30 = v70;
      *v70 = v19;
      v29 = 0;
      v63 = 0;
      v26 = v66;
      goto LABEL_56;
    }
    v26 = v66;
    if ( v66 - v71 == 1 )
    {
      v29 = -1073741686;
      v63 = -1073741686;
      goto LABEL_55;
    }
    if ( v66 - v71 == 2 )
    {
      v29 = -1073741685;
      v63 = -1073741685;
      goto LABEL_55;
    }
    if ( v66 - v71 != 3 )
    {
      v29 = -1073741811;
      v63 = -1073741811;
      goto LABEL_55;
    }
    v29 = -1073741308;
    v63 = -1073741308;
    if ( v75 )
    {
      v76 = 0LL;
      while ( 1 )
      {
LABEL_77:
        v33 = v68++;
        if ( v33 > 6 )
        {
          v43 = v33 - 7;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( !v44 )
            {
              v61[0] = v67;
              if ( (~v5 & 0x80000) == 0 )
              {
                if ( NtCurrentTeb() )
                {
                  v48 = NtCurrentTeb();
                  CurrentLocale_low = LOWORD(v48->CurrentLocale);
                  v61[0] = v48->CurrentLocale;
                }
                v5 = v65;
                goto LABEL_152;
              }
              goto LABEL_140;
            }
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( v47 )
                {
                  if ( v47 != 1 )
                    return 3221225988LL;
LABEL_140:
                  v5 |= 0x20u;
                  v65 = v5;
                  goto LABEL_152;
                }
                v38 = 1033;
              }
              else
              {
                v61[0] = v67;
                v63 = NtQueryDefaultLocale(0LL, &v78, 1023LL);
                if ( v63 < 0 )
                  goto LABEL_152;
                v38 = v78;
                if ( v78 == v74 )
                  goto LABEL_152;
              }
            }
            else
            {
              v61[0] = v67;
              LOBYTE(CurrentLocale_low) = 1;
              v63 = NtQueryDefaultLocale(CurrentLocale_low, &v74, 1023LL);
              if ( v63 < 0 )
                goto LABEL_152;
              v38 = v74;
            }
          }
          else
          {
            if ( (~v5 & 0x80000) == 0 )
              goto LABEL_150;
            LOBYTE(v20) = 1;
            RcConfig = (_DWORD *)LdrpGetRcConfig(v69, v23, 0LL, v20);
            if ( !RcConfig )
              goto LABEL_150;
            if ( *RcConfig != -20054323 )
              goto LABEL_150;
            if ( !RcConfig[31] )
              goto LABEL_150;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
            if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v79) )
              goto LABEL_150;
            v38 = v79;
          }
        }
        else
        {
          if ( v33 == 6 )
          {
            v61[0] = v67;
            if ( (v5 & 0x20) != 0 )
              goto LABEL_152;
            v61[0] = 0;
            if ( (unsigned __int8)LdrpSetThreadPreferredLangList(CurrentLocale_low, v23, 1023LL) )
            {
              CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v72 >= (unsigned int)CurrentLocale_low )
                v61[0] = 0;
              else
                GetLCIDFromLangListNodeWithLICCheck(
                  CurrentLocale_low,
                  NtCurrentTeb()->MergedPrefLanguages,
                  v72,
                  (unsigned int)v61,
                  (__int64)v73);
              v5 = v65;
            }
            else
            {
              v61[0] = 0;
            }
            if ( v61[0] )
            {
              ++v72;
LABEL_125:
              --v68;
              goto LABEL_152;
            }
            goto LABEL_150;
          }
          if ( !v33 )
          {
            if ( !v64 )
            {
LABEL_95:
              v61[0] = 0;
              goto LABEL_152;
            }
            v38 = v67;
            if ( (v5 & 0x80000) != 0 )
              v38 = v64;
            goto LABEL_151;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            v39 = ~v5;
            if ( (~v5 & 0x80000) != 0 && (v39 & 0x20000) != 0 && (v39 & 0x10) != 0 )
            {
              v90 = *(_QWORD *)a2;
              if ( v26 < 2 )
                v40 = 0LL;
              else
                v40 = *(_QWORD *)(a2 + 8);
              v91 = v40;
              if ( v26 == 3 )
                v41 = *(_QWORD *)(a2 + 16);
              else
                v41 = 0LL;
              v92 = v41;
              if ( a3 == 4 )
                v93 = *(_QWORD *)(a2 + 24);
              v42 = LdrpLoadResourceFromAlternativeModule(v69, (unsigned int)&v90, a3, v5, (__int64)v70);
              v63 = v42;
              if ( v42 >= 0 )
              {
                LdrpResReportResourceAccessInternal(v69, 0LL, &v90, a3);
                return (unsigned int)v42;
              }
            }
LABEL_150:
            v38 = v67;
            goto LABEL_151;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            v38 = v64;
            if ( v62 )
              v38 = v67;
            goto LABEL_151;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( !v62 )
            {
              if ( (int)LdrpGetParentLangId(v61[0], v61, 1023LL) < 0 )
                goto LABEL_95;
              if ( !v61[0] )
                goto LABEL_152;
              goto LABEL_125;
            }
            goto LABEL_150;
          }
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 )
              return 3221225988LL;
            if ( !v62 )
              return 3221225988LL;
            goto LABEL_150;
          }
          if ( v62 )
            goto LABEL_150;
          v38 = v64 & 0x3FF;
        }
LABEL_151:
        v61[0] = v38;
LABEL_152:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v61[0] != v67 )
        {
          v67 = v61[0];
          v7 = &v67;
          v88 = &v67;
          v19 = v75;
          v77 = v75;
          goto LABEL_155;
        }
      }
    }
LABEL_55:
    v30 = v70;
LABEL_56:
    if ( (v5 & 0x2040000) != 0 || (unsigned int)(v29 + 1073741686) > 1 || v26 != 3 )
    {
      v31 = v69;
    }
    else
    {
      v90 = *(_QWORD *)a2;
      v91 = *(_QWORD *)(a2 + 8);
      v92 = *(_QWORD *)(a2 + 16);
      if ( a3 == 4 )
        v93 = *(_QWORD *)(a2 + 24);
      v31 = v69;
      v32 = LdrpLoadResourceFromAlternativeModule(v69, (unsigned int)&v90, a3, v5 | 0x1000000, (__int64)v30);
      if ( v32 != -1073020927 )
      {
        if ( v32 != -1073020922 )
          v29 = v32;
        v63 = v29;
      }
    }
    if ( (unsigned int)(v29 + 1073741686) <= 1 )
    {
      v60 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v60 & 0x20000) != 0 && (v60 & 0x10) != 0 && v26 == 3 )
      {
        v90 = *(_QWORD *)a2;
        v91 = *(_QWORD *)(a2 + 8);
        v92 = *(_QWORD *)(a2 + 16);
        if ( a3 == 4 )
          v93 = *(_QWORD *)(a2 + 24);
        v29 = LdrpLoadResourceFromAlternativeModule(v31, (unsigned int)&v90, a3, v5, (__int64)v70);
        v63 = v29;
        if ( v29 >= 0 )
          LdrpResReportResourceAccessInternal(v31, 0LL, &v90, a3);
      }
    }
    return (unsigned int)v29;
  }
  return result;
}
