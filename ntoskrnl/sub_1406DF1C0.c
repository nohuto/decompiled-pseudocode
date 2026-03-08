/*
 * XREFs of sub_1406DF1C0 @ 0x1406DF1C0
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeQueryTimeIncrement @ 0x140351FF0 (KeQueryTimeIncrement.c)
 *     StringCbLengthW @ 0x14035ACC4 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406DF1C0(__int64 a1, WCHAR *a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int v13; // r8d
  __int64 *v14; // r15
  __int64 v15; // r15
  bool v16; // cc
  unsigned int j; // r8d
  __int64 v18; // rax
  unsigned int *v19; // rdx
  size_t v20; // rdx
  _WORD *v21; // rbx
  __int64 v22; // r11
  unsigned int v23; // eax
  size_t v24; // r13
  WCHAR *Pool2; // rax
  WCHAR *v26; // rsi
  unsigned int *v27; // rcx
  unsigned int *v28; // rax
  unsigned int v29; // r8d
  WCHAR *v30; // r9
  __int64 v31; // r10
  unsigned int *v32; // rdx
  unsigned int v33; // r8d
  unsigned int *v34; // rdx
  unsigned int *v35; // rax
  unsigned int v36; // r13d
  unsigned int v37; // r8d
  WCHAR *v38; // rax
  __int64 v39; // r9
  unsigned int *v40; // rdx
  unsigned int v41; // r8d
  unsigned int *v42; // rax
  unsigned int v43; // ebx
  int v44; // eax
  int v45; // r8d
  int v46; // eax
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // eax
  int v50; // r10d
  int v51; // r9d
  unsigned int v52; // edx
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // ebx
  __int64 v57; // r12
  __int64 v58; // rbx
  ULONG TimeIncrement; // eax
  __int64 v60; // rdx
  int v61; // ebx
  size_t v62; // rsi
  int v63; // eax
  int v64; // ecx
  double v65; // xmm0_8
  unsigned __int64 v66; // rax
  int v67; // eax
  NTSTATUS v68; // eax
  unsigned int v69; // r13d
  __int64 v70; // rbx
  ULONG v71; // eax
  __int64 v72; // rdx
  size_t v73; // rax
  int v74; // ecx
  unsigned int *v75; // r8
  unsigned int v76; // edx
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r11
  int v81; // r10d
  unsigned int v82; // eax
  unsigned int v83; // ecx
  _DWORD *k; // rdx
  unsigned int v85; // eax
  __int64 v86; // r11
  unsigned int v87; // eax
  unsigned int v88; // ecx
  unsigned __int64 m; // rdx
  unsigned int v90; // eax
  __int64 v91; // r10
  int v92; // r11d
  unsigned int v93; // eax
  unsigned int v94; // ecx
  _DWORD *n; // rdx
  unsigned int v96; // eax
  unsigned int v97; // r11d
  __int64 v98; // r10
  unsigned int v99; // eax
  unsigned int v100; // ecx
  _DWORD *ii; // rdx
  unsigned int v102; // eax
  __int64 v103; // r10
  unsigned int v104; // r11d
  unsigned int v105; // eax
  unsigned int v106; // ecx
  _DWORD *jj; // rdx
  unsigned int v108; // eax
  __int64 v109; // r10
  unsigned int v110; // eax
  unsigned int v111; // ecx
  _DWORD *v112; // rdx
  unsigned int v113; // eax
  int v115; // [rsp+28h] [rbp-61h]
  int v116; // [rsp+30h] [rbp-59h]
  int v117; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v118; // [rsp+44h] [rbp-45h]
  unsigned int v119; // [rsp+48h] [rbp-41h] BYREF
  size_t Size; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v121; // [rsp+54h] [rbp-35h] BYREF
  int v122; // [rsp+58h] [rbp-31h] BYREF
  int v123; // [rsp+5Ch] [rbp-2Dh]
  size_t pcbLength; // [rsp+60h] [rbp-29h] BYREF
  int v125; // [rsp+68h] [rbp-21h] BYREF
  WCHAR *v126; // [rsp+70h] [rbp-19h]
  PVOID P; // [rsp+78h] [rbp-11h]
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING v130; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v131; // [rsp+A8h] [rbp+1Fh] BYREF
  int v132; // [rsp+B0h] [rbp+27h]

  v119 = a3;
  v126 = a2;
  v125 = 0;
  v121 = 0;
  P = 0LL;
  v6 = 0;
  Timeout.QuadPart = 0LL;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(const wchar_t **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = (unsigned int *)v8;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v13 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v13 )
    v14 = (__int64 *)(v9 + 1);
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v15 = *v14;
  v16 = *(_DWORD *)a1 <= 4u;
  pcbLength = 0LL;
  if ( v16 )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *(unsigned int *)v8;
    v19 = (unsigned int *)(v8 + 2);
    if ( v8 + 2 < v8 )
      return (unsigned int)-1073741675;
    v8 = (const wchar_t *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *(unsigned int *)v8;
  if ( v8 + 2 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v20 )
    return (unsigned int)-1073741762;
  v21 = v8 + 2;
  if ( (v20 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v21[((unsigned __int64)(unsigned int)v20 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v8 + 2, v20, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v22 )
    return (unsigned int)-1073741762;
  v23 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v24 = v23;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v23, 542329939LL);
  v26 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v24);
  v27 = *(unsigned int **)(a1 + 8);
  if ( v27 )
  {
    if ( *(_DWORD *)a1 <= 5u )
    {
      v7 = -1073741811;
      goto LABEL_147;
    }
    v28 = *(unsigned int **)(a1 + 8);
    v29 = 0;
    v30 = v26;
    do
    {
      v31 = *v28;
      v32 = v28 + 1;
      v26 = v30;
      if ( v28 + 1 < v28 )
        goto LABEL_145;
      v28 = (unsigned int *)((char *)v32 + v31);
      if ( (unsigned int *)((char *)v32 + v31) < v32 )
        goto LABEL_145;
      ++v29;
    }
    while ( v29 < 5 );
    v33 = *v28;
    v34 = v28 + 1;
    if ( v28 + 1 < v28 )
      goto LABEL_145;
    v35 = 0LL;
    if ( v33 )
      v35 = v34;
    if ( v33 != 4 )
    {
      v7 = -1073741789;
      goto LABEL_146;
    }
    v36 = *v35;
    if ( *(_DWORD *)a1 <= 6u )
      goto LABEL_45;
    v37 = 0;
    v38 = v30;
    do
    {
      v39 = *v27;
      v40 = v27 + 1;
      v26 = v38;
      if ( v27 + 1 < v27 )
        goto LABEL_145;
      v27 = (unsigned int *)((char *)v40 + v39);
      if ( (unsigned int *)((char *)v40 + v39) < v40 )
        goto LABEL_145;
      ++v37;
    }
    while ( v37 < 6 );
    v41 = *v27;
    if ( v27 + 1 < v27 )
      goto LABEL_145;
    v42 = 0LL;
    if ( v41 )
      v42 = v27 + 1;
    if ( v41 != 4 )
    {
      v7 = -1073741789;
      goto LABEL_146;
    }
    v43 = *v42;
    LODWORD(Size) = v43;
    RtlInitUnicodeString(&DestinationString, v26);
    if ( v43 )
    {
      HIDWORD(Size) = 1;
      if ( v43 <= 0x100000 )
        goto LABEL_68;
    }
    else
    {
      Size = 0LL;
    }
    LODWORD(Size) = v43;
    v44 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD, _QWORD, unsigned int *))qword_140D534A8)(
            &DestinationString,
            &v125,
            0LL,
            0LL,
            &v121);
    v123 = v44;
    v45 = v44;
    if ( v44 == -1073741789 )
    {
      if ( v43 < v121 )
      {
        if ( !v43 )
        {
          v45 = 0;
          LODWORD(Size) = 0;
          v123 = 0;
        }
        goto LABEL_77;
      }
      v46 = HIDWORD(Size);
    }
    else
    {
      if ( v44 < 0 )
      {
        v7 = v44;
        goto LABEL_146;
      }
      if ( v121 )
      {
        v7 = -2147418113;
        goto LABEL_146;
      }
      v46 = 0;
    }
    v43 = v121;
    v45 = 0;
    LODWORD(Size) = v121;
    v123 = 0;
    if ( !v46 )
      goto LABEL_77;
LABEL_68:
    P = (PVOID)ExAllocatePool2(256LL, v43, 542329939LL);
    if ( !P )
    {
      v7 = -1073741801;
      goto LABEL_146;
    }
    v47 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, PVOID, _QWORD, unsigned int *))qword_140D534A8)(
            &DestinationString,
            &v125,
            P,
            v43,
            &v121);
    v123 = v47;
    v45 = v47;
    if ( v47 != -1073741789 )
    {
      v7 = v47;
      if ( v47 < 0 )
        goto LABEL_146;
      v43 = Size;
    }
    if ( v43 >= v121 )
    {
      v43 = v121;
      LODWORD(Size) = v121;
    }
LABEL_77:
    v118 = v43 + 4;
    if ( v43 >= 0xFFFFFFFC )
      goto LABEL_145;
    if ( v43 + 4 >= 0xFFFFFFE4 )
      goto LABEL_145;
    if ( v43 + 40 < v43 + 32 )
      goto LABEL_145;
    if ( v43 + 48 < v43 + 40 )
      goto LABEL_145;
    if ( v43 + 48 >= 0xFFFFFFF8 )
      goto LABEL_145;
    v48 = (v43 + 63) & 0xFFFFFFF8;
    if ( v48 < v43 + 56 )
      goto LABEL_145;
    v49 = v48 + 8;
    if ( v48 + 8 < v48 )
      goto LABEL_145;
    v50 = *((_DWORD *)v126 + 8);
    v51 = *((_DWORD *)v126 + 4);
    v52 = v48 + 12;
    if ( v49 >= 0xFFFFFFFC )
      goto LABEL_145;
    v53 = v49 + 8;
    if ( v52 + 4 < v52 )
      goto LABEL_145;
    v54 = v51 + v53;
    if ( v51 + v53 < v53 )
      goto LABEL_145;
    v55 = v54 + 4;
    if ( v54 + 4 < v54 || v50 + v55 < v55 )
      goto LABEL_145;
    v56 = v43 + 48;
    v126 = v26;
    v57 = v15;
    if ( v119 < v50 + v55 || v45 < 0 )
      goto LABEL_135;
    v58 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v130 = 0LL;
    HIDWORD(Size) = 0;
    v60 = (unsigned __int128)(v58 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64;
    v61 = 1;
    v119 = 0;
    v122 = 0;
    v117 = 1;
    v62 = ((unsigned __int64)v60 >> 63) + (v60 >> 11);
    pcbLength = v62;
    RtlInitUnicodeString(&v130, L"Security-SPP-GenuineLocalStatus");
    v63 = ((__int64 (__fastcall *)(UNICODE_STRING *, char *, unsigned int *, __int64, int *))qword_140D534A8)(
            &v130,
            (char *)&Size + 4,
            &v119,
            4LL,
            &v122);
    if ( v63 == -1073741772 || v63 >= 0 && (HIDWORD(Size) != 4 || !v119) )
    {
      v61 = 0;
      v117 = 0;
    }
    if ( g_ulOldGenuineStateForWnf != v61 )
    {
      g_qwSystemInitTime = v62;
      g_ulOldGenuineStateForWnf = v61;
    }
    v64 = v62 - g_qwSystemInitTime;
    if ( (__int64)(v62 - g_qwSystemInitTime) < 0 )
    {
      v66 = v64 & 1 | ((v62 - g_qwSystemInitTime) >> 1);
      v65 = (double)(int)v66 + (double)(int)v66;
    }
    else
    {
      v65 = (double)v64;
    }
    v67 = 0;
    if ( !v61 && !g_bWNFEventFired )
    {
      LOBYTE(v67) = v65 >= 9000000.0;
      if ( v67 )
      {
        v116 = 0;
        v115 = 0;
        g_bWNFEventFired = 1;
        ZwUpdateWnfStateData((__int64)&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL);
      }
    }
    v57 = v15;
    v56 = v118 + 44;
    v26 = v126;
    if ( pcbLength - g_qwSystemInitTime < 0xA4CBFB )
      goto LABEL_135;
    v68 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout);
    v56 = v118 + 44;
    if ( v68 < 0 )
      goto LABEL_135;
    v56 = v118 + 44;
    if ( v68 == 192 )
      goto LABEL_135;
    v56 = v118 + 44;
    if ( v68 == 258 )
      goto LABEL_135;
    if ( g_ulOldGenuineState == v117 )
    {
      v73 = pcbLength - qword_140D53130;
      g_ulOldGenuineState = v117;
      if ( v117 )
        goto LABEL_112;
    }
    else
    {
      if ( v117 )
      {
        KeResetEvent(&stru_140C0ED20);
        g_ulOldGenuineState = v117;
LABEL_112:
        KeReleaseMutex(&Mutex, 0);
        v69 = v118;
        v26 = v126;
        v56 = v118 + 44;
        goto LABEL_136;
      }
      v70 = MEMORY[0xFFFFF78000000320];
      v71 = KeQueryTimeIncrement();
      g_ulOldGenuineState = 0;
      v72 = v70 * v71 / 10000;
      v73 = pcbLength - v72;
      qword_140D53130 = v72;
    }
    if ( v73 < 0xADF4FC || !dword_140D53188 )
      goto LABEL_112;
    KeSetEvent(&stru_140C0ED20, 1, 0);
    v119 = 4;
    v117 = 0;
    v122 = 0;
    pcbLength = 0LL;
    if ( ZwOpenKey((PHANDLE)&pcbLength, 1u, &stru_140D538E0) < 0 )
    {
      if ( (int)((__int64 (__fastcall *)(wchar_t *, unsigned int *, int *, __int64, int *, int, int))qword_140D534A8)(
                  aBd,
                  &v119,
                  &v117,
                  4LL,
                  &v122,
                  v115,
                  v116) < 0 )
      {
LABEL_123:
        HIDWORD(Size) = 1;
        v117 = 1;
LABEL_124:
        if ( pcbLength )
          ZwClose((HANDLE)pcbLength);
        v26 = v126;
        v119 = 0;
        v117 = 0;
        v131 = 0LL;
        v132 = 0;
        v56 = v118 + 44;
        if ( (int)((__int64 (__fastcall *)(wchar_t *, unsigned int *, __int64 *, __int64, int *))qword_140D534A8)(
                    aLn,
                    &v119,
                    &v131,
                    12LL,
                    &v117) >= 0
          && (v56 = v118 + 44, v119 == 3)
          && v117 == 12 )
        {
          v75 = (unsigned int *)&v131;
          v76 = 0;
          while ( 1 )
          {
            v77 = *v75;
            if ( (*v75 & 0xF) == HIDWORD(Size) )
              break;
            ++v76;
            ++v75;
            if ( v76 >= 3 )
              goto LABEL_132;
          }
        }
        else
        {
LABEL_132:
          v77 = dword_140D53054 & 0xFFFF0000 | 0x3211;
        }
        dword_140D53054 = v77;
        if ( v36 )
          v6 = v77;
        else
          KeReleaseMutex(&Mutex, 0);
LABEL_135:
        v69 = v118;
LABEL_136:
        *(_DWORD *)(a4 + 4) = v56;
        if ( !v56 )
        {
          v7 = -1073741762;
          goto LABEL_146;
        }
        v78 = ExAllocatePool2(256LL, v56, 542329939LL);
        if ( !v78 )
        {
          v7 = -1073741801;
          goto LABEL_146;
        }
        *(_QWORD *)(a4 + 8) = v78;
        v79 = v57;
        *(_DWORD *)a4 = 0;
        v80 = *(_QWORD *)(a4 + 8);
        v81 = v123 | 0x10000000;
        if ( v80 )
        {
          v83 = 0;
          for ( k = *(_DWORD **)(a4 + 8); v83 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v85) )
          {
            v85 = *k + 4;
            if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v85) < k )
              goto LABEL_145;
            ++v83;
          }
          v79 = v57;
          if ( k + 1 < k )
            goto LABEL_145;
          if ( (unsigned __int64)(k + 2) > v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v7 = -1073741789;
            goto LABEL_146;
          }
          *k = 4;
          k[1] = v81;
        }
        else
        {
          v82 = *(_DWORD *)(a4 + 4);
          if ( v82 + 8 < v82 )
            goto LABEL_144;
          *(_DWORD *)(a4 + 4) = v82 + 8;
        }
        ++*(_DWORD *)a4;
        v86 = *(_QWORD *)(a4 + 8);
        if ( v86 )
        {
          v88 = 0;
          for ( m = *(_QWORD *)(a4 + 8); v88 < *(_DWORD *)a4; m += v90 )
          {
            v90 = *(_DWORD *)m + 4;
            if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v90 < m )
              goto LABEL_145;
            ++v88;
          }
          if ( m + 4 < m )
            goto LABEL_145;
          if ( m + 12 > v86 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v7 = -1073741789;
            goto LABEL_146;
          }
          *(_DWORD *)m = 8;
          *(_QWORD *)(m + 4) = v79;
        }
        else
        {
          v87 = *(_DWORD *)(a4 + 4);
          if ( v87 + 12 < v87 )
            goto LABEL_144;
          *(_DWORD *)(a4 + 4) = v87 + 12;
        }
        ++*(_DWORD *)a4;
        v91 = *(_QWORD *)(a4 + 8);
        v92 = v125;
        if ( v91 )
        {
          v94 = 0;
          for ( n = *(_DWORD **)(a4 + 8); v94 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v96) )
          {
            v96 = *n + 4;
            if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v96) < n )
              goto LABEL_145;
            ++v94;
          }
          if ( n + 1 < n )
            goto LABEL_145;
          if ( (unsigned __int64)(n + 2) > v91 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v7 = -1073741789;
            goto LABEL_146;
          }
          *n = 4;
          n[1] = v92;
        }
        else
        {
          v93 = *(_DWORD *)(a4 + 4);
          if ( v93 + 8 < v93 )
            goto LABEL_144;
          *(_DWORD *)(a4 + 4) = v93 + 8;
        }
        ++*(_DWORD *)a4;
        v97 = Size;
        if ( P )
        {
          if ( !(_DWORD)Size )
          {
LABEL_45:
            v7 = -1073741811;
            goto LABEL_146;
          }
        }
        else if ( (_DWORD)Size )
        {
          v7 = -1073741811;
          goto LABEL_146;
        }
        v98 = *(_QWORD *)(a4 + 8);
        if ( v98 )
        {
          v100 = 0;
          for ( ii = *(_DWORD **)(a4 + 8); v100 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v102) )
          {
            v102 = *ii + 4;
            if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v102) < ii )
              goto LABEL_145;
            ++v100;
          }
          if ( ii + 1 < ii )
            goto LABEL_145;
          if ( (unsigned __int64)ii + (unsigned int)Size + 4 > v98 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v7 = -1073741789;
            goto LABEL_146;
          }
          *ii = Size;
          if ( P )
            memmove(ii + 1, P, v97);
        }
        else
        {
          v99 = *(_DWORD *)(a4 + 4);
          if ( v99 + v69 < v99 )
            goto LABEL_144;
          *(_DWORD *)(a4 + 4) = v99 + v69;
        }
        ++*(_DWORD *)a4;
        v103 = *(_QWORD *)(a4 + 8);
        v104 = v121;
        if ( !v103 )
        {
          v105 = *(_DWORD *)(a4 + 4);
          if ( v105 + 8 < v105 )
            goto LABEL_144;
          *(_DWORD *)(a4 + 4) = v105 + 8;
          goto LABEL_207;
        }
        v106 = 0;
        for ( jj = *(_DWORD **)(a4 + 8); v106 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v108) )
        {
          v108 = *jj + 4;
          if ( *jj >= 0xFFFFFFFC || (_DWORD *)((char *)jj + v108) < jj )
            goto LABEL_145;
          ++v106;
        }
        if ( jj + 1 >= jj )
        {
          if ( (unsigned __int64)(jj + 2) > v103 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v7 = -1073741789;
            goto LABEL_146;
          }
          *jj = 4;
          jj[1] = v104;
LABEL_207:
          ++*(_DWORD *)a4;
          v109 = *(_QWORD *)(a4 + 8);
          if ( !v109 )
          {
            v110 = *(_DWORD *)(a4 + 4);
            if ( v110 + 8 >= v110 )
            {
              *(_DWORD *)(a4 + 4) = v110 + 8;
              ++*(_DWORD *)a4;
              v7 = 0;
              goto LABEL_146;
            }
LABEL_144:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_145;
          }
          v111 = 0;
          v112 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v113 = *v112 + 4;
              if ( *v112 >= 0xFFFFFFFC || (_DWORD *)((char *)v112 + v113) < v112 )
                break;
              ++v111;
              v112 = (_DWORD *)((char *)v112 + v113);
              if ( v111 >= *(_DWORD *)a4 )
                goto LABEL_214;
            }
          }
          else
          {
LABEL_214:
            if ( v112 + 1 >= v112 )
            {
              if ( (unsigned __int64)(v112 + 2) <= v109 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v112 = 4;
                v112[1] = v6;
                ++*(_DWORD *)a4;
                v7 = 0;
              }
              else
              {
                v7 = -1073741789;
              }
LABEL_146:
              if ( !v26 )
                goto LABEL_148;
              goto LABEL_147;
            }
          }
        }
LABEL_145:
        v7 = -1073741675;
        goto LABEL_146;
      }
      v74 = v117;
    }
    else
    {
      v74 = 3;
      v117 = 3;
    }
    HIDWORD(Size) = v74;
    if ( v119 == 4 && (unsigned int)(v74 - 1) <= 2 )
      goto LABEL_124;
    goto LABEL_123;
  }
  v7 = -1073741811;
LABEL_147:
  ExFreePoolWithTag(v26, 0);
LABEL_148:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v7;
}
