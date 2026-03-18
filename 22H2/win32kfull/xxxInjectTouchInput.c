/*
 * XREFs of xxxInjectTouchInput @ 0x1C01B07F4
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01D55B0 (NtUserInjectTouchInput.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C000A838 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CheckGrantedAccess @ 0x1C00A1770 (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C00AC98C (GetScreenRect.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00B7D5C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01AED34 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01AF124 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01AF480 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01AF7D0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01AFCC0 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01AFD4C (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01AFDCC (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01AFE3C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01AFFA4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1C01B0380 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C01B049C (WPP_RECORDER_AND_TRACE_SF_ii.c)
 */

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
  __int16 v11; // dx
  int v12; // r8d
  ULONG v13; // eax
  int v14; // edx
  char v15; // r10
  int v16; // edx
  int v17; // edx
  int v18; // r8d
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  __int64 v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  PDEVICE_OBJECT v26; // rcx
  char v27; // r8
  unsigned __int16 v28; // dx
  unsigned int v29; // edi
  char *v30; // rax
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rcx
  struct tagINJECTED_CONTACT *v38; // rdi
  __int64 v39; // rdx
  int v40; // ecx
  PDEVICE_OBJECT v42; // rcx
  char v43; // r8
  unsigned __int16 v44; // r9
  int v45; // eax
  int v46; // r8d
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // r9d
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // r14
  bool v56; // cf
  ULONG v57; // r15d
  int QpcBasedTouchStackTime; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // ebx
  unsigned int *v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  unsigned int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rcx
  INT *v68; // r12
  char *v69; // r14
  __int64 v70; // r13
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v72; // rcx
  INT DpiForSystem; // edi
  INT v74; // ebx
  INT v75; // eax
  INT v76; // ecx
  INT v77; // eax
  int v78; // edx
  _DWORD *v79; // rax
  int v80; // r8d
  __int64 v81; // rcx
  unsigned __int64 v82; // rax
  unsigned int v83; // [rsp+20h] [rbp-C8h]
  __int64 v84; // [rsp+28h] [rbp-C0h]
  int v85; // [rsp+30h] [rbp-B8h]
  __int16 v86; // [rsp+30h] [rbp-B8h]
  int v87; // [rsp+38h] [rbp-B0h]
  unsigned int v88; // [rsp+40h] [rbp-A8h]
  unsigned int v89; // [rsp+48h] [rbp-A0h]
  int v90; // [rsp+60h] [rbp-88h]
  unsigned int v91; // [rsp+64h] [rbp-84h]
  unsigned __int64 v92; // [rsp+68h] [rbp-80h]
  unsigned __int64 v93; // [rsp+70h] [rbp-78h]
  struct tagRECT v94; // [rsp+78h] [rbp-70h] BYREF
  __int128 v95; // [rsp+88h] [rbp-60h]
  unsigned int v98; // [rsp+100h] [rbp+18h]
  __int64 v99; // [rsp+108h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  LODWORD(v99) = 0;
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
    v86 = v11;
LABEL_314:
    v14 = 20;
    goto LABEL_315;
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
    v14 = 20;
    v86 = 20;
