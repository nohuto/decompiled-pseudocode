/*
 * XREFs of xxxInjectTouchInput @ 0x1C01DCDAC
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01FDDA0 (NtUserInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0013114 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C003AD34 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00D5ADC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C0103B20 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1C0103D34 (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C0122CA4 (GetScreenRect.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D9B90 (WPP_RECORDER_SF_D.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DB4C4 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01DB860 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DBBFC (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DBEB8 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DC1AC (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DC238 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01DC2A8 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DC31C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DC484 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_SF_didi @ 0x1C01DC8E4 (WPP_RECORDER_SF_didi.c)
 *     WPP_RECORDER_SF_ii @ 0x1C01DCA04 (WPP_RECORDER_SF_ii.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  struct tagPOINTER_TOUCH_INFO *v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbp
  ULONG v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  int v12; // edx
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  int v17; // r9d
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  ULONG v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // edi
  char *v37; // rax
  unsigned int v38; // ecx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // r13
  struct tagINJECTED_CONTACT *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  int v51; // edx
  int v52; // r9d
  int v53; // ecx
  int v54; // eax
  int v55; // r9d
  __int64 v56; // r8
  _DWORD *v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  bool v60; // zf
  __int64 v61; // rcx
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // r8
  __int64 v70; // rbp
  int v71; // ecx
  bool v72; // cf
  ULONG v73; // r14d
  int QpcBasedTouchStackTime; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned int *v79; // r9
  __int64 v80; // r10
  __int64 v81; // r8
  unsigned int v82; // edx
  __int64 v83; // rcx
  INT *v84; // r13
  char *v85; // rbp
  __int64 v86; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v88; // rcx
  INT DpiForSystem; // edi
  INT v90; // ebx
  INT v91; // eax
  INT v92; // ecx
  INT v93; // eax
  int v94; // edx
  _DWORD *v95; // rax
  int v96; // r8d
  __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rdx
  int v100; // [rsp+20h] [rbp-A8h]
  int v101; // [rsp+28h] [rbp-A0h]
  char v102; // [rsp+30h] [rbp-98h]
  int v103; // [rsp+50h] [rbp-78h]
  unsigned int v104; // [rsp+54h] [rbp-74h]
  unsigned __int64 v105; // [rsp+58h] [rbp-70h]
  __int64 v106; // [rsp+60h] [rbp-68h]
  struct tagRECT v107; // [rsp+68h] [rbp-60h] BYREF
  __int128 v108; // [rsp+78h] [rbp-50h]
  unsigned int v110; // [rsp+E0h] [rbp+18h]
  __int64 v111; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  LODWORD(v111) = 0;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6, v7, v8);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 19;
LABEL_160:
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(v10, v9, 20, v11, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 0x20u) )
  {
    v13 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v13, v14, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 20;
    goto LABEL_160;
  }
  v16 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 21;
LABEL_14:
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(v16, v12, 20, v17, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 22;
      goto LABEL_14;
    }
    return 1LL;
  }
  v21 = *(_QWORD *)(v5 + 896);
  if ( !v21 )
  {
    v22 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v22, v23, v24);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 23;
    goto LABEL_160;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v21 + 16), v18, v19, v20);
  gppiInputProvider = v5;
  v27 = *(_QWORD *)(v5 + 896);
  v28 = *(unsigned int *)(v27 + 28);
  if ( (unsigned int)v4 > (unsigned int)v28 )
  {
    UserSetLastError(87LL, v25, v26);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v102 = v28;
    v32 = 24;
    LOBYTE(v101) = v4;
LABEL_118:
    LOBYTE(v29) = 2;
    WPP_RECORDER_SF_dd(v30, v29, v31, v32, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v101, v102);
    return 0LL;
  }
  v33 = *((_QWORD *)v3 + 10);
  v104 = *(_DWORD *)(v27 + 40);
  v105 = *(_QWORD *)(v27 + 64);
  v110 = *((_DWORD *)v3 + 16);
  v106 = v33;
  if ( !(unsigned int)SortTouchContacts(v3, v4) )
  {
    UserSetLastError(87LL, v34, v35);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 25;
    goto LABEL_160;
  }
  v36 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_56:
    v40 = *(_QWORD *)(v5 + 896);
    v41 = *(_QWORD *)(v40 + 16);
    *(_QWORD *)&v108 = v41;
    if ( !*(_DWORD *)(*(_QWORD *)(v41 + 480) + 952LL) )
    {
      *(_DWORD *)(v40 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 896) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 72LL) = 0;
      v40 = *(_QWORD *)(v5 + 896);
    }
    v42 = *(struct tagINJECTED_CONTACT **)(v40 + 80);
    if ( v110 && v33 || *(_DWORD *)(v40 + 32) && v33 || (v43 = *(_QWORD *)(v40 + 56)) != 0 && v110 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v40 + 80),
        (struct DEVICEINFO *)v41,
        (unsigned int)v28,
        *(_DWORD *)(v40 + 36));
      UserSetLastError(87LL, v44, v45);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(*(_QWORD *)(v5 + 896), v46, v47, v48, v100);
      return 0LL;
    }
    if ( v33 || (v55 = 1, v43) )
      v55 = 0;
    v56 = *(_QWORD *)(v41 + 480);
    v103 = v55;
    if ( !*(_DWORD *)(v56 + 952) && (_DWORD)v28 )
    {
      v57 = (_DWORD *)((char *)v42 + 8);
      v58 = v28;
      do
      {
        if ( ((*v57 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v57 = 0x40000;
          LODWORD(v111) = 1;
        }
        v57 += 3;
        --v58;
      }
      while ( v58 );
      v56 = *(_QWORD *)(v41 + 480);
    }
    v59 = *(_DWORD *)(v56 + 952);
    v60 = v55 == 0;
    v61 = *(_QWORD *)(v5 + 896);
    v62 = 0;
    if ( v60 )
    {
      LOBYTE(v62) = v59 == 0;
      if ( !_ValidateInjectionQpcCount(v33, v105, *(_QWORD *)(v56 + 752), v62, *(_DWORD *)(v61 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v42,
          (struct DEVICEINFO *)v41,
          (unsigned int)v28,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL)) / gliQpcFreq);
        UserSetLastError(87LL, v65, v66);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            v67,
            2u,
            0x14u,
            0x2Du,
            (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
            v33,
            v105);
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v62) = v59 == 0;
      if ( !_ValidateInjectionTime(v110, v104, *(_DWORD *)(v56 + 744), v62, *(_DWORD *)(v61 + 48)) )
      {
        xxxSendLastFrameTouchUp(
          v42,
          (struct DEVICEINFO *)v41,
          (unsigned int)v28,
          *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL));
        UserSetLastError(87LL, v63, v64);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v32 = 44;
        v102 = v104;
        LOBYTE(v101) = v110;
        goto LABEL_118;
      }
    }
    v107 = (struct tagRECT)*GetScreenRect((__m128i *)&v107);
    v68 = ValidateInjectedTouchFrame(v4, v3, v42, &v107, v28);
    v70 = *(_QWORD *)(v5 + 896);
    *(_QWORD *)&v107.left = v70;
    if ( !v68 )
    {
      xxxSendLastFrameTouchUp(v42, (struct DEVICEINFO *)v41, (unsigned int)v28, *(_DWORD *)(v70 + 36));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v34) = 2;
        WPP_RECORDER_SF_d(v71, v34, 20, 46, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v111);
      }
      v72 = (_DWORD)v111 != 0;
      LODWORD(v111) = -(int)v111;
      v49 = v72 ? 1460 : 87;
      goto LABEL_69;
    }
    if ( v103 )
    {
      v73 = 10 * (v110 - *(_DWORD *)(v70 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v77 = *(_QWORD *)(v41 + 480);
      if ( *(_DWORD *)(v77 + 952) )
      {
        if ( !v73 )
        {
          v77 = *(unsigned int *)(v70 + 44);
          v73 = QpcBasedTouchStackTime - *(_DWORD *)(v70 + 36);
          if ( v73 <= (unsigned int)v77 )
          {
            if ( (unsigned int)v77 - v73 >= 5 )
            {
              UserSetLastError(21LL, v75, v76);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0LL;
              v11 = 47;
              goto LABEL_160;
            }
            v73 = v77 + 1;
          }
        }
        goto LABEL_133;
      }
      *(_DWORD *)(v70 + 32) = v110;
      *(_DWORD *)(v70 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v98 = (unsigned __int64)(10000 * (v33 - *(_QWORD *)(v70 + 56))) / gliQpcFreq;
      v99 = (unsigned __int64)(10000 * (v33 - *(_QWORD *)(v70 + 56))) % gliQpcFreq;
      v77 = *(_QWORD *)(v41 + 480);
      v73 = v98;
      if ( *(_DWORD *)(v77 + 952) )
      {
        if ( (_DWORD)v98 == *(_DWORD *)(v70 + 44) )
        {
          UserSetLastError(21LL, v99, v69);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v11 = 48;
          goto LABEL_160;
        }
        goto LABEL_133;
      }
      *(_QWORD *)(v70 + 56) = v106;
    }
    v73 = 0;
LABEL_133:
    if ( (_DWORD)v28 )
    {
      v77 = 0LL;
      v78 = v28;
      do
      {
        v77 += 12LL;
        *(_DWORD *)(v77 + *(_QWORD *)(v70 + 80) - 4) = 0x40000;
        --v78;
      }
      while ( v78 );
    }
    if ( (_DWORD)v4 )
    {
      v79 = (unsigned int *)((char *)v3 + 4);
      v80 = v4;
      do
      {
        v81 = *v79;
        v82 = v79[2];
        v79 += 36;
        *(_DWORD *)(*(_QWORD *)(v70 + 80) + 12 * v81 + 8) = v82 & 0xFFFF7FFF;
        v77 = *(_QWORD *)(v70 + 80);
        *(_QWORD *)(v77 + 12 * v81) = *(_QWORD *)(v79 - 29);
        --v80;
      }
      while ( v80 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v77) & 0xF) != 2 && (_DWORD)v4 )
    {
      v84 = (INT *)((char *)v3 + 116);
      v85 = (char *)v3 + 32;
      v86 = v4;
      do
      {
        v111 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v83);
        LogicalToPhysicalDPIPoint(v85, v85, CurrentThreadDpiAwarenessContext, &v111);
        DpiForSystem = GetDpiForSystem(v88);
        v90 = *(unsigned __int16 *)(*(_QWORD *)(v111 + 40) + 64LL);
        v91 = EngMulDiv(*(v84 - 1) - *(v84 - 3), v90, DpiForSystem);
        v92 = *v84 - *(v84 - 2);
        *(v84 - 1) = v91;
        v93 = EngMulDiv(v92, v90, DpiForSystem);
        v85 += 144;
        *(_QWORD *)(v84 - 3) = 0LL;
        *v84 = v93;
        v84 += 36;
        --v86;
      }
      while ( v86 );
      v70 = *(_QWORD *)&v107.left;
      v3 = a2;
      v41 = v108;
    }
    v108 = *(_OWORD *)(*(_QWORD *)(v41 + 480) + 160LL);
    if ( (_DWORD)v4 )
    {
      v94 = DWORD1(v108);
      v95 = (_DWORD *)((char *)v3 + 36);
      v96 = v108;
      v97 = v4;
      do
      {
        *(v95 - 1) -= v96;
        *v95 -= v94;
        v95 += 36;
        --v97;
      }
      while ( v97 );
    }
    *(_DWORD *)(v70 + 44) = v73;
    if ( v103 )
    {
      if ( v104 && !v110 )
        v2 = 1;
      *(_DWORD *)(v70 + 48) = v2;
      *(_DWORD *)(v70 + 40) = v110;
    }
    else
    {
      if ( v105 && !v106 )
        v2 = 1;
      *(_DWORD *)(v70 + 72) = v2;
      *(_QWORD *)(v70 + 64) = v106;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v41, v4, v3, v73);
    return 1LL;
  }
  v37 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v37 - 2) >= (unsigned int)v28 )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v32 = 26;
      v102 = v28;
      v30 = 18 * v36;
      v101 = *((_DWORD *)v3 + 36 * v36 + 1);
      goto LABEL_118;
    }
    if ( *((_DWORD *)v37 - 3) != 2 )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v52 = 27;
      v53 = 18 * v36;
      v54 = *((_DWORD *)v3 + 36 * v36);
LABEL_75:
      LOBYTE(v51) = 2;
      WPP_RECORDER_SF_d(v53, v51, 20, v52, (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, v54);
      return 0LL;
    }
    v38 = *(_DWORD *)v37 & 0xFFFF7FFF;
    if ( v38 != 0x40000 )
    {
      v34 = v38 - 0x20000;
      if ( (unsigned int)v34 > 6 || (v35 = 69LL, !_bittest((const int *)&v35, v34)) )
      {
        if ( v38 != 65542 && v38 != 262146 )
          break;
      }
    }
    v39 = *((_DWORD *)v37 + 22);
    if ( (v39 & 2) != 0 && *((_DWORD *)v37 + 31) >= 0x168u )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v52 = 29;
      v53 = 18 * v36;
      v54 = *((_DWORD *)v3 + 36 * v36 + 34);
      goto LABEL_75;
    }
    if ( (v39 & 4) != 0 && *((_DWORD *)v37 + 32) > 0xFDE8u )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v52 = 30;
      v53 = 18 * v36;
      v54 = *((_DWORD *)v3 + 36 * v36 + 35);
      goto LABEL_75;
    }
    if ( *((_DWORD *)v37 + 21) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 31;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 28) || *((_DWORD *)v37 + 30) || *((_DWORD *)v37 + 27) || *((_DWORD *)v37 + 29) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 32;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 - 1) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 33;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v37 + 4) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 34;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v37 + 12) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 35;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 7) || *((_DWORD *)v37 + 8) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 36;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 9) || *((_DWORD *)v37 + 10) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 37;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 11) || *((_DWORD *)v37 + 12) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 38;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 14) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 39;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 15) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 40;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 16) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 41;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v37 + 19) )
    {
      UserSetLastError(87LL, v34, v35);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 42;
      goto LABEL_160;
    }
    ++v36;
    v37 += 144;
    if ( v36 >= (unsigned int)v4 )
      goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = 2;
    WPP_RECORDER_SF_D(
      18 * v36,
      v34,
      20,
      28,
      (__int64)&WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
      *((_DWORD *)v3 + 36 * v36 + 3));
  }
  v49 = 87LL;
LABEL_69:
  UserSetLastError(v49, v34, v35);
  return 0LL;
}
