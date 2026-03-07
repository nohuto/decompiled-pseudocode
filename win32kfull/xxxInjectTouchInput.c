// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  struct tagPOINTER_TOUCH_INFO *v3; // r13
  __int64 v5; // r14
  ULONG v6; // eax
  int v7; // r8d
  int v8; // r9d
  PDEVICE_OBJECT v9; // rcx
  char v10; // bp
  __int16 v11; // ax
  int v12; // r8d
  ULONG v13; // eax
  void *v14; // rdx
  char v15; // r10
  void *v16; // rdx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r8d
  int v21; // r9d
  void *v22; // rdx
  __int64 v23; // rcx
  ULONG v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // edi
  char *v28; // rax
  unsigned int v29; // ecx
  int v30; // r8d
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  struct tagINJECTED_CONTACT *v36; // rdi
  __int64 v37; // rdx
  int v38; // ecx
  PDEVICE_OBJECT v40; // rcx
  char v41; // r8
  unsigned __int16 v42; // r9
  int v43; // eax
  PDEVICE_OBJECT v44; // rcx
  char v45; // r8
  unsigned __int16 v46; // r9
  int v47; // r8d
  _DWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // r9d
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // r14
  bool v57; // cf
  ULONG v58; // r15d
  int QpcBasedTouchStackTime; // eax
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned int v62; // ebx
  unsigned int *v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  unsigned int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rcx
  INT *v69; // r12
  char *v70; // r14
  __int64 v71; // r13
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v73; // rcx
  INT DpiForSystem; // edi
  INT v75; // ebx
  INT v76; // eax
  INT v77; // ecx
  INT v78; // eax
  int v79; // edx
  _DWORD *v80; // rax
  int v81; // r8d
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  unsigned int v84; // [rsp+20h] [rbp-C8h]
  int v85; // [rsp+28h] [rbp-C0h]
  int v86; // [rsp+30h] [rbp-B8h]
  __int16 v87; // [rsp+30h] [rbp-B8h]
  int v88; // [rsp+38h] [rbp-B0h]
  unsigned int v89; // [rsp+40h] [rbp-A8h]
  unsigned int v90; // [rsp+48h] [rbp-A0h]
  int v91; // [rsp+60h] [rbp-88h]
  unsigned int v92; // [rsp+64h] [rbp-84h]
  unsigned __int64 v93; // [rsp+68h] [rbp-80h]
  unsigned __int64 v94; // [rsp+70h] [rbp-78h]
  struct tagRECT v95; // [rsp+78h] [rbp-70h] BYREF
  __int128 v96; // [rsp+88h] [rbp-60h]
  unsigned int v99; // [rsp+100h] [rbp+18h]
  __int64 v100; // [rsp+108h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  LODWORD(v100) = 0;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6);
    v9 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 19;
