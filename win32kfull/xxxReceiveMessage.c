int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  unsigned int *v8; // r13
  __int64 v9; // r15
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 *v13; // rbx
  _DWORD *v14; // rax
  struct tagWND **v15; // rdi
  __int64 v16; // rdx
  __int64 *v17; // r8
  ULONG_PTR v18; // r9
  int *v19; // rdx
  int v20; // ebx
  __int64 v21; // r8
  ULONG_PTR v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rdx
  int v34; // ecx
  __int64 **v35; // rdi
  __int64 **v36; // rsi
  _DWORD *v37; // rcx
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int *v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // bl
  __int64 v48; // rcx
  void *v50; // rbx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rdi
  __m128i *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __m128i *v59; // r9
  __int64 v60; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rax
  char v65; // al
  char v66; // al
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // ecx
  __m128i *v77; // [rsp+50h] [rbp-238h]
  ULONG_PTR *v78; // [rsp+60h] [rbp-228h]
  int v79; // [rsp+68h] [rbp-220h]
  int v80; // [rsp+68h] [rbp-220h]
  unsigned int v81; // [rsp+68h] [rbp-220h]
  __int64 v82; // [rsp+70h] [rbp-218h]
  __int64 v83; // [rsp+78h] [rbp-210h] BYREF
  __int64 v84; // [rsp+80h] [rbp-208h] BYREF
  __int64 v85; // [rsp+88h] [rbp-200h] BYREF
  int v86; // [rsp+90h] [rbp-1F8h] BYREF
  int v87; // [rsp+94h] [rbp-1F4h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-1F0h]
  int v89; // [rsp+A0h] [rbp-1E8h]
  __int64 v90; // [rsp+A8h] [rbp-1E0h]
  __int64 v91[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  int v92; // [rsp+C0h] [rbp-1C8h]
  int v93; // [rsp+C4h] [rbp-1C4h]
  __int64 v94; // [rsp+C8h] [rbp-1C0h]
  __int64 *v95; // [rsp+D0h] [rbp-1B8h]
  __int64 v96[3]; // [rsp+D8h] [rbp-1B0h] BYREF
  int v97; // [rsp+F0h] [rbp-198h]
  int v98; // [rsp+F4h] [rbp-194h]
  __int64 v99; // [rsp+F8h] [rbp-190h]
  __int64 *v100; // [rsp+100h] [rbp-188h]
  __int128 v101; // [rsp+108h] [rbp-180h] BYREF
  __int64 v102; // [rsp+118h] [rbp-170h]
  __int128 v103; // [rsp+120h] [rbp-168h] BYREF
  __int64 v104; // [rsp+130h] [rbp-158h]
  __int64 v105; // [rsp+138h] [rbp-150h] BYREF
  __int64 v106; // [rsp+140h] [rbp-148h]
  __int64 v107; // [rsp+148h] [rbp-140h]
  __int64 v108; // [rsp+150h] [rbp-138h]
  __int128 v109; // [rsp+158h] [rbp-130h]
  __int64 v110; // [rsp+170h] [rbp-118h]
  __int128 v111; // [rsp+178h] [rbp-110h] BYREF
  __int64 v112; // [rsp+188h] [rbp-100h]
  __int128 v113; // [rsp+190h] [rbp-F8h] BYREF
  __int64 v114; // [rsp+1A0h] [rbp-E8h]
  __int128 v115; // [rsp+1A8h] [rbp-E0h] BYREF
  __int64 v116; // [rsp+1B8h] [rbp-D0h]
  __m128i v117; // [rsp+1C0h] [rbp-C8h] BYREF
  __m128i v118; // [rsp+1D0h] [rbp-B8h]
  __int64 v119; // [rsp+1E0h] [rbp-A8h]
  _BYTE v120[56]; // [rsp+1E8h] [rbp-A0h] BYREF
  _BYTE v121[56]; // [rsp+220h] [rbp-68h] BYREF

  v84 = a1;
  v2 = 0LL;
  v85 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v3 = (_QWORD *)(a1 + 520);
  v4 = *(__int64 **)(a1 + 520);
  if ( v4 == (__int64 *)(a1 + 520) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFFFBF);
    v5 = *(_QWORD *)(a1 + 448);
    _InterlockedAnd((volatile signed __int32 *)(v5 + 4), 0xFFFFFFBF);
    return v5;
  }
  --*(_DWORD *)(a1 + 536);
  v6 = (__int64 *)*v4;
  v7 = (__int64 **)v4[1];
  if ( *(__int64 **)(*v4 + 8) != v4 || *v7 != v4 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  *v4 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v4 - 2);
  v8 = (unsigned int *)v4 + 17;
  v83 = (__int64)v4 + 68;
  *((_DWORD *)v4 + 17) |= 0x4010u;
  if ( (_QWORD *)*v3 == v3 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFFFBF);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), 0xFFFFFFBF);
  }
  v9 = v4[2];
  if ( v9 )
  {
    v10 = *(unsigned __int64 **)(a1 + 480);
    v11 = *v10;
    if ( (*(_DWORD *)(v9 + 488) & 0x100) != 0 )
      v12 = v11 | 0x1000;
    else
      v12 = v11 & 0xFFFFFFFFFFFFEFFFuLL;
    *v10 = v12;
    v13 = v4 - 2;
  }
  else
  {
    v13 = v4 - 2;
  }
  if ( (*v8 & 0x200) != 0 )
  {
    v36 = (__int64 **)(v4 + 12);
    if ( !v9 )
      ThreadLock(v4[12], &v101);
    if ( (*v8 & 0x400) != 0 )
    {
      v37 = *(_DWORD **)(gptiCurrent + 448LL);
      v80 = *v37 & 8;
      *v37 |= 4u;
      **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
      v38 = *((_DWORD *)v4 + 22);
      if ( v38 == 576 || v38 == 281 )
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v38]])(
          v4[12],
          v38,
          v4[5],
          v4[7],
          v4[4],
          *(_QWORD *)(gpsi + 752LL),
          1,
          0LL);
      else
        SfnDWORD((__int64 *)v4[12], v38, v4[5], v4[7], v4[4], *(_QWORD *)(gpsi + 752LL));
      **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
      v41 = *(unsigned int **)(gptiCurrent + 448LL);
      v42 = *v41;
      if ( v80 )
        v43 = v42 | 8;
      else
        v43 = v42 & 0xFFFFFFF7;
      *v41 = v43;
    }
    else
    {
      if ( *v36 )
        v2 = **v36;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v4[4])(v2, *((unsigned int *)v4 + 22), v4[5], v4[7]);
    }
    if ( !v9 )
      ThreadUnlock1(v41, v39, v40);
    goto LABEL_37;
  }
  if ( (*v8 & 7) == 0 )
  {
    v14 = *(_DWORD **)(a1 + 448);
    v87 = *v14 & 8;
    v90 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = v13;
    *v14 |= 2u;
    **(_DWORD **)(a1 + 448) |= 8u;
    v78 = (ULONG_PTR *)(v4 + 12);
    if ( !v9 )
      ThreadLock(v4[12], &v101);
    if ( *((_DWORD *)v4 + 22) != 788 )
    {
      v79 = *(_DWORD *)(gptiCurrent + 1452LL);
      *(_DWORD *)(gptiCurrent + 1452LL) = *((_DWORD *)v4 + 28);
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v120);
      if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x20) != 0 )
      {
        v33 = *((unsigned int *)v4 + 22);
        if ( (unsigned int)v33 >= 0x400 )
          v34 = 0;
        else
          v34 = ((unsigned __int16)MessageTable[v33] >> 14) & 1;
        if ( v34 )
        {
          v35 = (__int64 **)(v4 + 12);
          if ( (*(_BYTE *)(*(_QWORD *)(v4[12] + 40) + 18LL) & 4) != 0 )
            goto LABEL_19;
        }
        else
        {
          v35 = (__int64 **)(v4 + 12);
        }
        v93 = 0;
        if ( *v35 )
          v94 = **v35;
        else
          v94 = 0LL;
        v92 = v33;
        v91[1] = v4[9];
        v91[0] = v4[10];
        v95 = v13;
        xxxCallHook(0, 1uLL, (__int64)v91, 4);
      }
