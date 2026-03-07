// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInterSendMsgEx(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        int a5,
        struct tagTHREADINFO *a6,
        __int64 a7,
        int a8,
        int a9)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // r14
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // r15
  int v20; // edi
  void *const *WindowMessageFilter; // rax
  unsigned __int8 v22; // al
  unsigned __int16 *v23; // r12
  struct tagTHREADINFO *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  void **v27; // rcx
  unsigned int v28; // r15d
  _OWORD *v29; // rdi
  _OWORD *v30; // rax
  _OWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // edx
  size_t v36; // r8
  const void *v37; // rdx
  size_t v38; // r8
  unsigned int *v39; // rdi
  __int64 v40; // rdi
  char *v41; // rdi
  size_t v42; // r8
  struct tagWND *v43; // rdi
  int v44; // eax
  int v45; // eax
  int *v46; // rdi
  struct tagTHREADINFO *v47; // r15
  unsigned __int64 v48; // rcx
  __int64 v49; // r12
  struct tagTHREADINFO **v50; // rcx
  unsigned int *v51; // rdx
  unsigned int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  struct tagTHREADINFO *v57; // r9
  int v58; // eax
  int v59; // r15d
  unsigned int v60; // r12d
  struct tagTHREADINFO *v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rsi
  bool v64; // al
  __int64 v65; // rdi
  int *v66; // rsi
  int v67; // ecx
  int v68; // eax
  int v69; // ecx
  int v70; // ecx
  _QWORD *v71; // r12
  void *v72; // rdx
  unsigned int *v73; // r15
  int v74; // edx
  __int64 *v75; // r13
  __int64 v76; // rcx
  int v77; // eax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // rdx
  _OWORD *v83; // rax
  __int128 v84; // xmm0
  __int64 v85; // rcx
  __int64 v86; // rdx
  int v87; // edx
  int v88; // eax
  unsigned int *v89; // rdx
  __int64 v90; // rcx
  unsigned int **v91; // rax
  __int64 v92; // rdi
  __int64 CurrentProcess; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // r15
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // rax
  void **v102; // [rsp+38h] [rbp-170h]
  unsigned int Size; // [rsp+40h] [rbp-168h]
  unsigned int v104; // [rsp+48h] [rbp-160h]
  int v105; // [rsp+50h] [rbp-158h]
  int v106; // [rsp+58h] [rbp-150h]
  unsigned __int16 *v107; // [rsp+60h] [rbp-148h]
  void *v108[2]; // [rsp+68h] [rbp-140h] BYREF
  __int64 v109; // [rsp+78h] [rbp-130h] BYREF
  unsigned int *v110; // [rsp+80h] [rbp-128h]
  void *v111; // [rsp+88h] [rbp-120h]
  _QWORD *v112; // [rsp+90h] [rbp-118h]
  int *v113; // [rsp+98h] [rbp-110h]
  __int64 *v114; // [rsp+A0h] [rbp-108h]
  _OWORD *v115; // [rsp+A8h] [rbp-100h]
  __int64 v116; // [rsp+B0h] [rbp-F8h]
  _QWORD *v117; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v118; // [rsp+C0h] [rbp-E8h]
  unsigned __int64 HighLimit[2]; // [rsp+C8h] [rbp-E0h] BYREF
  unsigned __int64 LowLimit[2]; // [rsp+D8h] [rbp-D0h] BYREF
  _DWORD *v121; // [rsp+E8h] [rbp-C0h]
  unsigned int ***v122; // [rsp+F0h] [rbp-B8h]
  unsigned int *v123; // [rsp+F8h] [rbp-B0h]
  _WORD *v124; // [rsp+100h] [rbp-A8h]
  _QWORD **v125; // [rsp+108h] [rbp-A0h]
  __int64 v126; // [rsp+110h] [rbp-98h]
  char *v127; // [rsp+118h] [rbp-90h]
  _QWORD v128[4]; // [rsp+120h] [rbp-88h] BYREF
  _BYTE v129[16]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v130; // [rsp+150h] [rbp-58h] BYREF
  __int64 v131; // [rsp+160h] [rbp-48h]
  unsigned __int64 v133; // [rsp+1C0h] [rbp+18h] BYREF
  void *Src; // [rsp+1C8h] [rbp+20h] BYREF

  Src = a4;
  v133 = a3;
  v118 = 0LL;
  v115 = 0LL;
  v107 = 0LL;
  *(_OWORD *)v108 = 0LL;
  v111 = 0LL;
  v106 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v12 = 0LL;
  v13 = gptiCurrent;
  if ( !a5 )
    v13 = 0LL;
  LowLimit[1] = v13;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v13 && (*(_DWORD *)(v13 + 488) & 1) != 0 )
    return 0LL;
  HighLimit[0] = 0LL;
  LowLimit[0] = 0LL;
  IoGetStackLimits(LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit[0] < 0x2000 )
    return 0LL;
  if ( a1 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( (_QWORD *)v17 == v12 || a2 < 0x4E && a2 >= 0xE || a2 > 0x288 || a2 >= 0x1A9 && a2 < 0x233 )
      goto LABEL_17;
    if ( a2 > 0xD0 )
    {
      if ( a2 == 272 )
      {
LABEL_303:
        v18 = 1;
        goto LABEL_18;
      }
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
      {
LABEL_17:
        v18 = 0;
        goto LABEL_18;
      }
    }
    else if ( a2 != 208 )
    {
      switch ( a2 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_299;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v14 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL);
          if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v14 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) == 0 )
            goto LABEL_17;
          UserSetLastError(5);
          v18 = 1;
          break;
        case 0x4Eu:
          goto LABEL_303;
        default:
          goto LABEL_17;
      }
