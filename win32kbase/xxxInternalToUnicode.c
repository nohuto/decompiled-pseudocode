__int64 __fastcall xxxInternalToUnicode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int16 v9; // r13
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // r15
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r12
  int v21; // r13d
  int v22; // ebx
  __int64 result; // rax
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int ModifierBits; // r14d
  char v29; // di
  __int64 v30; // rcx
  __int64 v31; // r8
  char *v32; // rbx
  unsigned __int8 v33; // r9
  _BYTE *v34; // rcx
  unsigned __int8 **v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rbp
  struct tagKL *v39; // r14
  struct DEADKEY *v40; // rdx
  __int16 v41; // ax
  char v42; // bl
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int16 v67; // ax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned __int16 v75; // si
  unsigned int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int16 v81; // bx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int16 v86; // di
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r9
  PDEVICE_OBJECT v106; // rcx
  _UNKNOWN **v107; // r8
  int v108; // ebp
  int v109; // ebp
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int16 v118; // bx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rax
  PDEVICE_OBJECT v128; // rcx
  bool v129; // r15
  __int64 v130; // rax
  int v131; // r8d
  int v132; // edx
  __int16 v133; // bx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  bool v138; // bl
  bool v139; // bp
  __int64 v140; // rax
  int v141; // r8d
  int v142; // edx
  char v143; // al
  __int16 v144; // r10
  int v145; // edx
  unsigned __int16 v146; // dx
  int v147; // r9d
  char *v148; // rcx
  char v149; // al
  char v150; // dl
  int v151; // ebp
  int v152; // ebx
  unsigned __int16 *v153; // rsi
  unsigned __int16 v154; // dx
  int v155; // eax
  int v156; // [rsp+20h] [rbp-88h]
  char v157[4]; // [rsp+28h] [rbp-80h]
  int v158; // [rsp+38h] [rbp-70h]
  char v159; // [rsp+40h] [rbp-68h]
  char v160; // [rsp+40h] [rbp-68h]
  char v161; // [rsp+48h] [rbp-60h]
  struct tagKL *v162; // [rsp+68h] [rbp-40h]

  v9 = a2;
  v10 = a1;
  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, (__int64)a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v11 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  v15 = a7;
  v16 = v9 & 0x8000;
  *a7 = v16;
  if ( (_BYTE)v10 == 0xFF )
    return 0LL;
  v17 = a8;
  if ( a8 || (v19 = *(_QWORD *)(v11 + 440), (v162 = (struct tagKL *)v19) == 0LL) )
  {
    v18 = HKLtoPKL(v11, a8);
    v162 = (struct tagKL *)v18;
    v19 = v18;
    if ( !v18 )
      return 0LL;
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 32LL);
  }
  else
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 48) + 32LL);
  }
  v21 = v9 & 0x1FF;
  if ( v16 )
  {
    if ( v10 != 18 )
    {
      v52 = *(unsigned __int16 *)(SGDGetUserSessionState(18LL, v17, v13, v14) + 14164);
      if ( v10 == (_DWORD)v52 )
        *(_WORD *)(SGDGetUserSessionState(v52, v51, v53, v54) + 14164) = 0;
      goto LABEL_10;
    }
    if ( !*(_WORD *)(SGDGetUserSessionState(18LL, v17, v13, v14) + 14162) )
    {
      if ( *(_BYTE *)(SGDGetUserSessionState(v56, v55, v57, v58) + 14166) )
        *(_BYTE *)(SGDGetUserSessionState(v60, v59, v61, v62) + 14166) = 0;
      goto LABEL_10;
    }
    if ( *(_BYTE *)(SGDGetUserSessionState(v56, v55, v57, v58) + 14166) != 3 )
    {
      if ( *(_BYTE *)(SGDGetUserSessionState(v64, v63, v65, v66) + 14166)
        || (v63 = 8LL, (*(_DWORD *)(v11 + 488) & 8) == 0) )
      {
        if ( *(_BYTE *)(SGDGetUserSessionState(v64, v63, v65, v66) + 14166) )
          v75 = *(_WORD *)(v19 + 72);
        else
          v75 = NlsOemCodePage;
        v76 = v75;
        if ( (unsigned __int16)(v75 - 932) <= 0x12u
          && (v73 = 393233LL, LOWORD(v76) = v75 - 932, _bittest((const int *)&v73, v76)) )
        {
          v78 = *(unsigned __int16 *)(SGDGetUserSessionState(393233LL, v72, v74, 18LL) + 14162);
          if ( (v78 & 0xFF00) != 0 )
          {
            v81 = *(_WORD *)(SGDGetUserSessionState(v78, v77, v79, v80) + 14162);
            v86 = HIBYTE(v81) | (*(unsigned __int8 *)(SGDGetUserSessionState(v83, v82, v84, v85) + 14162) << 8);
            *(_WORD *)(SGDGetUserSessionState(v88, v87, v89, v90) + 14162) = v86;
          }
          else
          {
            v92 = *(unsigned __int16 *)(SGDGetUserSessionState(v78, v77, v79, v80) + 14162);
            if ( v75 != 932 || (v91 = 161LL, (unsigned __int16)(v92 - 161) > 0x3Eu) )
            {
              LOWORD(v92) = v92 - 128;
              if ( (unsigned __int16)v92 <= 0x7Fu )
                v75 = 1252;
            }
          }
        }
        else
        {
          *(_BYTE *)(SGDGetUserSessionState(v73, v72, v74, 18LL) + 14163) = 0;
        }
        v95 = SGDGetUserSessionState(v92, v91, v93, v94);
        v67 = ApiSetEditionClientCharToWchar(v75, *(unsigned __int16 *)(v95 + 14162));
        goto LABEL_89;
      }
      *a7 |= 0x4000000u;
    }
    v67 = *(_WORD *)(SGDGetUserSessionState(v64, v63, v65, v66) + 14162);
LABEL_89:
    *a4 = v67;
    *(_WORD *)(SGDGetUserSessionState(v69, v68, v70, v71) + 14164) = 0;
    *(_BYTE *)(SGDGetUserSessionState(v97, v96, v98, v99) + 14166) = 0;
    *(_WORD *)(SGDGetUserSessionState(v101, v100, v102, v103) + 14162) = 0;
    result = 1LL;
    gfInNumpadHexInput &= ~2u;
    return result;
  }