LABEL_19:
      v15 = (struct tagWND **)(v4 + 12);
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v120);
      FreeDelayedHooks();
      if ( (*v8 & 7) == 0 )
      {
        v17 = (__int64 *)*v78;
        if ( *v78 )
        {
          v18 = 0LL;
          BugCheckParameter3 = 0LL;
          v110 = *v17;
          v89 = (unsigned __int16)v110;
          if ( (unsigned __int64)(unsigned __int16)v110 >= *(_QWORD *)(gpsi + 8LL)
            || (v18 = *((_QWORD *)&gSharedInfo + 1)
                    + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v110,
                *(__int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)v110) != v17)
            || *(_BYTE *)(v18 + 24) != 1 )
          {
            KeBugCheckEx(0x197u, 1uLL, *v78, v18, 1uLL);
          }
          if ( (*(_BYTE *)(v17[5] + 18) & 4) != 0 )
          {
            v111 = 0LL;
            v112 = 0LL;
            v103 = 0LL;
            v104 = 0LL;
            v47 = 0;
            ThreadLock(v17, &v111);
            v48 = *((unsigned int *)v4 + 22);
            if ( (unsigned int)v48 < 0x400 )
            {
              v23 = (_DWORD *)0x1C0000000LL;
              if ( _bittest16(&MessageTable[v48], 9u) || (_DWORD)v48 == 537 && (v4[9] & 0x8000) != 0 )
              {
                *v8 |= 0x20u;
                if ( v9 )
                {
                  v50 = *(void **)v9;
                  PushW32ThreadLock(*(_QWORD *)v9, &v103, DereferenceKernelStack);
                  ObfReferenceObject(v50);
                  PsReferenceKernelStack(v50);
                  v47 = 1;
                }
              }
            }
            v22 = *v78;
            v51 = *(_QWORD *)(*(_QWORD *)(*v78 + 40) + 120LL);
            if ( v51 >= 7 )
              v52 = 0LL;
            else
              v52 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64))(&gServerHandlers)[v51])(
                      v22,
                      *((unsigned int *)v4 + 22),
                      v4[9],
                      v4[10]);
            v85 = v52;
            if ( v47 )
              PopAndFreeW32ThreadLock(&v103);
          }
          else
          {
            v113 = 0LL;
            v114 = 0LL;
            ThreadLock(v17, &v113);
            v19 = *(int **)(gptiCurrent + 448LL);
            v20 = *v19;
            *v19 |= 0x10u;
            xxxSendMessageToClient(
              (struct tagWND *)*v78,
              *((_DWORD *)v4 + 22),
              v4[9],
              v4[10],
              (struct tagSMS *)(v4 - 2),
              1,
              &v85);
            v22 = gptiCurrent;
            v23 = *(_DWORD **)(gptiCurrent + 448LL);
            *v23 ^= ((unsigned __int8)*v23 ^ (unsigned __int8)v20) & 0x10;
          }
          ThreadUnlock1(v22, v23, v21);
          SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v121);
          if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x2000) == 0
            || (*v8 & 4) != 0
            || ((v74 = *((unsigned int *)v4 + 22), (unsigned int)v74 >= 0x400)
              ? (v75 = 0)
              : (v75 = ((unsigned __int16)MessageTable[v74] >> 14) & 1),
                v75 && (!*v78 || (*(_BYTE *)(*(_QWORD *)(*v78 + 40) + 18LL) & 4) != 0)) )
          {
            v13 = v4 - 2;
          }
          else
          {
            v98 = 0;
            if ( *v78 )
              v99 = *(_QWORD *)*v78;
            else
              v99 = 0LL;
            v97 = v74;
            v96[2] = v4[9];
            v96[1] = v4[10];
            v96[0] = v85;
            v13 = v4 - 2;
            v100 = v4 - 2;
            xxxCallHook(0, 1uLL, (__int64)v96, 12);
          }
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v121);
          FreeDelayedHooks();
          *(_DWORD *)(gptiCurrent + 1452LL) = v79;
        }
      }
      goto LABEL_29;
    }
    v117 = 0LL;
    v118 = 0LL;
    v119 = 0LL;
    v86 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v82 = v4[10];
    v55 = *(__m128i **)(v82 + 16);
    v77 = v55;
    v81 = *(_DWORD *)(*(_QWORD *)v82 + 48LL);
    BugCheckParameter3 = *(_QWORD *)(a1 + 1416);
    switch ( v81 )
    {
      case 0u:
      case 1u:
        if ( !v55 )
          goto LABEL_125;
        v117 = *v55;
        v118.m128i_i64[0] = v55[1].m128i_i64[0];
        if ( (unsigned int)(_mm_cvtsi128_si32(v117) - 512) > 0xE )
          goto LABEL_102;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v55);
        if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        v62 = *((unsigned int *)v4 + 29);
        if ( (((unsigned __int16)(*((_DWORD *)v4 + 29) >> 8) ^ (unsigned __int16)(*(_DWORD *)(CurrentProcessWin32Process
                                                                                            + 280) >> 8)) & 0x1FF) != 0 )
        {
          v83 = *(__int64 *)((char *)v117.m128i_i64 + 4);
          LogicalToPhysicalDPIPoint(&v83, &v83, v62, 0LL);
          v64 = PsGetCurrentProcessWin32Process(v63);
          if ( v64 && !*(_QWORD *)v64 )
            v64 = 0LL;
          PhysicalToLogicalDPIPoint(&v83, &v83, *(unsigned int *)(v64 + 280), 0LL);
          *(__int64 *)((char *)v117.m128i_i64 + 4) = v83;
        }
        goto LABEL_101;
      case 2u:
      case 0xAu:
        goto LABEL_124;
      case 7u:
        if ( !v55 )
          goto LABEL_125;
        v117 = *v55;
        v118 = v55[1];
        v119 = v55[2].m128i_i64[0];
        v56 = PsGetCurrentProcessWin32Process(v55);
        if ( v56 && !*(_QWORD *)v56 )
          v56 = 0LL;
        if ( (((unsigned __int16)(*((_DWORD *)v4 + 29) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v56 + 280) >> 8)) & 0x1FF) != 0 )
        {
          LogicalToPhysicalDPIPoint(&v117, &v117, *((unsigned int *)v4 + 29), 0LL);
          v58 = PsGetCurrentProcessWin32Process(v57);
          if ( v58 && !*(_QWORD *)v58 )
            v58 = 0LL;
          PhysicalToLogicalDPIPoint(&v117, &v117, *(unsigned int *)(v58 + 280), 0LL);
        }
