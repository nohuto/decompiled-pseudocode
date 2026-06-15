/*
 * XREFs of sub_18005CD7C @ 0x18005CD7C
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 * Callees:
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_18004C134 @ 0x18004C134 (sub_18004C134.c)
 *     sub_18004C1E0 @ 0x18004C1E0 (sub_18004C1E0.c)
 *     sub_18005B754 @ 0x18005B754 (sub_18005B754.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_180124630 @ 0x180124630 (sub_180124630.c)
 *     sub_1801246E0 @ 0x1801246E0 (sub_1801246E0.c)
 *     sub_1801247A8 @ 0x1801247A8 (sub_1801247A8.c)
 *     sub_18012489C @ 0x18012489C (sub_18012489C.c)
 *     sub_180124B10 @ 0x180124B10 (sub_180124B10.c)
 *     sub_180126640 @ 0x180126640 (sub_180126640.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18005CD7C(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned __int16 *a6,
        __int64 a7,
        int *a8)
{
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  int SpinCount; // r9d
  __int64 (__fastcall ***v15)(_QWORD, _WORD *); // rcx
  unsigned __int64 v16; // r8
  int LockSemaphore; // ebx
  int v18; // r12d
  _QWORD *v19; // r10
  signed __int64 v20; // rax
  bool v21; // zf
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // rcx
  void *v25; // r12
  char v26; // al
  __int16 v27; // r12
  unsigned __int64 v28; // r8
  unsigned int v29; // r9d
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int16 *v33; // rbx
  void *v34; // r12
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  int v44; // r8d
  __int64 v45; // r9
  bool v46; // bl
  char v47; // al
  unsigned __int64 v48; // r8
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  int v55; // r9d
  int v56; // eax
  unsigned __int16 *v57; // rbx
  unsigned __int64 v58; // r8
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  int v65; // ecx
  int v66; // r8d
  int v67; // eax
  LPVOID v68; // rbx
  __int64 v69; // rax
  int v70; // ecx
  int v71; // r8d
  __int64 v72; // rax
  unsigned __int64 v73; // r8
  int v74; // ecx
  int v75; // r8d
  int v76; // r9d
  int v77; // [rsp+90h] [rbp-80h] BYREF
  _WORD v78[2]; // [rsp+94h] [rbp-7Ch] BYREF
  int v79; // [rsp+98h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp-70h] BYREF
  int *v81; // [rsp+A8h] [rbp-68h] BYREF
  __int16 v82; // [rsp+B0h] [rbp-60h] BYREF
  __int16 v83; // [rsp+B2h] [rbp-5Eh] BYREF
  _WORD v84[2]; // [rsp+B4h] [rbp-5Ch] BYREF
  int DebugInfo; // [rsp+B8h] [rbp-58h] BYREF
  LPVOID v86; // [rsp+C0h] [rbp-50h] BYREF
  int v87; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int16 *v88; // [rsp+D0h] [rbp-40h]
  __int64 v89; // [rsp+D8h] [rbp-38h]
  __int64 v90; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v91; // [rsp+E8h] [rbp-28h]
  __int64 v92; // [rsp+F0h] [rbp-20h]
  _WORD v93[2]; // [rsp+F8h] [rbp-18h] BYREF
  int v94; // [rsp+FCh] [rbp-14h]
  __int16 v95; // [rsp+100h] [rbp-10h]
  __int16 v96; // [rsp+102h] [rbp-Eh]
  _BYTE v97[16]; // [rsp+104h] [rbp-Ch] BYREF
  int v98; // [rsp+114h] [rbp+4h]
  __int64 v99; // [rsp+130h] [rbp+20h]
  PROPVARIANT pvar[2]; // [rsp+138h] [rbp+28h] BYREF
  __int64 v101; // [rsp+148h] [rbp+38h]
  __int128 v102; // [rsp+150h] [rbp+40h] BYREF
  __int128 v103; // [rsp+160h] [rbp+50h] BYREF
  __int64 v104; // [rsp+170h] [rbp+60h]
  __int128 v105; // [rsp+178h] [rbp+68h] BYREF
  int v106; // [rsp+194h] [rbp+84h]
  __int128 v107; // [rsp+1B8h] [rbp+A8h] BYREF

  v8 = a4;
  v91 = a4;
  v9 = a2;
  v11 = (__int64)a6;
  v88 = a6;
  v89 = a7;
  v92 = a7;
  v81 = a8;
  v87 = 0;
  *a8 = 0;
  if ( !a4 )
    goto LABEL_45;
  v12 = *(_QWORD *)a3 - *(unsigned __int64 *)((char *)&lpCriticalSection[2].DebugInfo + 4);
  if ( *(PRTL_CRITICAL_SECTION_DEBUG *)a3 == *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[2].DebugInfo + 4) )
    v12 = *(_QWORD *)(a3 + 8) - *(_QWORD *)&lpCriticalSection[2].RecursionCount;
  if ( !v12 && *(_DWORD *)(a3 + 16) == HIDWORD(lpCriticalSection[2].OwningThread) )
  {
    v102 = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    *(_OWORD *)pvar = xmmword_18015B730;
    if ( !lpCriticalSection[1].DebugInfo
      || (*(int (__fastcall **)(HANDLE))(*(_QWORD *)lpCriticalSection[1].OwningThread + 24LL))(lpCriticalSection[1].OwningThread) < 0
      || (*(int (__fastcall **)(HANDLE, int *))(*(_QWORD *)lpCriticalSection[1].OwningThread + 32LL))(
           lpCriticalSection[1].OwningThread,
           &v87) < 0
      || (*(int (__fastcall **)(HANDLE, PROPVARIANT *))(*(_QWORD *)lpCriticalSection[1].OwningThread + 48LL))(
           lpCriticalSection[1].OwningThread,
           pvar) < 0 )
    {
      goto LABEL_45;
    }
    EnterCriticalSection(lpCriticalSection);
    SpinCount = lpCriticalSection[171].SpinCount;
    if ( SpinCount )
    {
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v13) )
      {
        LOWORD(v77) = lpCriticalSection[171].SpinCount;
        v81 = *(int **)(v9 + 24);
        sub_180124630(v70, (unsigned int)&unk_18016B562, v71, SpinCount, (__int64)&v81, (__int64)&v77);
        SpinCount = lpCriticalSection[171].SpinCount;
      }
      if ( SpinCount == 1 )
        LODWORD(lpCriticalSection[171].SpinCount) = 2;
LABEL_43:
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_45;
    }
    LODWORD(lpCriticalSection[171].SpinCount) = 1;
    v107 = *(_OWORD *)((char *)&lpCriticalSection[2].SpinCount + 4);
    LODWORD(pv) = lpCriticalSection[2].LockSemaphore;
    DebugInfo = (int)lpCriticalSection[2].DebugInfo;
    BYTE3(lpCriticalSection[1].SpinCount) = *a5 != 0;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    *(_QWORD *)&v105 = v93;
    v99 = 0LL;
    v15 = *(__int64 (__fastcall ****)(_QWORD, _WORD *))(a7 + 56);
    if ( v15 )
      v99 = (**v15)(v15, v93);
    LOBYTE(v13) = 1;
    sub_18005D590((_DWORD)lpCriticalSection, *(_QWORD *)(v9 + 24), v13, v8, (__int64)a6, (__int64)v93, (__int64)&v102);
    if ( HIDWORD(lpCriticalSection[171].SpinCount) == 1 )
    {
      v86 = 0LL;
      v32 = sub_180028AD0(v9, 0, 0, &v86, 0LL, 0LL, 0LL);
      v33 = a6;
      v34 = v86;
      if ( v32 >= 0 )
        v33 = (unsigned __int16 *)v86;
      if ( (unsigned __int8)sub_180126640(lpCriticalSection, v9, &lpCriticalSection[172], 0LL) )
      {
        if ( !(_WORD)v102 )
        {
          sub_18004C1E0((__int64)&v105, (__int64)v33);
          HIDWORD(lpCriticalSection[171].SpinCount) = 3;
          if ( (unsigned int)dword_18019C448 > 4
            && __vcrt_trace_logging_provider::_TlgKeywordOn(
                 (__vcrt_trace_logging_provider *)&dword_18019C448,
                 (const struct _TlgProvider_t *)0x10,
                 v36) )
          {
            v82 = WORD5(v105);
            v83 = WORD4(v105);
            v86 = (char *)&v105 + 12;
            v77 = DWORD1(v105);
            v79 = v106;
            v84[0] = v105;
            v90 = *(_QWORD *)(v9 + 24);
            sub_180124B10(
              v37,
              (unsigned int)&unk_18016B4E6,
              v38,
              v39,
              (__int64)&v90,
              (__int64)v84,
              (__int64)&v79,
              (__int64)&v77,
              (__int64)&v86,
              (__int64)&v83,
              (__int64)&v82);
          }
          sub_180048018(v9, 0, v33, 0LL);
        }
      }
      else
      {
        if ( (unsigned int)dword_18019C448 > 2
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x400000000000LL,
               v35) )
        {
          v86 = *(LPVOID *)(v9 + 24);
          sub_1800B7704(v40, (unsigned int)&unk_18016B698, v41, v42, (__int64)&v86);
        }
        HIDWORD(lpCriticalSection[171].SpinCount) = 2;
        v43 = sub_18005B754((__int64)v93, v89);
        LOBYTE(v44) = 1;
        sub_18005D590((_DWORD)lpCriticalSection, *(_QWORD *)(v9 + 24), v44, v91, (__int64)v88, v43, (__int64)&v102);
      }
      if ( v34 )
        CoTaskMemFree(v34);
      v11 = (__int64)v88;
    }
    if ( (_WORD)v102 )
    {
      EnterCriticalSection(lpCriticalSection);
      v46 = (lpCriticalSection[4].LockCount & 0x80) != 0;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      LOBYTE(v45) = v46;
      v47 = sub_180126640(lpCriticalSection, v9, &v102, v45);
      v19 = 0LL;
      if ( !v47 && v11 )
      {
        sub_18004C1E0((__int64)v93, v11);
        if ( (unsigned int)dword_18019C448 > 2
          && __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x10,
               v48) )
        {
          *(_QWORD *)&v107 = v97;
          LODWORD(v90) = v98;
          v84[0] = v96;
          v83 = v95;
          LODWORD(v86) = v94;
          v82 = v93[0];
          *(_QWORD *)&v105 = (char *)&v103 + 8;
          DebugInfo = DWORD1(v103);
          v78[0] = WORD1(v103);
          LOWORD(v79) = HIWORD(v102);
          LODWORD(pv) = DWORD1(v102);
          LOWORD(v77) = WORD1(v102);
          v81 = *(int **)(v9 + 24);
          sub_18012489C(
            v49,
            (unsigned int)&unk_18016B5B4,
            v50,
            v51,
            (__int64)&v81,
            (__int64)&v77,
            (__int64)&pv,
            (__int64)&v79,
            (__int64)v78,
            (__int64)&DebugInfo,
            (__int64)&v105,
            (__int64)&v82,
            (__int64)&v86,
            (__int64)&v83,
            (__int64)v84,
            (__int64)&v90,
            (__int64)&v107);
        }
        v52 = sub_18005B754((__int64)&v105, v89);
        sub_18005D590((_DWORD)lpCriticalSection, *(_QWORD *)(v9 + 24), 0, v91, v11, v52, (__int64)&v102);
        goto LABEL_38;
      }
    }
    else
    {
      EnterCriticalSection(lpCriticalSection);
      v105 = *(_OWORD *)((char *)&lpCriticalSection[2].SpinCount + 4);
      LockSemaphore = (int)lpCriticalSection[2].LockSemaphore;
      v18 = (int)lpCriticalSection[2].DebugInfo;
      LODWORD(v86) = lpCriticalSection[4].LockCount & 0x80;
      v19 = 0LL;
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        v19 = 0LL;
      }
      if ( LockSemaphore != (_DWORD)pv || v18 != DebugInfo )
        goto LABEL_25;
      if ( LockSemaphore )
      {
        v53 = v105 - v107;
        if ( (_QWORD)v105 == (_QWORD)v107 )
          v53 = *((_QWORD *)&v105 + 1) - *((_QWORD *)&v107 + 1);
        if ( v53 )
          goto LABEL_25;
      }
      v20 = (char *)pvar[0] - (char *)lpCriticalSection[171].OwningThread;
      if ( pvar[0] == lpCriticalSection[171].OwningThread )
        v20 = (char *)pvar[1] - (char *)lpCriticalSection[171].LockSemaphore;
      v21 = v20 == 0;
      v22 = 0;
      if ( !v21 )
LABEL_25:
        v22 = 1;
      *v81 = v22;
      if ( v22
        && (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v16) )
      {
        v81 = *(int **)(v9 + 24);
        sub_1800B7704(v54, (unsigned int)&unk_18016B407, v16, v55, (__int64)&v81);
        v19 = 0LL;
      }
      if ( (_DWORD)v86 == (_DWORD)v19 || BYTE4(lpCriticalSection[1].SpinCount) == (_BYTE)v19 )
      {
        pv = v19;
        v23 = sub_180028AD0(v9, 0, 0, &pv, v19, v19, v19);
        v24 = v88;
        v25 = pv;
        v19 = 0LL;
        if ( v23 >= 0 )
          v24 = pv;
        if ( !LockSemaphore && !v87 )
        {
          if ( v24 )
          {
            if ( *(_WORD *)v24 == 0xFFFE )
            {
              v26 = sub_18004C134(v24 + 3);
              v19 = 0LL;
              if ( v26 )
              {
                pv = 0LL;
                v56 = sub_180028AD0(v9, 0, 1, &pv, 0LL, 0LL, 0LL);
                v57 = (unsigned __int16 *)pv;
                v19 = 0LL;
                if ( v56 >= 0 )
                {
                  sub_18004C1E0((__int64)v93, (__int64)pv);
                  if ( (unsigned int)dword_18019C448 > 4
                    && __vcrt_trace_logging_provider::_TlgKeywordOn(
                         (__vcrt_trace_logging_provider *)&dword_18019C448,
                         (const struct _TlgProvider_t *)0x10,
                         v58) )
                  {
                    LOWORD(v77) = v96;
                    LOWORD(v79) = v95;
                    v81 = (int *)v97;
                    LODWORD(pv) = v94;
                    DebugInfo = v98;
                    v78[0] = v93[0];
                    *(_QWORD *)&v105 = *(_QWORD *)(v9 + 24);
                    sub_180124B10(
                      v59,
                      (unsigned int)&unk_18016B394,
                      v60,
                      v61,
                      (__int64)&v105,
                      (__int64)v78,
                      (__int64)&DebugInfo,
                      (__int64)&pv,
                      (__int64)&v81,
                      (__int64)&v79,
                      (__int64)&v77);
                  }
                  sub_180048018(v9, 0, v57, 0LL);
                  v19 = 0LL;
                }
                if ( v57 )
                {
                  CoTaskMemFree(v57);
                  v19 = 0LL;
                }
              }
            }
          }
        }
        if ( v25 )
        {
          CoTaskMemFree(v25);
LABEL_38:
          v19 = 0LL;
        }
      }
    }
    v27 = (__int16)v19;
    *(_QWORD *)&v105 = lpCriticalSection;
    while ( 1 )
    {
      pv = v19;
      if ( v27 == 3
        && (unsigned int)dword_18019C448 > 2
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v16) )
      {
        LOWORD(v77) = lpCriticalSection[171].SpinCount;
        v81 = *(int **)(v9 + 24);
        sub_180124630(v62, (unsigned int)&unk_18016B493, v63, v64, (__int64)&v81, (__int64)&v77);
      }
      EnterCriticalSection(lpCriticalSection);
      v29 = lpCriticalSection[171].SpinCount;
      if ( v29 <= 1 )
      {
        LODWORD(lpCriticalSection[171].SpinCount) = 0;
        goto LABEL_43;
      }
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v28) )
      {
        LOWORD(v77) = lpCriticalSection[171].SpinCount;
        LOWORD(v79) = v27;
        v81 = *(int **)(v9 + 24);
        sub_1801246E0(v65, (unsigned int)&unk_18016B433, v66, v29, (__int64)&v81, (__int64)&v79, (__int64)&v77);
        v29 = lpCriticalSection[171].SpinCount;
      }
      if ( v29 != 3 )
        break;
      LODWORD(lpCriticalSection[171].SpinCount) = 1;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v67 = sub_180028AD0(v9, 0, 0, &pv, 0LL, 0LL, 0LL);
      v68 = v88;
      if ( v67 >= 0 )
        v68 = pv;
      v69 = sub_18005B754((__int64)v93, v89);
      sub_18005D590((_DWORD)lpCriticalSection, *(_QWORD *)(v9 + 24), 0, v91, (__int64)v68, v69, (__int64)&v102);
      v19 = 0LL;
      if ( pv )
      {
        CoTaskMemFree(pv);
        v19 = 0LL;
      }
      if ( (unsigned __int16)++v27 >= 5u )
        goto LABEL_45;
    }
    LODWORD(lpCriticalSection[171].SpinCount) = 0;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)lpCriticalSection[1].DebugInfo + 32LL))(lpCriticalSection[1].DebugInfo);
    goto LABEL_43;
  }
  *(_OWORD *)pvar = 0LL;
  v101 = 0LL;
  v72 = *(_QWORD *)a3 - 0x4E27082CF19F064DLL;
  if ( *(_QWORD *)a3 == 0x4E27082CF19F064DLL )
    v72 = *(_QWORD *)(a3 + 8) - 0x4C8EBBA1826873BCLL;
  if ( !v72
    && !*(_DWORD *)(a3 + 16)
    && (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a4 + 40LL))(a4, &xmmword_18015B780, pvar) >= 0
    && sub_180047420((__int64)pvar)
    && (int)sub_18001FEF0(v101) >= 0 )
  {
    sub_18004C1E0((__int64)v93, v101);
    if ( (unsigned int)dword_18019C448 > 4 )
    {
      if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             v73) )
      {
        v81 = (int *)v97;
        LODWORD(pv) = v98;
        LOWORD(v77) = v96;
        LOWORD(v79) = v95;
        DebugInfo = v94;
        v78[0] = v93[0];
        *(_QWORD *)&v105 = *(_QWORD *)(v9 + 24);
        sub_1801247A8(
          v74,
          (unsigned int)&unk_18016B1D9,
          v75,
          v76,
          (__int64)&v105,
          (__int64)v78,
          (__int64)&DebugInfo,
          (__int64)&v79,
          (__int64)&v77,
          (__int64)&pv,
          (__int64)&v81);
      }
    }
  }
  PropVariantClear(pvar);
LABEL_45:
  v30 = v89;
  v31 = *(_QWORD *)(v89 + 56);
  if ( v31 )
  {
    LOBYTE(a2) = v31 != v89;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, a2);
    *(_QWORD *)(v30 + 56) = 0LL;
  }
}