LABEL_10:
  v22 = *a7;
  if ( (*a7 & 0x8000) != 0 && (a6 & 2) == 0 )
    return 0LL;
  v24 = a3;
  ModifierBits = (unsigned __int16)GetModifierBits(*(unsigned __int8 ***)v20, a3);
  v29 = 1;
  if ( (v22 & 0x8000) == 0 )
  {
    v30 = (ModifierBits & 0xFFFFFFF7) - 4;
    if ( (unsigned int)v30 <= 1 )
    {
      v42 = 0;
      if ( (a6 & 1) != 0 )
      {
LABEL_49:
        *(_WORD *)(SGDGetUserSessionState(v30, v25, v26, v27) + 14164) = 0;
        *(_BYTE *)(SGDGetUserSessionState(v44, v43, v45, v46) + 14166) = 0;
        *(_WORD *)(SGDGetUserSessionState(v48, v47, v49, v50) + 14162) = 0;
        LOWORD(ModifierBits) = ModifierBits & 0xFFFB;
        gfInNumpadHexInput &= ~2u;
        goto LABEL_15;
      }
      if ( gfEnableHexNumpad )
      {
        if ( v21 == 83 )
        {
          if ( (gfInNumpadHexInput & 2) != 0 )
            goto LABEL_49;
          *(_BYTE *)(SGDGetUserSessionState(v30, v25, v26, v27) + 14166) = 2;
          gfInNumpadHexInput |= 2u;
          v106 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
            || (LOBYTE(v104) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v104) = 0;
          }
          v107 = &WPP_RECORDER_INITIALIZED;
          LOBYTE(v107) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v104 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v104,
              (_DWORD)v107,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              16,
              18,
              (__int64)&WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids);
          goto LABEL_138;
        }
        if ( v21 == 78 )
        {
          if ( (gfInNumpadHexInput & 2) != 0 )
            goto LABEL_49;
          *(_BYTE *)(SGDGetUserSessionState(v30, v25, v26, v27) + 14166) = 3;
          gfInNumpadHexInput |= 2u;
          v106 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
            || (LOBYTE(v104) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v104) = 0;
          }
          v107 = &WPP_RECORDER_INITIALIZED;
          LOBYTE(v107) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v104 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v104,
              (_DWORD)v107,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              16,
              19,
              (__int64)&WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids);
          goto LABEL_138;
        }
      }
      if ( (unsigned int)(v21 - 71) <= 0xB )
      {
        v30 = (unsigned int)(v21 - 71);
        v108 = aVkNumpad[v30];
        if ( v108 == 255 )
          goto LABEL_70;
        v109 = v108 - 96;
      }
      else
      {
        if ( (gfInNumpadHexInput & 2) == 0 )
          goto LABEL_49;
        if ( v10 < 0x41 )
        {
          if ( v10 - 48 > 9 )
            goto LABEL_49;
          v109 = v10 - 48;
        }
        else
        {
          if ( v10 > 0x46 )
            goto LABEL_49;
          v109 = v10 - 55;
        }
      }
      if ( v109 < 0 )
      {
LABEL_70:
        v24 = a3;
        goto LABEL_49;
      }
      v111 = *(unsigned __int16 *)(SGDGetUserSessionState(v30, v25, v26, v27) + 14164);
      if ( (_DWORD)v111 == v10 )
        return 0LL;
      v114 = SGDGetUserSessionState(v111, v110, v112, v113);
      if ( *(_BYTE *)(v114 + 14166) == 2 || *(_BYTE *)(v114 + 14166) == 3 )
      {
        v128 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v42 = 1;
        }
        v129 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v130 = SGDGetUserSessionState(WPP_GLOBAL_Control, v115, v116, v117);
          LOBYTE(v131) = v129;
          LOBYTE(v132) = v42;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v132,
            v131,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            16,
            20,
            (__int64)&WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids,
            *(_WORD *)(v130 + 14162));
        }
        v133 = v109 + 16 * *(_WORD *)(SGDGetUserSessionState(v128, v115, v116, v117) + 14162);
        *(_WORD *)(SGDGetUserSessionState(v135, v134, v136, v137) + 14162) = v133;
        v106 = WPP_GLOBAL_Control;
        v138 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v107 = &WPP_RECORDER_INITIALIZED;
        v139 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v138 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v140 = SGDGetUserSessionState(WPP_GLOBAL_Control, v104, &WPP_RECORDER_INITIALIZED, v105);
          LOBYTE(v141) = v139;
          LOBYTE(v142) = v138;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v142,
            v141,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            16,
            21,
            (__int64)&WPP_36bdc508a0903d07d43b2feb9e26951b_Traceguids,
            *(_WORD *)(v140 + 14162));
        }
        v15 = a7;
      }
      else
      {
        v118 = v109
             + 10
             * *(_WORD *)(SGDGetUserSessionState((unsigned int)*(unsigned __int8 *)(v114 + 14166) - 2, v115, v116, v117)
                        + 14162);
        *(_WORD *)(SGDGetUserSessionState(v120, v119, v121, v122) + 14162) = v118;
        v127 = SGDGetUserSessionState(v124, v123, v125, v126);
        v106 = 0LL;
        if ( !*(_WORD *)(v127 + 14162) && !v109 )
          *(_BYTE *)(SGDGetUserSessionState(0LL, v104, v107, v105) + 14166) = 1;
      }
      v24 = a3;