LABEL_18:
      if ( v18 )
      {
        UserSetLastError(5);
        return 0LL;
      }
      goto LABEL_19;
    }
LABEL_299:
    if ( (!(unsigned __int8)Enforced(v15) || *(_QWORD *)v17 == gpepCSRSS)
      && (*(_DWORD *)(v17 + 772) != *((_DWORD *)v12 + 193) || *(_DWORD *)(v17 + 776) != *((_DWORD *)v12 + 194)) )
    {
      goto LABEL_303;
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( a8 )
    goto LABEL_36;
  v19 = 0LL;
  if ( a1 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  }
  else if ( a6 )
  {
    v19 = *((_QWORD *)a6 + 53);
  }
  if ( (_QWORD *)v19 == v12 )
  {
LABEL_36:
    v23 = (unsigned __int16 *)Src;
    goto LABEL_37;
  }
  if ( a2 == 717 )
    return 0LL;
  v20 = IsMessageAllowedByFilterEx(*(void *const **)(v19 + 840), a2, 0LL, 0LL);
  if ( !v20 && a1 )
  {
    WindowMessageFilter = GetWindowMessageFilter(a1);
    v20 = IsMessageAllowedByFilterEx(WindowMessageFilter, a2, 0LL, 0LL);
  }
  if ( v20 )
    goto LABEL_33;
  v20 = IsMessageAlwaysAllowedAcrossIL(a2);
  if ( v20 )
    goto LABEL_33;
  if ( a2 == 274 && ((v133 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v133 != 61792 )
    goto LABEL_288;
  if ( *(_QWORD *)v19 == gpepCSRSS )
    v109 = 0x2000LL;
  else
    v109 = *(_QWORD *)(v19 + 864);
  v22 = CheckAccess(v12 + 108, &v109);
  v20 = v22;
  if ( v22 )
    goto LABEL_33;
  if ( a1 )
  {
    if ( a2 == 793 )
    {
      v14 = *((_QWORD *)a1 + 2);
      if ( *(struct tagWND **)(v14 + 1432) == a1 && *(_QWORD *)(v14 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
      {
LABEL_288:
        v20 = 1;
LABEL_33:
        v23 = (unsigned __int16 *)Src;
        goto LABEL_34;
      }
    }
  }
  v23 = (unsigned __int16 *)Src;
  EtwTraceUIPIMsgError(v12, v19, a2, v133, Src);
  UserSetLastError(5);
LABEL_34:
  if ( !v20 )
    return 0LL;
LABEL_37:
  if ( a2 == 576 )
  {
    LOBYTE(v14) = 20;
    if ( !HMValidateHandle(v23, v14) )
      return 0LL;
  }
  else if ( a2 == 281 )
  {
    LOBYTE(v14) = 21;
    if ( !HMValidateHandle(v23, v14) )
      return 0LL;
  }
  v24 = a6;
  if ( (*((_DWORD *)a6 + 318) & 0x20) == 0 )
    goto LABEL_40;
  v82 = a7;
  if ( a7 )
  {
    if ( (*(_DWORD *)(a7 + 32) & 0x40) != 0 )
      goto LABEL_316;
    if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 36) )
      return 0LL;
  }
  if ( v13 )
  {
    v92 = **((_QWORD **)a6 + 53);
    CurrentProcess = PsGetCurrentProcess(a6, a7, v16);
    if ( !PsGetProcessCommonJob(CurrentProcess, v92) )
      return 0LL;
    v24 = a6;
    v82 = a7;
LABEL_316:
    if ( v13 )
      goto LABEL_40;
  }
  if ( !v82 )
  {
    if ( !(unsigned int)ProcessSuspendedSendMessage((__int64)v24, (__int64)a1, a2, v133, (__int64)v23) )
      return 0LL;
    v24 = a6;
  }
  if ( *((_DWORD *)v24 + 134) > 0x2710u )
    return 0LL;
LABEL_40:
  v25 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v26 = v25;
  HighLimit[1] = v25;
  if ( !v25 )
    return 0LL;
  v27 = (void **)(v25 + 120);
  v102 = (void **)(v25 + 120);
  *(_QWORD *)(v25 + 120) = 0LL;
  Size = 0;
  v28 = 0;
  v29 = v23;
  v127 = (char *)v23;
  *(_DWORD *)(v25 + 128) = *(_DWORD *)(gptiCurrent + 1452LL);
  if ( a7 && *(_DWORD *)a7 == 33 )
  {
LABEL_209:
    v43 = a1;
    goto LABEL_147;
  }
  if ( a2 > 0x344 || a2 >= 0x54 && a2 < 0x81 )
    goto LABEL_53;
  if ( a2 == 537 )
  {
    if ( v23 && (v133 & 0x8000) != 0 && (v23 < MmSystemRangeStart || !v13) )
      v28 = *(_DWORD *)v23;
  }
  else
  {
    if ( a2 <= 0x143 )
    {
      if ( a2 == 323 )
      {
LABEL_116:
        if ( *(_DWORD *)(gptiCurrent + 1452LL) != 1 )
        {
LABEL_51:
          *(_OWORD *)v108 = *(_OWORD *)v23;
          if ( _mm_srli_si128(*(__m128i *)v108, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v13 )
          {
            v28 = LODWORD(v108[0]) + 18;
            if ( (unsigned int)(LODWORD(v108[0]) + 18) < LODWORD(v108[0]) )
            {
LABEL_101:
              Win32FreeToPagedLookasideList(SMSLookaside, v25);
              return 8LL;
            }
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 1u:
          case 0x81u:
            UserSetLastError(5);
            Win32FreeToPagedLookasideList(SMSLookaside, v26);
            return 0LL;
          case 0xCu:
          case 0x1Au:
          case 0xC2u:
            if ( v23 )
              goto LABEL_51;
            goto LABEL_53;
          case 0xDu:
          case 0xC4u:
            goto LABEL_121;
          case 0x1Bu:
            goto LABEL_51;
          case 0x38u:
            v28 = *v23;
            goto LABEL_53;
          case 0x46u:
          case 0x47u:
            v28 = 40;
            Size = 40;
            goto LABEL_53;
          case 0x49u:
            v28 = v133;
            goto LABEL_53;
          case 0x4Au:
            v115 = v23;
            if ( !*((_QWORD *)v23 + 2) )
            {
              v28 = 24;
              goto LABEL_65;
            }
            v28 = *((_DWORD *)v23 + 2) + 24;
            if ( v28 < 0x18 )
            {
              Win32FreeToPagedLookasideList(SMSLookaside, v25);
              return 0LL;
            }
            break;
          case 0x53u:
            v28 = *(_DWORD *)v23;
            goto LABEL_53;
          case 0x83u:
            if ( v133 )
              v28 = 96;
            else
              v28 = 16;
            Size = v28;
            goto LABEL_53;
          case 0xCBu:
            goto LABEL_103;
          default:
            goto LABEL_53;
        }
      }
      goto LABEL_53;
    }
    if ( a2 > 0x283 )
    {
      switch ( a2 )
      {
        case 0x30Cu:
LABEL_121:
          *(_OWORD *)v108 = *(_OWORD *)v23;
          v106 = (SHIDWORD(v108[0]) >= 0) + 1;
          v23 = (unsigned __int16 *)v108;
          Src = v108;
          if ( _mm_srli_si128(*(__m128i *)v108, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v13 )
            v28 = HIDWORD(v108[0]) & 0x7FFFFFFF;
LABEL_53:
          v27 = (void **)(v25 + 120);
          break;
        case 0x341u:
          v28 = 104;
          Size = 104;
          break;
        case 0x342u:
          v28 = 80;
          goto LABEL_65;
        case 0x344u:
          v28 = 1204;
          Size = 1204;
          break;
      }
    }
    else
    {
      if ( a2 != 643 )
      {
        switch ( a2 )
        {
          case 0x145u:
          case 0x18Du:
          case 0x196u:
            goto LABEL_51;
          case 0x148u:
          case 0x189u:
            goto LABEL_121;
          case 0x14Au:
          case 0x14Cu:
          case 0x14Du:
          case 0x158u:
            goto LABEL_116;
          case 0x180u:
          case 0x181u:
          case 0x18Cu:
          case 0x18Fu:
          case 0x1A2u:
            if ( *(_DWORD *)(gptiCurrent + 1452LL) != 1 )
              goto LABEL_51;
            goto LABEL_53;
          case 0x191u:
          case 0x192u:
LABEL_103:
            v28 = 4 * v133;
            goto LABEL_53;
          case 0x218u:
            if ( !v23 || (v133 & 0x8000) == 0 || v23 >= MmSystemRangeStart && v13 )
              goto LABEL_53;
            v28 = *((_DWORD *)v23 + 4) + 20;
            if ( *((_DWORD *)v23 + 4) < 0xFFFFFFEC )
              goto LABEL_53;
            goto LABEL_101;
          case 0x220u:
            v107 = v23;
            v28 = (*((_DWORD *)v23 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v23 + 19) & 0x7FFFFFFF);
            goto LABEL_53;
          default:
            goto LABEL_53;
        }
      }
      if ( v133 == 24 )
        v28 = (*(_DWORD *)v23 << 9) + 4;
    }
  }
  if ( !v28 )
    goto LABEL_136;
LABEL_65:
  v30 = (_OWORD *)Win32AllocPoolWithQuotaZInit(v28, 1668510549LL);
  v27 = v102;
  *v102 = v30;
  if ( v30 )
  {
    v111 = v23;
    if ( a2 == 70 || a2 == 71 )
      goto LABEL_71;
    if ( a2 == 74 )
    {
      v23 = (unsigned __int16 *)v30;
      Src = v30;
      v32 = v115;
      *v30 = *v115;
      *((_QWORD *)v30 + 2) = *((_QWORD *)v32 + 2);
      if ( *((_QWORD *)v32 + 2) )
      {
        *((_QWORD *)v30 + 2) = (char *)v30 + 24;
        memmove((char *)v30 + 24, *((const void **)v32 + 2), *((unsigned int *)v32 + 2));
        v27 = v102;
      }
    }
    else
    {
      if ( a2 < 0x220 && a2 >= 0x1A3 )
        goto LABEL_71;
      if ( a2 <= 0x83 )
      {
        switch ( a2 )
        {
          case 0x83u:
            if ( v133 )
            {
              *v30 = *v29;
              v30[1] = v29[1];
              v30[2] = v29[2];
              *((_QWORD *)v30 + 6) = *((_QWORD *)v29 + 6);
              v33 = (__int64)*v102 + 56;
              *((_QWORD *)v30 + 6) = v33;
              v34 = *((_QWORD *)v29 + 6);
              *(_OWORD *)v33 = *(_OWORD *)v34;
              *(_OWORD *)(v33 + 16) = *(_OWORD *)(v34 + 16);
              *(_QWORD *)(v33 + 32) = *(_QWORD *)(v34 + 32);
              v27 = v102;
              v23 = (unsigned __int16 *)*v102;
              Src = *v102;
              goto LABEL_136;
            }
            goto LABEL_71;
          case 0xCu:
            goto LABEL_107;
          case 0xDu:
LABEL_130:
            Size = v28;
            v111 = v108[1];
            v108[1] = *v27;
            goto LABEL_136;
        }
        if ( a2 - 26 <= 1 )
        {
LABEL_107:
          v23 = (unsigned __int16 *)v30;
          Src = v30;
          v35 = HIDWORD(v108[0]) ^ (*((_DWORD *)v30 + 1) ^ HIDWORD(v108[0])) & 0x7FFFFFFF;
          *((_DWORD *)v30 + 1) = v35;
          *(_DWORD *)v30 = v108[0];
          *((_QWORD *)v30 + 1) = v30 + 1;
          v36 = v35 ^ (v35 ^ (v28 - 16)) & 0x7FFFFFFF;
          *((_DWORD *)v30 + 1) = v36;
          LODWORD(v36) = v36 & 0x7FFFFFFF;
          memmove(v30 + 1, v108[1], v36);
          v27 = v102;
          goto LABEL_136;
        }
LABEL_71:
        memmove(v30, v29, v28);
        v27 = v102;
        v23 = (unsigned __int16 *)*v102;
        Src = *v102;
        goto LABEL_136;
      }
      if ( a2 > 0x220 )
      {
        if ( a2 == 780 )
          goto LABEL_130;
        goto LABEL_71;
      }
      if ( a2 != 544 )
      {
        switch ( a2 )
        {
          case 0xC2u:
          case 0x143u:
          case 0x145u:
          case 0x14Au:
          case 0x14Cu:
          case 0x14Du:
          case 0x158u:
          case 0x180u:
          case 0x181u:
          case 0x18Cu:
          case 0x18Du:
          case 0x18Fu:
          case 0x196u:
          case 0x1A2u:
            goto LABEL_107;
          case 0xC4u:
            *(_WORD *)v30 = *(_WORD *)v108[1];
            break;
          case 0x148u:
          case 0x189u:
            break;
          case 0x191u:
            Size = v28;
            goto LABEL_71;
          default:
            goto LABEL_71;
        }
        v27 = v102;
        goto LABEL_130;
      }
      v37 = (const void *)*((_QWORD *)v107 + 10);
      if ( v37 )
      {
        v110 = (unsigned int *)(v107 + 38);
        v38 = *((unsigned int *)v107 + 19);
        LODWORD(v38) = v38 & 0x7FFFFFFF;
        memmove(v30, v37, v38);
        v27 = v102;
        *(_QWORD *)v107 = *v102;
        v39 = v110;
      }
      else
      {
        v39 = (unsigned int *)(v107 + 38);
      }
      if ( *((_DWORD *)v107 + 14) )
      {
        v40 = *v39;
        LODWORD(v40) = v40 & 0x7FFFFFFF;
        v41 = (char *)*v27 + v40;
        v127 = v41;
        v42 = *((unsigned int *)v107 + 15);
        LODWORD(v42) = v42 & 0x7FFFFFFF;
        memmove(v41, *((const void **)v107 + 8), v42);
        *((_QWORD *)v107 + 1) = v41;
        v27 = v102;
      }
    }
  }
LABEL_136:
  if ( v28 && !*v27 )
  {
    Win32FreeToPagedLookasideList(SMSLookaside, v26);
    return 0LL;
  }
  if ( !a9 )
    goto LABEL_209;
  v43 = a1;
  if ( a1 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 - 577 <= 3 )
      goto LABEL_320;
    if ( a2 < 0x245 || a2 > 0x257 || (v44 = 1, a2 == 589) )
      v44 = 0;
    if ( v44 )
LABEL_320:
      v45 = 1;
    else
      v45 = 0;
    if ( !v45 )
    {
      TransformMessageBetweenCoordinateSpaces(a2, 1uLL, (__int64 *)&v133, (__int16 *)&Src, (__int64)a1, 0LL);
      v23 = (unsigned __int16 *)Src;
    }
  }
LABEL_147:
  v126 = v26 + 112;
  *(_QWORD *)(v26 + 112) = 0LL;
  v110 = (unsigned int *)(v26 + 16);
  *(_QWORD *)(v26 + 16) = 0LL;
  v128[0] = v26 + 112;
  v128[1] = v43;
  HMAssignmentLock(v128, 0LL);
  v123 = (unsigned int *)(v26 + 104);
  *(_DWORD *)(v26 + 104) = a2;
  v124 = (_WORD *)(v26 + 88);
  *(_QWORD *)(v26 + 88) = v133;
  v114 = (__int64 *)(v26 + 96);
  *(_QWORD *)(v26 + 96) = v23;
  v46 = (int *)(v26 + 84);
  v113 = (int *)(v26 + 84);
  *(_DWORD *)(v26 + 84) = 0;
  v112 = (_QWORD *)(v26 + 72);
  *(_QWORD *)(v26 + 72) = 0LL;
  if ( a2 == 576 || a2 == 281 )
  {
    v94 = _HMObjectFromHandle(v23);
    v47 = a6;
    if ( v94 )
      HMChangeOwnerThread(v94, a6);
  }
  else
  {
    v47 = a6;
  }
  if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
    goto LABEL_363;
  *(_QWORD *)v26 = gsmsList;
  v125 = (_QWORD **)(v26 + 8);
  *(_QWORD *)(v26 + 8) = gsmsList;
  *(_QWORD *)(gsmsList + 8LL) = v26;
  gsmsList = v26;
  v48 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v26 + 80) = v48;
  *(_QWORD *)(v26 + 40) = v47;
  *(_QWORD *)(v26 + 32) = v13;
  *(_DWORD *)(v26 + 132) = W32GetCurrentThreadDpiAwarenessContext(v48);
  *(_QWORD *)(v26 + 64) = 0LL;
  v49 = a7;
  if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
  {
    if ( (*(_DWORD *)a7 & 0x100) != 0 )
      v69 = 1024;
    else
      v69 = 2048;
    v70 = *v46 | v69;
    *v46 = v70;
    *(_QWORD *)(v26 + 48) = *(_QWORD *)(v49 + 8);
    *(_QWORD *)(v26 + 56) = *(_QWORD *)(v49 + 16);
    if ( (*(_DWORD *)v49 & 0x20) != 0 )
    {
      *v46 = v70 | 0x200;
      *v112 = *(_QWORD *)(v49 + 24);
    }
    else
    {
      *v46 = v70 | 0x100;
      *(_QWORD *)(v26 + 64) = gptiCurrent;
    }
  }
  if ( a9 )
    *v46 |= 0x10000u;
  v50 = (struct tagTHREADINFO **)*((_QWORD *)v47 + 66);
  if ( *v50 != (struct tagTHREADINFO *)((char *)v47 + 520) )
    goto LABEL_363;
  v51 = v110;
  *(_QWORD *)v110 = (char *)v47 + 520;
  v122 = (unsigned int ***)(v51 + 2);
  *((_QWORD *)v51 + 1) = v50;
  *v50 = (struct tagTHREADINFO *)v51;
  *((_QWORD *)v47 + 66) = v51;
  v121 = (_DWORD *)((char *)v47 + 536);
  v52 = *((_DWORD *)v47 + 134) + 1;
  *((_DWORD *)v47 + 134) = v52;
  if ( v52 > WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v52;
  if ( v13 )
  {
    v118 = *(_QWORD *)(v13 + 504);
    *(_QWORD *)(v13 + 504) = v26;
  }
  else
  {
    *v46 |= 8u;
  }
  if ( (*v46 & 0x200) == 0 )
  {
    if ( a2 - 577 <= 3 )
      goto LABEL_326;
    if ( a2 < 0x245 || a2 > 0x257 || (v53 = 1, a2 == 589) )
      v53 = 0;
    if ( v53 )
LABEL_326:
      v54 = 1;
    else
      v54 = 0;
    if ( !v54 || (v55 = 1, a2 == 595) )
      v55 = 0;
    if ( v55 || (a2 != 528 || (_WORD)v133 != 582 ? (v56 = 0) : (v56 = 1), v56) )
    {
      v95 = SGDGetUserSessionState((char *)v47 + 536);
      CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v95 + 3424), Src, 6LL, v26);
    }
  }
  EtwTraceBeginSendMessage(v26, v13, v49);
  v57 = a6;
  v58 = *((_DWORD *)a6 + 122) & 1;
  if ( v13 )
  {
    v59 = 0;
    v104 = 0;
    v60 = 512;
    v105 = 0;
    if ( !v58 )
    {
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v57 + 56) + 4LL), 0x40u);
      if ( (*(_DWORD *)(*((_QWORD *)v57 + 56) + 16LL) & 0x40) != 0 )
        KeSetEvent(*((PRKEVENT *)v57 + 92), 2, 0);
    }
    if ( a7 )
    {
      v104 = *(_DWORD *)(a7 + 36);
      v60 = ((*(_DWORD *)(a7 + 32) & 1) << 15) + 512;
    }
    CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v129);
    v61 = a6;
    if ( *(_QWORD *)(v13 + 432) == *((_QWORD *)a6 + 54) )
    {
      v68 = *(_DWORD *)(v13 + 488);
      if ( (v68 & 0x10000) == 0 )
      {
        *(_DWORD *)(v13 + 488) = v68 | 0x10000;
        v105 = 1;
      }
    }
    for ( ; (*v46 & 1) == 0; v61 = a6 )
    {
      if ( v59 )
        break;
      v116 = 0LL;
      v130 = 0LL;
      v131 = 0LL;
      LOBYTE(a5) = 0;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v13 + 448) + 4LL), 0xFFFFFDFF);
      if ( a2 == 788 )
      {
        if ( Src )
        {
          if ( *((_DWORD *)v61 + 158) <= 0x501u )
          {
            if ( *((_DWORD *)v61 + 162) )
            {
              v96 = *(_QWORD *)Src;
              v116 = v96;
              if ( *(_DWORD *)(v96 + 48) == 13 || *(_DWORD *)(v96 + 48) == 14 )
              {
                ThreadLock(v96, &v130);
                LOBYTE(a5) = 1;
              }
            }
          }
        }
      }
      v59 = xxxRealSleepThread(v60, v104, 0, 0, 0LL) == 0;
      if ( (_BYTE)a5 )
      {
        v97 = v116;
        v98 = (v59 << 7) | *(_DWORD *)(v116 + 88) & 0xFFFFFF7F;
        *(_DWORD *)(v116 + 88) = v98;
        if ( v59 )
        {
          v99 = v98 ^ ((unsigned __int8)v98 ^ (unsigned __int8)(v98 + 1)) & 0x7F;
          *(_DWORD *)(v97 + 88) = v99;
          if ( (v99 & 0x7Fu) > 0xA )
            *(_DWORD *)(v97 + 64) |= 0x10u;
        }
        ThreadUnlock1(v98, v97, v62);
      }
      if ( v59 && a7 )
      {
        v87 = *(_DWORD *)(a7 + 32);
        if ( ((v87 & 0x10) != 0 || (*v46 & 0x20) != 0) && (*v46 & 0x10) != 0 )
        {
          v104 = 0;
          v59 = 0;
        }
        if ( (v87 & 8) != 0 && !IsThreadHungTimeCheck(a6, gdwHungAppTimeout) )
          v59 = 0;
        if ( !v59 )
          EtwTraceConvertTimeOutToBlocking();
      }
    }
    CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v129);
    if ( v105 )
    {
      *(_DWORD *)(v13 + 488) &= ~0x10000u;
      MergeDeferredMessagesOfThreadOnQueue(v13);
    }
    if ( (*(_DWORD *)(v13 + 488) & 1) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v13 + 448) + 8LL), 0x200u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v13 + 448) + 4LL), 0x200u);
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 448) + 16LL) & 0x200) != 0 )
        KeSetEvent(*(PRKEVENT *)(v13 + 736), 2, 0);
    }
    if ( !v59 )
    {
      if ( Size )
      {
        v71 = v111;
        v117 = v111;
        if ( a2 == 131 )
        {
          if ( a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(131LL, 1uLL, (__int64 *)&v133, (__int16 *)&v117, 0LL, (__int64)a1);
            v71 = v117;
          }
          v83 = *v102;
          v84 = *(_OWORD *)*v102;
          if ( v133 )
          {
            v85 = v71[6];
            *(_OWORD *)v71 = v84;
            *((_OWORD *)v71 + 1) = v83[1];
            *((_OWORD *)v71 + 2) = v83[2];
            v71[6] = v85;
            v86 = *((_QWORD *)v83 + 6);
            if ( v86 )
            {
              *(_OWORD *)v85 = *(_OWORD *)v86;
              *(_OWORD *)(v85 + 16) = *(_OWORD *)(v86 + 16);
              *(_QWORD *)(v85 + 32) = *(_QWORD *)(v86 + 32);
            }
          }
          else
          {
            *(_OWORD *)v71 = v84;
          }
        }
        else
        {
          v72 = *v102;
          if ( v106 )
          {
            if ( v106 == 1 )
              strncpycch(v111, v72);
            else
              wcsncpycch(v111, v72, Size >> 1);
          }
          else
          {
            memmove(v111, v72, Size);
          }
        }
      }
      else if ( a2 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      {
        TransformMessageBetweenCoordinateSpaces(831LL, 1uLL, (__int64 *)&v133, (__int16 *)&Src, 0LL, (__int64)a1);
      }
    }
    EtwTraceEndSendMessage(v26);
    *(_QWORD *)(v13 + 504) = v118;
    v63 = a7;
    if ( a7 )
    {
      **(_QWORD **)(a7 + 40) = *v112;
      v64 = (*v46 & 0x8000) != 0;
      v65 = 0LL;
      if ( (*(_BYTE *)(v63 + 32) & 0x20) != 0 && v64 )
        UserSetLastError(1400);
      else
        LOBYTE(v65) = v59 == 0;
    }
    else
    {
      v65 = *v112;
    }
    if ( v63 || v59 )
    {
      v66 = v113;
      if ( (*v113 & 1) == 0 )
      {
        v88 = *v113 | 1;
        *v113 = v88;
        if ( (v88 & 0x4000) != 0 )
        {
          *v66 = v88 | 8;
        }
        else
        {
          --*v121;
          v89 = v110;
          v90 = *(_QWORD *)v110;
          v91 = *v122;
          if ( *(unsigned int **)(*(_QWORD *)v110 + 8LL) != v110 || *v91 != v110 )
            goto LABEL_363;
          *v91 = (unsigned int *)v90;
          *(_QWORD *)(v90 + 8) = v91;
          *(_QWORD *)v89 = 0LL;
          *v66 |= 0x10u;
        }
      }
    }
    else
    {
      v66 = v113;
    }
    v67 = *v66;
    if ( (*v66 & 0x4010) != 0x10 )
    {
      v67 |= 8u;
      *v66 = v67;
    }
    if ( (v67 & 0x8008) == 8 )
      return v65;
    v73 = v123;
    v74 = 1;
    if ( *v123 == 576 )
    {
      v75 = v114;
      FreeTouchInputInfo(*v114, 0LL);
    }
    else
    {
      v75 = v114;
      if ( *v123 != 281 )
        goto LABEL_241;
      FreeGestureInfo(*v114, 0LL);
    }
    v74 = 1;
LABEL_241:
    if ( (*v66 & 0x200) == 0 )
    {
      v76 = *v73;
      if ( (unsigned int)(v76 - 577) <= 3 )
        goto LABEL_359;
      if ( (unsigned int)v76 < 0x245 || (unsigned int)v76 > 0x257 || (v77 = 1, (_DWORD)v76 == 589) )
        v77 = 0;
      if ( v77 )
LABEL_359:
        v78 = 1;
      else
        v78 = 0;
      if ( !v78 || (v79 = 1, (_DWORD)v76 == 595) )
        v79 = 0;
      if ( v79 )
        goto LABEL_362;
      if ( (_DWORD)v76 != 528 || *v124 != 582 )
        v74 = 0;
      if ( v74 )
      {
LABEL_362:
        v100 = *v75;
        v101 = SGDGetUserSessionState(v76);
        CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v101 + 3424), v100, 6LL, v26);
      }
    }
    v80 = *(_QWORD *)v26;
    v81 = *v125;
    if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 && *v81 == v26 )
    {
      *v81 = v80;
      *(_QWORD *)(v80 + 8) = v81;
      HMAssignmentUnlock(v126);
      if ( *v102 )
        Win32FreePool(*v102);
      Win32FreeToPagedLookasideList(SMSLookaside, v26);
      return v65;
    }
LABEL_363:
    __fastfail(3u);
  }
  if ( !v58 )
  {
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v57 + 56) + 4LL), 0x40u);
    if ( (*(_DWORD *)(*((_QWORD *)v57 + 56) + 16LL) & 0x40) != 0 )
      KeSetEvent(*((PRKEVENT *)v57 + 92), 2, 0);
  }
  EtwTraceEndSendMessage(v26);
  return 1LL;
}