LABEL_315:
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v9->AttachedDevice,
      v14,
      v7,
      v8,
      2,
      20,
      v86,
      (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids);
    return 0LL;
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
      v16 = 20;
      LOBYTE(v16) = v15;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v12,
        (_DWORD)WPP_GLOBAL_Control,
        2,
        20,
        21,
        (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids);
    }
    return 1LL;
  }
  v10 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v20) = 0;
    }
    if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 20;
      LOBYTE(v21) = v20;
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        v19,
        v20,
        2,
        20,
        22,
        (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids);
    }
    return 1LL;
  }
  v22 = *(_QWORD *)(v5 + 904);
  if ( !v22 )
  {
    v23 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v23);
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
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v22 + 16), v17, v18);
  gppiInputProvider = v5;
  v24 = *(_QWORD *)(v5 + 904);
  v25 = *(unsigned int *)(v24 + 28);
  if ( a1 > (unsigned int)v25 )
  {
    UserSetLastError(87);
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v89 = v25;
    v28 = 24;
    v88 = a1;
    goto LABEL_250;
  }
  v91 = *(_DWORD *)(v24 + 40);
  v93 = *(_QWORD *)(v24 + 64);
  v98 = *((_DWORD *)v3 + 16);
  v92 = *((_QWORD *)v3 + 10);
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
  v29 = 0;
  if ( !a1 )
  {
LABEL_93:
    v34 = *(_QWORD *)(v5 + 904);
    v35 = *(_QWORD *)(v34 + 16);
    *(_QWORD *)&v95 = v35;
    if ( !*(_DWORD *)(*(_QWORD *)(v35 + 472) + 1008LL) )
    {
      *(_DWORD *)(v34 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 904) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 904) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 904) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 904) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 904) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 904) + 72LL) = 0;
    }
    v36 = *(_QWORD *)(v5 + 904);
    v37 = v92;
    v38 = *(struct tagINJECTED_CONTACT **)(v36 + 80);
    if ( v98 && v92 || *(_DWORD *)(v36 + 32) && v92 || (v39 = *(_QWORD *)(v36 + 56)) != 0 && v98 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v36 + 80),
        (struct DEVICEINFO *)v35,
        v25,
        *(_DWORD *)(v36 + 36));
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
          v92,
          v83,
          v84,
          v85,
          v87);
      return 0LL;
    }
    if ( v92 || (v46 = 1, v39) )
      v46 = 0;
    v90 = v46;
    if ( !*(_DWORD *)(*(_QWORD *)(v35 + 472) + 1008LL) && (_DWORD)v25 )
    {
      v47 = (_DWORD *)((char *)v38 + 8);
      v48 = v25;
      do
      {
        if ( ((*v47 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v47 = 0x40000;
          LODWORD(v99) = 1;
        }
        v47 += 3;
        --v48;
      }
      while ( v48 );
      v37 = v92;
    }
    v49 = *(_QWORD *)(v5 + 904);
    v50 = 0;
    if ( v46 )
    {
      v51 = *(_QWORD *)(v35 + 472);
      LOBYTE(v50) = *(_DWORD *)(v51 + 1008) == 0;
      LOBYTE(v52) = _ValidateInjectionTime(v98, v91, *(_DWORD *)(v51 + 792), v50, *(_DWORD *)(v49 + 48));
      if ( !v52 )
      {
        xxxSendLastFrameTouchUp(v38, (struct DEVICEINFO *)v35, v25, *(_DWORD *)(*(_QWORD *)(v5 + 904) + 36LL));
        UserSetLastError(87);
        v26 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v28 = 44;
        v89 = v91;
        v88 = v98;
LABEL_250:
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)v26->AttachedDevice,
          v10,
          v27,
          (__int64)gFullLog,
          2u,
          0x14u,
          v28,
          (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids,
          v88,
          v89);
        return 0LL;
      }
    }
    else
    {
      v53 = *(_QWORD *)(v35 + 472);
      LOBYTE(v50) = *(_DWORD *)(v53 + 1008) == 0;
      if ( !(unsigned int)_ValidateInjectionQpcCount(v37, v93, *(_QWORD *)(v53 + 800), v50, *(_DWORD *)(v49 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v38,
          (struct DEVICEINFO *)v35,
          v25,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 904) + 56LL)) / gliQpcFreq);
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
            v92,
            2u,
            v84,
            0x2Du,
            (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids);
        return 0LL;
      }
    }
    v94 = *(struct tagRECT *)GetScreenRect((__int64)&v94);
    v54 = ValidateInjectedTouchFrame(a1, v3, v38, &v94, v25);
    v55 = *(_QWORD *)(v5 + 904);
    *(_QWORD *)&v94.left = v55;
    if ( !v54 )
    {
      xxxSendLastFrameTouchUp(v38, (struct DEVICEINFO *)v35, v25, *(_DWORD *)(v55 + 36));
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
          (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids,
          v99);
      v56 = (_DWORD)v99 != 0;
      LODWORD(v99) = -(int)v99;
      v40 = v56 ? 1460 : 87;
      goto LABEL_116;
    }
    if ( v90 )
    {
      v57 = 10 * (v98 - *(_DWORD *)(v55 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v59 = *(_QWORD *)(v35 + 472);
      if ( *(_DWORD *)(v59 + 1008) )
      {
        if ( !v57 )
        {
          v59 = *(unsigned int *)(v55 + 44);
          v57 = QpcBasedTouchStackTime - *(_DWORD *)(v55 + 36);
          if ( v57 <= (unsigned int)v59 )
          {
            if ( (unsigned int)v59 - v57 >= 5 )
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
            v57 = v59 + 1;
          }
        }
        goto LABEL_276;
      }
      *(_DWORD *)(v55 + 32) = v98;
      *(_DWORD *)(v55 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v82 = 10000 * (v92 - *(_QWORD *)(v55 + 56)) / gliQpcFreq;
      v59 = *(_QWORD *)(v35 + 472);
      v57 = v82;
      if ( *(_DWORD *)(v59 + 1008) )
      {
        if ( (_DWORD)v82 == *(_DWORD *)(v55 + 44) )
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
      *(_QWORD *)(v55 + 56) = v92;
    }
    v57 = 0;
LABEL_276:
    if ( (_DWORD)v25 )
    {
      v59 = 0LL;
      v60 = v25;
      do
      {
        v59 += 12LL;
        *(_DWORD *)(v59 + *(_QWORD *)(v55 + 80) - 4) = 0x40000;
        --v60;
      }
      while ( v60 );
    }
    v61 = a1;
    if ( a1 )
    {
      v62 = (unsigned int *)((char *)v3 + 4);
      v63 = a1;
      do
      {
        v64 = *v62;
        v65 = v62[2];
        v62 += 36;
        v66 = 3 * v64;
        *(_DWORD *)(*(_QWORD *)(v55 + 80) + 4 * v66 + 8) = v65 & 0xFFFF7FFF;
        v59 = *(_QWORD *)(v55 + 80);
        *(_QWORD *)(v59 + 4 * v66) = *(_QWORD *)(v62 - 29);
        --v63;
      }
      while ( v63 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v59) & 0xF) != 2 && a1 )
    {
      v68 = (INT *)((char *)v3 + 116);
      v69 = (char *)v3 + 32;
      v70 = a1;
      do
      {
        v99 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v67);
        LogicalToPhysicalDPIPoint(v69, v69, CurrentThreadDpiAwarenessContext, &v99);
        DpiForSystem = GetDpiForSystem(v72);
        v74 = *(unsigned __int16 *)(*(_QWORD *)(v99 + 40) + 60LL);
        v75 = EngMulDiv(*(v68 - 1) - *(v68 - 3), v74, DpiForSystem);
        v76 = *v68 - *(v68 - 2);
        *(v68 - 1) = v75;
        v77 = EngMulDiv(v76, v74, DpiForSystem);
        v69 += 144;
        *(_QWORD *)(v68 - 3) = 0LL;
        *v68 = v77;
        v68 += 36;
        --v70;
      }
      while ( v70 );
      v55 = *(_QWORD *)&v94.left;
      v3 = a2;
      v35 = v95;
      v61 = a1;
    }
    v95 = *(_OWORD *)(*(_QWORD *)(v35 + 472) + 160LL);
    if ( v61 )
    {
      v78 = DWORD1(v95);
      v79 = (_DWORD *)((char *)v3 + 36);
      v80 = v95;
      v81 = v61;
      do
      {
        *(v79 - 1) -= v80;
        *v79 -= v78;
        v79 += 36;
        --v81;
      }
      while ( v81 );
    }
    *(_DWORD *)(v55 + 44) = v57;
    if ( v90 )
    {
      if ( v91 && !v98 )
        v2 = 1;
      *(_DWORD *)(v55 + 48) = v2;
      *(_DWORD *)(v55 + 40) = v98;
    }
    else
    {
      if ( v93 && !v92 )
        v2 = 1;
      *(_DWORD *)(v55 + 72) = v2;
      *(_QWORD *)(v55 + 64) = v92;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v35, v61, v3, v57);
    return 1LL;
  }
  v30 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v30 - 2) >= (unsigned int)v25 )
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
          0x1Au,
          (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids,
          *((_DWORD *)v3 + 36 * v29 + 1),
          v25);
      return 0LL;
    }
    if ( *((_DWORD *)v30 - 3) != 2 )
    {
      UserSetLastError(87);
      v42 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v44 = 27;
      v45 = *((_DWORD *)v3 + 36 * v29);
LABEL_132:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v42->AttachedDevice,
        v10,
        v43,
        (__int64)gFullLog,
        2u,
        0x14u,
        v44,
        (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids,
        v45);
      return 0LL;
    }
    v31 = *(_DWORD *)v30 & 0xFFFF7FFF;
    if ( v31 != 0x40000 )
    {
      if ( v31 - 0x20000 > 6 || (v32 = 69, !_bittest(&v32, v31 - 0x20000)) )
      {
        if ( v31 != 65542 && v31 != 262146 )
          break;
      }
    }
    v33 = *((_DWORD *)v30 + 22);
    if ( (v33 & 2) != 0 && *((_DWORD *)v30 + 31) >= 0x168u )
    {
      UserSetLastError(87);
      v42 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v44 = 29;
      v45 = *((_DWORD *)v3 + 36 * v29 + 34);
      goto LABEL_132;
    }
    if ( (v33 & 4) != 0 && *((_DWORD *)v30 + 32) > 0xFDE8u )
    {
      UserSetLastError(87);
      v42 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v44 = 30;
      v45 = *((_DWORD *)v3 + 36 * v29 + 35);
      goto LABEL_132;
    }
    if ( *((_DWORD *)v30 + 21) )
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
    if ( *((_DWORD *)v30 + 28) || *((_DWORD *)v30 + 30) || *((_DWORD *)v30 + 27) || *((_DWORD *)v30 + 29) )
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
      v86 = 32;
      goto LABEL_314;
    }
    if ( *((_DWORD *)v30 - 1) )
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
    if ( *(_QWORD *)(v30 + 4) )
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
    if ( *(_QWORD *)(v30 + 12) )
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
    if ( *((_DWORD *)v30 + 7) || *((_DWORD *)v30 + 8) )
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
    if ( *((_DWORD *)v30 + 9) || *((_DWORD *)v30 + 10) )
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
    if ( *((_DWORD *)v30 + 11) || *((_DWORD *)v30 + 12) )
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
    if ( *((_DWORD *)v30 + 14) )
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
    if ( *((_DWORD *)v30 + 15) )
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
    if ( *((_DWORD *)v30 + 16) )
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
    if ( *((_DWORD *)v30 + 19) )
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
    ++v29;
    v30 += 144;
    if ( v29 >= a1 )
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
      (__int64)&WPP_be0616c9099c301c3c3ff81df80a6792_Traceguids,
      *((_DWORD *)v3 + 36 * v29 + 3));
  v40 = 87;
LABEL_116:
  UserSetLastError(v40);
  return 0LL;
}