LABEL_138:
      *(_WORD *)(SGDGetUserSessionState(v106, v104, v107, v105) + 14164) = v10;
    }
  }
LABEL_15:
  if ( v10 == 8 && (*(_DWORD *)(v20 + 80) & 4) != 0 )
  {
    v143 = *(_BYTE *)(v24 + 40);
    if ( (v143 & 1) != 0 )
    {
      v41 = 8206;
      goto LABEL_43;
    }
    if ( (v143 & 4) != 0 )
    {
      v41 = 8207;
      goto LABEL_43;
    }
  }
  else if ( (_WORD)v10 == 231 && !(_BYTE)v21 )
  {
    *a4 = *((_WORD *)gptiCurrent + 441);
    return 1LL;
  }
  v31 = *(_QWORD *)(v20 + 8);
  if ( !v31 )
    return 0LL;
LABEL_20:
  v32 = *(char **)v31;
  if ( !*(_QWORD *)v31 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v32 )
    {
      v31 += 16LL;
      goto LABEL_20;
    }
    if ( *v32 == (_BYTE)v10 )
      break;
    v32 += *(unsigned __int8 *)(v31 + 9);
  }
  v33 = v32[1];
  v34 = (_BYTE *)(v24 + 5);
  if ( (v33 & 8) != 0 && (*v34 & 8) != 0 )
  {
    LOWORD(ModifierBits) = ModifierBits | 8;
  }
  else if ( (((ModifierBits & 0xFFFE) == 0) & v33) != 0 && (*v34 & 2) != 0
         || (v33 & 4) != 0 && (ModifierBits & 6) == 6 && (*v34 & 2) != 0 )
  {
    LOWORD(ModifierBits) = ModifierBits ^ 1;
  }
  if ( (v33 & 2) != 0 && (ModifierBits & 0xFFFE) == 0 && (*v34 & 2) != 0 )
    v32 += *(unsigned __int8 *)(v31 + 9);
  v35 = *(unsigned __int8 ***)v20;
  if ( (unsigned __int16)ModifierBits > *(_WORD *)(*(_QWORD *)v20 + 8LL) )
    return 0LL;
  _mm_lfence();
  v36 = *((unsigned __int8 *)v35 + (unsigned __int16)ModifierBits + 10);
  if ( (_DWORD)v36 == 15 )
    return 0LL;
  if ( (unsigned __int16)v36 >= *(unsigned __int8 *)(v31 + 8)
    || (v37 = *(unsigned __int16 *)&v32[2 * v36 + 2],
        v38 = *((unsigned __int8 *)v35 + (unsigned __int16)ModifierBits + 10),
        (_WORD)v37 == 0xF000) )
  {
    if ( (((_WORD)ModifierBits - 2) & 0xFFF6) != 0 )
      return 0LL;
    if ( v10 - 65 <= 0x19 )
    {
      *a4 = v10 & 0x1F;
      return 1LL;
    }
    if ( v10 - 65377 > 0x30 )
      return 0LL;
    v41 = InternalVkKeyScanEx(v10, (_QWORD *)v20) & 0x1F;
    goto LABEL_43;
  }
  if ( (_WORD)v37 == 0xF001 )
  {
    v39 = v162;
    v32 += *(unsigned __int8 *)(v31 + 9);
    v144 = *((_WORD *)v162 + 37);
    if ( v144 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(v37) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v37) = 0;
      }
      LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v147 = *(unsigned __int16 *)&v32[2 * v36 + 2];
        WPP_RECORDER_AND_TRACE_SF_hDhD(
          WPP_GLOBAL_Control->AttachedDevice,
          v37,
          v31,
          v147,
          v156,
          *(_DWORD *)v157,
          23,
          v158,
          v144,
          v144,
          v147,
          v147);
      }
      if ( !qword_1C02D7240 || (qword_1C02D7240(1024LL, v37, v31) & 0x8000) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v29 = 0;
      }
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v145 = 22;
        v160 = *(_WORD *)&v32[2 * v36 + 2];
        LOBYTE(v145) = v29;
        LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hD(
          WPP_GLOBAL_Control->AttachedDevice,
          v145,
          v31,
          v36,
          v156,
          *(_DWORD *)v157,
          22,
          v158,
          v160,
          v160);
      }
    }
    v146 = *(_WORD *)&v32[2 * v38 + 2];
    *a4 = v146;
    if ( (*v15 & 0x8000) == 0 && (a6 & 4) == 0 )
      *((_WORD *)v162 + 37) = v146;
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( (_WORD)v37 != 0xF002 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(v36) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v36) = 0;
      }
      if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v161 = v37;
        v159 = v37;
        LOBYTE(v37) = v36;
        LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hD(
          WPP_GLOBAL_Control->AttachedDevice,
          v37,
          v31,
          v36,
          v156,
          *(_DWORD *)v157,
          24,
          v158,
          v159,
          v161);
      }
      v39 = v162;