LABEL_313:
    v14 = &WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids;
    v87 = v11;
    goto LABEL_314;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 896LL), 0x20u) )
  {
    v13 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v13);
    v9 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v14 = &WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids;
    v87 = 20;
    goto LABEL_314;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v15 = 0;
    }
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = &WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids;
      LOBYTE(v16) = v15;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        v12,
        (_DWORD)WPP_GLOBAL_Control,
        2,
        20,
        21,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids);
    }
    return 1LL;
  }
  v10 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND(v18);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids;
      LOBYTE(v22) = v21;
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v22,
        v20,
        v21,
        2,
        20,
        22,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids);
    }
    return 1LL;
  }
  v23 = *(_QWORD *)(v5 + 880);
  if ( !v23 )
  {
    v24 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v24);
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 23;
    goto LABEL_313;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v23 + 16), v17, v19);
  gppiInputProvider = v5;
  v25 = *(_QWORD *)(v5 + 880);
  v26 = *(unsigned int *)(v25 + 28);
  if ( a1 > (unsigned int)v26 )
  {
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0x14u,
        0x18u,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
        a1,
        v26);
    return 0LL;
  }
  v92 = *(_DWORD *)(v25 + 40);
  v94 = *(_QWORD *)(v25 + 64);
  v99 = *((_DWORD *)v3 + 16);
  v93 = *((_QWORD *)v3 + 10);
  if ( !(unsigned int)SortTouchContacts(v3, a1) )
  {
    UserSetLastError(87);
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 25;
    goto LABEL_313;
  }
  v27 = 0;
  if ( !a1 )
  {
LABEL_93:
    v32 = *(_QWORD *)(v5 + 880);
    v33 = *(_QWORD *)(v32 + 16);
    *(_QWORD *)&v96 = v33;
    if ( !*(_DWORD *)(*(_QWORD *)(v33 + 472) + 1008LL) )
    {
      *(_DWORD *)(v32 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 880) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 880) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 880) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 880) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 880) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 880) + 72LL) = 0;
    }
    v34 = *(_QWORD *)(v5 + 880);
    v35 = v93;
    v36 = *(struct tagINJECTED_CONTACT **)(v34 + 80);
    if ( v99 && v93 || *(_DWORD *)(v34 + 32) && v93 || (v37 = *(_QWORD *)(v34 + 56)) != 0 && v99 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v34 + 80),
        (struct DEVICEINFO *)v33,
        v26,
        *(_DWORD *)(v34 + 36));
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_didi(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v93,
          v84,
          v85,
          v86,
          v88);
      return 0LL;
    }
    if ( v93 || (v47 = 1, v37) )
      v47 = 0;
    v91 = v47;
    if ( !*(_DWORD *)(*(_QWORD *)(v33 + 472) + 1008LL) && (_DWORD)v26 )
    {
      v48 = (_DWORD *)((char *)v36 + 8);
      v49 = v26;
      do
      {
        if ( ((*v48 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v48 = 0x40000;
          LODWORD(v100) = 1;
        }
        v48 += 3;
        --v49;
      }
      while ( v49 );
      v35 = v93;
    }
    v50 = *(_QWORD *)(v5 + 880);
    v51 = 0;
    if ( v47 )
    {
      v52 = *(_QWORD *)(v33 + 472);
      LOBYTE(v51) = *(_DWORD *)(v52 + 1008) == 0;
      LOBYTE(v53) = _ValidateInjectionTime(v99, v92, *(_DWORD *)(v52 + 792), v51, *(_DWORD *)(v50 + 48));
      if ( !v53 )
      {
        xxxSendLastFrameTouchUp(v36, (struct DEVICEINFO *)v33, v26, *(_DWORD *)(*(_QWORD *)(v5 + 880) + 36LL));
        UserSetLastError(87);
        v44 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v46 = 44;
        v90 = v92;
        v89 = v99;
        goto LABEL_250;
      }
    }
    else
    {
      v54 = *(_QWORD *)(v33 + 472);
      LOBYTE(v51) = *(_DWORD *)(v54 + 1008) == 0;
      if ( !(unsigned int)_ValidateInjectionQpcCount(v35, v94, *(_QWORD *)(v54 + 800), v51, *(_DWORD *)(v50 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v36,
          (struct DEVICEINFO *)v33,
          v26,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 880) + 56LL)) / gliQpcFreq);
        UserSetLastError(87);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_ii(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v93,
            2u,
            0x14u,
            0x2Du,
            (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
            v93,
            v94);
        return 0LL;
      }
    }
    v95 = (struct tagRECT)*GetScreenRect((__m128i *)&v95);
    v55 = ValidateInjectedTouchFrame(a1, v3, v36, &v95, v26);
    v56 = *(_QWORD *)(v5 + 880);
    *(_QWORD *)&v95.left = v56;
    if ( !v55 )
    {
      xxxSendLastFrameTouchUp(v36, (struct DEVICEINFO *)v33, v26, *(_DWORD *)(v56 + 36));
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0x14u,
          0x2Eu,
          (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
          v100);
      v57 = (_DWORD)v100 != 0;
      LODWORD(v100) = -(int)v100;
      v38 = v57 ? 1460 : 87;
      goto LABEL_116;
    }
    if ( v91 )
    {
      v58 = 10 * (v99 - *(_DWORD *)(v56 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v60 = *(_QWORD *)(v33 + 472);
      if ( *(_DWORD *)(v60 + 1008) )
      {
        if ( !v58 )
        {
          v60 = *(unsigned int *)(v56 + 44);
          v58 = QpcBasedTouchStackTime - *(_DWORD *)(v56 + 36);
          if ( v58 <= (unsigned int)v60 )
          {
            if ( (unsigned int)v60 - v58 >= 5 )
            {
              UserSetLastError(21);
              v9 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v10 = 0;
              }
              LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0LL;
              v11 = 47;
              goto LABEL_313;
            }
            v58 = v60 + 1;
          }
        }
        goto LABEL_276;
      }
      *(_DWORD *)(v56 + 32) = v99;
      *(_DWORD *)(v56 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v83 = 10000 * (v93 - *(_QWORD *)(v56 + 56)) / gliQpcFreq;
      v60 = *(_QWORD *)(v33 + 472);
      v58 = v83;
      if ( *(_DWORD *)(v60 + 1008) )
      {
        if ( (_DWORD)v83 == *(_DWORD *)(v56 + 44) )
        {
          UserSetLastError(21);
          v9 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v10 = 0;
          }
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v11 = 48;
          goto LABEL_313;
        }
        goto LABEL_276;
      }
      *(_QWORD *)(v56 + 56) = v93;
    }
    v58 = 0;
LABEL_276:
    if ( (_DWORD)v26 )
    {
      v60 = 0LL;
      v61 = v26;
      do
      {
        v60 += 12LL;
        *(_DWORD *)(v60 + *(_QWORD *)(v56 + 80) - 4) = 0x40000;
        --v61;
      }
      while ( v61 );
    }
    v62 = a1;
    if ( a1 )
    {
      v63 = (unsigned int *)((char *)v3 + 4);
      v64 = a1;
      do
      {
        v65 = *v63;
        v66 = v63[2];
        v63 += 36;
        v67 = 3 * v65;
        *(_DWORD *)(*(_QWORD *)(v56 + 80) + 4 * v67 + 8) = v66 & 0xFFFF7FFF;
        v60 = *(_QWORD *)(v56 + 80);
        *(_QWORD *)(v60 + 4 * v67) = *(_QWORD *)(v63 - 29);
        --v64;
      }
      while ( v64 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v60) & 0xF) != 2 && a1 )
    {
      v69 = (INT *)((char *)v3 + 116);
      v70 = (char *)v3 + 32;
      v71 = a1;
      do
      {
        v100 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v68);
        LogicalToPhysicalDPIPoint(v70, v70, CurrentThreadDpiAwarenessContext, &v100);
        DpiForSystem = GetDpiForSystem(v73);
        v75 = *(unsigned __int16 *)(*(_QWORD *)(v100 + 40) + 60LL);
        v76 = EngMulDiv(*(v69 - 1) - *(v69 - 3), v75, DpiForSystem);
        v77 = *v69 - *(v69 - 2);
        *(v69 - 1) = v76;
        v78 = EngMulDiv(v77, v75, DpiForSystem);
        v70 += 144;
        *(_QWORD *)(v69 - 3) = 0LL;
        *v69 = v78;
        v69 += 36;
        --v71;
      }
      while ( v71 );
      v56 = *(_QWORD *)&v95.left;
      v3 = a2;
      v33 = v96;
      v62 = a1;
    }
    v96 = *(_OWORD *)(*(_QWORD *)(v33 + 472) + 160LL);
    if ( v62 )
    {
      v79 = DWORD1(v96);
      v80 = (_DWORD *)((char *)v3 + 36);
      v81 = v96;
      v82 = v62;
      do
      {
        *(v80 - 1) -= v81;
        *v80 -= v79;
        v80 += 36;
        --v82;
      }
      while ( v82 );
    }
    *(_DWORD *)(v56 + 44) = v58;
    if ( v91 )
    {
      if ( v92 && !v99 )
        v2 = 1;
      *(_DWORD *)(v56 + 48) = v2;
      *(_DWORD *)(v56 + 40) = v99;
    }
    else
    {
      if ( v94 && !v93 )
        v2 = 1;
      *(_DWORD *)(v56 + 72) = v2;
      *(_QWORD *)(v56 + 64) = v93;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v33, v62, v3, v58);
    return 1LL;
  }
  v28 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v28 - 2) >= (unsigned int)v26 )
    {
      UserSetLastError(87);
      v44 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v46 = 26;
      v90 = v26;
      v89 = *((_DWORD *)v3 + 36 * v27 + 1);
LABEL_250:
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)v44->AttachedDevice,
        v10,
        v45,
        (__int64)gFullLog,
        2u,
        0x14u,
        v46,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
        v89,
        v90);
      return 0LL;
    }
    if ( *((_DWORD *)v28 - 3) != 2 )
    {
      UserSetLastError(87);
      v40 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v42 = 27;
      v43 = *((_DWORD *)v3 + 36 * v27);
LABEL_132:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v40->AttachedDevice,
        v10,
        v41,
        (__int64)gFullLog,
        2u,
        0x14u,
        v42,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
        v43);
      return 0LL;
    }
    v29 = *(_DWORD *)v28 & 0xFFFF7FFF;
    if ( v29 != 0x40000 )
    {
      if ( v29 - 0x20000 > 6 || (v30 = 69, !_bittest(&v30, v29 - 0x20000)) )
      {
        if ( v29 != 65542 && v29 != 262146 )
          break;
      }
    }
    v31 = *((_DWORD *)v28 + 22);
    if ( (v31 & 2) != 0 && *((_DWORD *)v28 + 31) >= 0x168u )
    {
      UserSetLastError(87);
      v40 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v42 = 29;
      v43 = *((_DWORD *)v3 + 36 * v27 + 34);
      goto LABEL_132;
    }
    if ( (v31 & 4) != 0 && *((_DWORD *)v28 + 32) > 0xFDE8u )
    {
      UserSetLastError(87);
      v40 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v42 = 30;
      v43 = *((_DWORD *)v3 + 36 * v27 + 35);
      goto LABEL_132;
    }
    if ( *((_DWORD *)v28 + 21) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 31;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 28) || *((_DWORD *)v28 + 30) || *((_DWORD *)v28 + 27) || *((_DWORD *)v28 + 29) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v14 = &WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids;
      v87 = 32;
LABEL_314:
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v9->AttachedDevice,
        (_DWORD)v14,
        v7,
        v8,
        2,
        20,
        v87,
        (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids);
      return 0LL;
    }
    if ( *((_DWORD *)v28 - 1) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 33;
      goto LABEL_313;
    }
    if ( *(_QWORD *)(v28 + 4) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 34;
      goto LABEL_313;
    }
    if ( *(_QWORD *)(v28 + 12) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 35;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 7) || *((_DWORD *)v28 + 8) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 36;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 9) || *((_DWORD *)v28 + 10) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 37;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 11) || *((_DWORD *)v28 + 12) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 38;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 14) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 39;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 15) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 40;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 16) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 41;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v28 + 19) )
    {
      UserSetLastError(87);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 42;
      goto LABEL_313;
    }
    ++v27;
    v28 += 144;
    if ( v27 >= a1 )
      goto LABEL_93;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      2u,
      0x14u,
      0x1Cu,
      (__int64)&WPP_3ea27119d1a4367716b8c89109e0c1b9_Traceguids,
      *((_DWORD *)v3 + 36 * v27 + 3));
  v38 = 87;
LABEL_116:
  UserSetLastError(v38);
  return 0LL;
}