LABEL_101:
        v55 = v77;
        goto LABEL_102;
      case 0xDu:
        InputTraceLogging::Keyboard::ProcessLowLevelHook();
        v55 = v77;
        if ( v77 )
        {
          v117 = *v77;
          v118.m128i_i64[0] = v77[1].m128i_i64[0];
          if ( *(_DWORD *)(v82 + 24) != -1 )
          {
            v65 = CheckAccess(v82 + 24, *(_QWORD *)(a1 + 424) + 864LL);
            v55 = v77;
            if ( !v65 )
              v117.m128i_i32[2] |= 2u;
          }
        }
        goto LABEL_118;
      case 0xEu:
        InputTraceLogging::Mouse::HandleLowLevelHook();
        v55 = v77;
        if ( v77 )
        {
          v117 = *v77;
          v118 = v77[1];
          if ( *(_DWORD *)(v82 + 24) != -1 )
          {
            v66 = CheckAccess(v82 + 24, *(_QWORD *)(a1 + 424) + 864LL);
            v55 = v77;
            if ( !v66 )
              v117.m128i_i32[3] |= 2u;
          }
        }
LABEL_118:
        v53 = *(_QWORD *)(a1 + 1400);
        v54 = *(_QWORD *)(a1 + 1408);
        *(_QWORD *)(a1 + 1400) = *(_QWORD *)(v82 + 24);
        *(_QWORD *)(a1 + 1408) = *(_QWORD *)(v82 + 32);
        *(_QWORD *)(a1 + 1416) = &v117;