LABEL_41:
      v40 = *(struct DEADKEY **)(v20 + 16);
      if ( v40 && *((_WORD *)v39 + 37) )
      {
        result = ComposeDeadKeys(v39, v40, *(_WORD *)&v32[2 * v38 + 2], a4, a5, a6, *v15 & 0x8000);
        if ( (_DWORD)result )
          *v15 |= 0x8000000u;
        return result;
      }
      v41 = *(_WORD *)&v32[2 * v38 + 2];
LABEL_43:
      *a4 = v41;
      return 1LL;
    }
    if ( !*(_WORD *)(v20 + 82) || (v148 = *(char **)(v20 + 88)) == 0LL || (v149 = *v148) == 0 )
    {
LABEL_186:
      ApiSetEditionMessageBeep();
      return 0LL;
    }
    v150 = *v32;
    v151 = 0;
    v152 = 0;
    while ( v149 != v150 || *((_WORD *)v148 + 1) != (_WORD)v36 )
    {
      v148 += *(unsigned __int8 *)(v20 + 85);
      v149 = *v148;
      if ( !*v148 )
        goto LABEL_186;
    }
    if ( *(_BYTE *)(v20 + 84) )
    {
      v153 = (unsigned __int16 *)(v148 + 4);
      do
      {
        if ( v152 >= a5 )
          break;
        v154 = *v153;
        if ( *v153 == 0xF000 )
          break;
        if ( *((_WORD *)v162 + 37) )
        {
          v155 = ComposeDeadKeys(v162, *(struct DEADKEY **)(v20 + 16), v154, &a4[v152], a5 - v152, a6, *v15 & 0x8000);
          if ( v155 > 0 )
            v152 += v155;
        }
        else
        {
          a4[v152++] = v154;
        }
        ++v151;
        ++v153;
      }
      while ( v151 < *(unsigned __int8 *)(v20 + 84) );
      if ( v152 )
        *v15 |= 0x8000000u;
    }
    return (unsigned int)v152;
  }
}