LABEL_102:
        if ( !v55 )
          goto LABEL_125;
        v59 = &v117;
        v60 = v82;
        break;
      default:
        UserSetLastError(87);
LABEL_124:
        v77 = 0LL;
LABEL_125:
        v60 = v82;
        v59 = *(__m128i **)(v82 + 16);
        break;
    }
    v85 = xxxCallHook2(*(struct tagHOOK **)v60, *(_DWORD *)(v60 + 8), v4[9], (__int64)v59, &v86, 0);
    v67 = v81;
    if ( v81 - 13 <= 1 )
    {
      *(_QWORD *)(a1 + 1400) = v53;
      *(_QWORD *)(a1 + 1408) = v54;
      *(_QWORD *)(a1 + 1416) = BugCheckParameter3;
    }
    if ( (*v8 & 5) == 0 && v77 )
    {
      if ( !v81 || (v67 = v81 - 1, v81 == 1) )
      {
        if ( (unsigned int)(v117.m128i_i32[0] - 512) <= 0xE )
        {
          v71 = PsGetCurrentProcessWin32Process(v67);
          if ( v71 && !*(_QWORD *)v71 )
            v71 = 0LL;
          v72 = *(_DWORD *)(v71 + 280) >> 8;
          LOWORD(v72) = (*((_DWORD *)v4 + 29) >> 8) ^ v72;
          if ( (v72 & 0x1FF) != 0 )
          {
            v84 = *(__int64 *)((char *)v117.m128i_i64 + 4);
            v73 = PsGetCurrentProcessWin32Process(v72);
            if ( v73 && !*(_QWORD *)v73 )
              v73 = 0LL;
            LogicalToPhysicalDPIPoint(&v84, &v84, *(unsigned int *)(v73 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v84, &v84, *((unsigned int *)v4 + 29), 0LL);
            *(__int64 *)((char *)v117.m128i_i64 + 4) = v84;
          }
        }
      }
      else
      {
        if ( v81 == 7 )
        {
          v68 = PsGetCurrentProcessWin32Process(v81 - 7);
          if ( v68 && !*(_QWORD *)v68 )
            v68 = 0LL;
          v69 = *(_DWORD *)(v68 + 280) >> 8;
          LOWORD(v69) = (*((_DWORD *)v4 + 29) >> 8) ^ v69;
          if ( (v69 & 0x1FF) != 0 )
          {
            v70 = PsGetCurrentProcessWin32Process(v69);
            if ( v70 && !*(_QWORD *)v70 )
              v70 = 0LL;
            LogicalToPhysicalDPIPoint(&v117, &v117, *(unsigned int *)(v70 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v117, &v117, *((unsigned int *)v4 + 29), 0LL);
          }
          *v77 = v117;
          v77[1] = v118;
          v77[2].m128i_i64[0] = v119;
          goto LABEL_136;
        }
        if ( v81 != 13 )
        {
          if ( v81 == 14 )
          {
            *v77 = v117;
            v77[1] = v118;
          }
          goto LABEL_136;
        }
      }
      *v77 = v117;
      v77[1].m128i_i64[0] = v118.m128i_i64[0];
    }
LABEL_136:
    v15 = (struct tagWND **)(v4 + 12);
    v13 = v4 - 2;
LABEL_29:
    v24 = *v8;
    if ( (*v8 & 0x101) == 0x100 )
    {
      HIDWORD(v105) = 0;
      v109 = 0LL;
      v24 = (unsigned int)v24 | 1;
      *v8 = v24;
      if ( (v24 & 4) == 0 )
      {
        v115 = 0LL;
        v116 = 0LL;
        LODWORD(v105) = 33;
        if ( (v24 & 0x400) != 0 )
          LODWORD(v105) = 289;
        v106 = v4[4];
        v107 = v4[5];
        v108 = v85;
        ThreadLock(*v15, &v115);
        xxxInterSendMsgEx(
          *v15,
          *((_DWORD *)v4 + 22),
          0LL,
          0LL,
          0,
          (struct tagTHREADINFO *)v4[6],
          (__int64)&v105,
          1,
          *v8 & 0x10000);
        ThreadUnlock1(v45, v44, v46);
      }
    }
    if ( !v9 )
      ThreadUnlock1(v24, v16, v17);
    v25 = v90;
    *(_QWORD *)(a1 + 512) = v90;
    v26 = *(unsigned int **)(a1 + 448);
    v27 = *v26;
    if ( v25 )
      v28 = v27 | 2;
    else
      v28 = v27 & 0xFFFFFFFD;
    *v26 = v28;
    v29 = *(unsigned int **)(a1 + 448);
    v30 = *v29;
    if ( v87 )
      v31 = v30 | 8;
    else
      v31 = v30 & 0xFFFFFFF7;
    *v29 = v31;
  }
LABEL_37:
  LODWORD(v5) = EtwTraceEndRetrieveSendMessage(v13);
  v32 = *v8 & 0xFFFFBFFF;
  *v8 = v32;
  if ( (v32 & 8) != 0 )
  {
    LODWORD(v5) = UnlinkSendListSms(v13);
  }
  else if ( (v32 & 1) == 0 )
  {
    LODWORD(v5) = v85;
    v4[7] = v85;
    *v8 = v32 | 1;
    if ( v9 )
    {
      LODWORD(v5) = *(_DWORD *)(v9 + 488);
      if ( (v5 & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v9 + 448) + 8LL), 0x200u);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v9 + 448) + 4LL), 0x200u);
        v5 = *(_QWORD *)(v9 + 448);
        if ( (*(_DWORD *)(v5 + 16) & 0x200) != 0 )
          LODWORD(v5) = KeSetEvent(*(PRKEVENT *)(v9 + 736), 2, 0);
      }
    }
  }
  return v5;
}
