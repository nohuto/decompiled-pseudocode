/*
 * XREFs of NtUserReportInertia @ 0x1C000E690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C000E904 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x1C000E930 (WPP_RECORDER_AND_TRACE_SF_iDqqqq.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0057334 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5044 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01B55DC (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01B59F8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C01E16A4 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C01E2290 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     UserGetLastError @ 0x1C0208F94 (UserGetLastError.c)
 */

_BOOL8 __fastcall NtUserReportInertia(
        unsigned __int64 a1,
        int a2,
        struct tagTHREADINFO *a3,
        unsigned __int64 a4,
        double a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // r12
  char v8; // di
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  char v15; // al
  struct tagKERNELHANDLETABLEENTRY *v16; // rsi
  PDEVICE_OBJECT *v17; // r9
  PDEVICE_OBJECT v18; // rcx
  struct tagTHREADINFO *v19; // r14
  unsigned __int64 v20; // rsi
  char v21; // si
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // r12
  bool v25; // al
  int v26; // r8d
  BOOL v27; // r15d
  PDEVICE_OBJECT v29; // rcx
  __int16 v30; // ax
  __int64 v31; // rcx
  __int64 CurrentProcess; // rax
  _UNKNOWN **v33; // rdx
  int v34; // r8d
  BOOL v35; // r10d
  ULONG64 v36; // rdx
  PDEVICE_OBJECT v37; // rcx
  _UNKNOWN **v38; // rdx
  __int16 v39; // ax
  __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  int v43; // r8d
  bool IsCompositionInput; // al
  struct tagTHREADINFO *v45; // r15
  _UNKNOWN **v46; // rdx
  int v47; // r14d
  ULONG64 v48; // rcx
  __int128 *v49; // rcx
  CInertiaManager *v50; // rcx
  int v51; // edx
  int v52; // r8d
  struct CInputDest *v53; // r9
  bool v54; // al
  int v55; // edx
  int v56; // r8d
  _UNKNOWN **v57; // rdx
  bool v58; // r14
  char LastError; // al
  int v60; // r8d
  int v61; // edx
  __int64 v62; // [rsp+40h] [rbp-278h]
  struct _D3DMATRIX *v63; // [rsp+50h] [rbp-268h]
  unsigned __int64 v64; // [rsp+58h] [rbp-260h]
  double v65; // [rsp+60h] [rbp-258h]
  unsigned __int64 v66; // [rsp+68h] [rbp-250h]
  int v67; // [rsp+70h] [rbp-248h]
  struct tagTHREADINFO *v69; // [rsp+80h] [rbp-238h] BYREF
  int v70; // [rsp+88h] [rbp-230h]
  double v71; // [rsp+90h] [rbp-228h] BYREF
  unsigned __int64 v72; // [rsp+98h] [rbp-220h]
  struct tagTHREADINFO *v73; // [rsp+A8h] [rbp-210h]
  int v74; // [rsp+B0h] [rbp-208h]
  __int128 v75; // [rsp+C8h] [rbp-1F0h]
  __int128 v76; // [rsp+D8h] [rbp-1E0h]
  __int64 v77; // [rsp+E8h] [rbp-1D0h]
  __int128 v78; // [rsp+F0h] [rbp-1C8h]
  __int128 v79; // [rsp+100h] [rbp-1B8h]
  __int128 v80; // [rsp+110h] [rbp-1A8h]
  __int128 v81; // [rsp+120h] [rbp-198h] BYREF
  __int128 v82; // [rsp+130h] [rbp-188h]
  __int64 v83; // [rsp+140h] [rbp-178h]
  _DWORD v84[28]; // [rsp+150h] [rbp-168h] BYREF
  char v85; // [rsp+1C0h] [rbp-F8h]
  __int128 v86; // [rsp+1D0h] [rbp-E8h] BYREF
  __int128 v87; // [rsp+1E0h] [rbp-D8h]
  __int128 v88; // [rsp+1F0h] [rbp-C8h]
  _D3DMATRIX v89; // [rsp+200h] [rbp-B8h] BYREF

  v6 = a4;
  v69 = a3;
  v72 = a1;
  v71 = a5;
  v8 = 1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v10 & CurrentProcessWin32Process;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v15 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v15 = 0;
          }
          if ( v15 )
          {
            v16 = gpSharedUserCritDeferredUnlockListHead;
            if ( gpSharedUserCritDeferredUnlockListHead )
            {
              do
              {
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v16 + 2);
                *((_QWORD *)v16 + 2) = 0LL;
                if ( !*(_DWORD *)(*(_QWORD *)v16 + 8LL) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*(_QWORD *)v16);
                v16 = gpSharedUserCritDeferredUnlockListHead;
              }
              while ( gpSharedUserCritDeferredUnlockListHead );
              v6 = a4;
            }
          }
        }
      }
    }
  }
  v73 = gptiCurrent;
  v17 = &WPP_GLOBAL_Control;
  v18 = WPP_GLOBAL_Control;
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v69;
    v20 = v72;
  }
  else
  {
    v66 = a6;
    v65 = a5;
    v64 = v6;
    v19 = v69;
    v63 = (struct _D3DMATRIX *)v69;
    v20 = v72;
    HIDWORD(v62) = HIDWORD(v72);
    WPP_RECORDER_AND_TRACE_SF_iDqqqq(WPP_GLOBAL_Control->AttachedDevice, v10, v12, (unsigned int)&WPP_GLOBAL_Control);
    v17 = &WPP_GLOBAL_Control;
  }
  if ( !v20 )
  {
    v29 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_44;
    v30 = 85;
    goto LABEL_42;
  }
  if ( (a2 & 0xFFFFFFF8) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = v8;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        86,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        a2);
    }
    goto LABEL_44;
  }
  LOBYTE(v18) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_186;
    goto LABEL_19;
  }
  if ( (a2 & 2) != 0 )
  {
LABEL_19:
    if ( !(_BYTE)v18 )
    {
      v21 = 0;
      goto LABEL_21;
    }
LABEL_186:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = v8;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        87,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        a2);
    }
    v31 = 87LL;
    goto LABEL_194;
  }
  v21 = 1;
LABEL_21:
  v22 = a2 & 4;
  if ( !v22 )
    goto LABEL_22;
  if ( v19 )
  {
    v29 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_44;
    v30 = 88;
LABEL_42:
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v29->AttachedDevice,
      v10,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      v30,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_44:
    v31 = 87LL;
LABEL_194:
    v27 = 0;
LABEL_195:
    UserSetLastError(v31);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v18, v10, v12);
  v10 = 0LL;
  if ( CurrentProcess )
    v10 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( !(_DWORD)v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v33 = &WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = v8;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v33,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        89,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v31 = 5LL;
    goto LABEL_194;
  }
LABEL_22:
  v23 = SGDGetUserSessionState(v18, v10, v12, v17);
  v24 = v23;
  if ( v21 )
  {
    memset(v84, 0, sizeof(v84));
    v35 = 0;
    v85 = 0;
    v36 = *(_QWORD *)&v71;
    if ( !*(_QWORD *)&v71 )
    {
      v37 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      v38 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_83;
      v39 = 90;
LABEL_82:
      LOBYTE(v38) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        v37->AttachedDevice,
        (_DWORD)v38,
        v34,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        v39,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
      v35 = 0;
LABEL_83:
      v40 = 87LL;
LABEL_86:
      v27 = v35;
      UserSetLastError(v40);
      CInputDest::SetEmpty((CInputDest *)v84);
      goto LABEL_25;
    }
    if ( v22 )
    {
      v67 = 1;
      if ( !a6 )
      {
        v37 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        v38 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_83;
        v39 = 95;
        goto LABEL_82;
      }
      v45 = v73;
      v41 = a4;
    }
    else
    {
      v67 = 0;
      v41 = a4;
      v42 = CInputDest::CInputDest(&v89, v19, 2 - (unsigned int)(a4 != 0), 2LL);
      CInputDest::operator=(v84, v42);
      CInputDest::SetEmpty((CInputDest *)&v89);
      v35 = 0;
      if ( !v84[0]
        || CInputDest::TestWindowFlag((CInputDest *)v84, 0x480u)
        || CInputDest::TestWindowFlag((CInputDest *)v84, 0x380u) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = v35;
        }
        v46 = &WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v46) = v8;
          LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v46,
            v43,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            2,
            91,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
            (char)v19);
          v35 = 0;
        }
        v40 = 1400LL;
        goto LABEL_86;
      }
      if ( v84[23] == 2 )
      {
        IsCompositionInput = CInputDest::IsCompositionInput((CInputDest *)v84);
        v35 = 0;
        if ( IsCompositionInput && !a6 )
        {
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v8 = 0;
          }
          v38 = &WPP_RECORDER_INITIALIZED;
          LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_83;
          v39 = 92;
          goto LABEL_82;
        }
      }
      v45 = v73;
      if ( v73 != CInputDest::GetThreadInfo((CInputDest *)v84)
        && v73 != CInputDest::GetDelegateThreadInfo((CInputDest *)v84) )
      {
        v37 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = v35;
        }
        v38 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_83;
        v39 = 93;
        goto LABEL_82;
      }
      if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *((_DWORD *)v73 + 340) > 0x7D0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = v35;
        }
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v62) = *((_DWORD *)v73 + 340);
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v8,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            2u,
            0x5Eu,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
            v62,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            v63,
            v64,
            v65,
            v66);
          v35 = 0;
        }
        v40 = 5LL;
        goto LABEL_86;
      }
      v36 = *(_QWORD *)&v71;
    }
    v47 = (*((_DWORD *)v45 + 318) >> 17) & 1;
    v69 = 0LL;
    v70 = 0;
    v81 = 0LL;
    v82 = 0LL;
    v83 = 0LL;
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    if ( v36 + 12 < v36 || v36 + 12 > MmUserProbeAddress )
      v36 = MmUserProbeAddress;
    v73 = *(struct tagTHREADINFO **)v36;
    v74 = *(_DWORD *)(v36 + 8);
    v69 = v73;
    v70 = v74;
    if ( a6 )
    {
      v48 = a6;
      if ( a6 + 40 < a6 || a6 + 40 > MmUserProbeAddress )
        v48 = MmUserProbeAddress;
      v75 = *(_OWORD *)v48;
      v76 = *(_OWORD *)(v48 + 16);
      v77 = *(_QWORD *)(v48 + 32);
      v81 = v75;
      v82 = v76;
      v83 = v77;
    }
    if ( v41 )
    {
      v49 = (__int128 *)v41;
      if ( v41 + 48 < v41 || v41 + 48 > MmUserProbeAddress )
        v49 = (__int128 *)MmUserProbeAddress;
      v78 = *v49;
      v79 = v49[1];
      v80 = v49[2];
      v86 = v78;
      v87 = v79;
      v88 = v80;
    }
    memset(&v89, 0, sizeof(v89));
    v71 = 0.0;
    if ( CInertiaManager::ValidateInertiaInfo(
           v50,
           (struct INERTIA_INFO *)&v69,
           (const struct INERTIA_REGION *)((unsigned __int64)&v81 & -(__int64)(a6 != 0)),
           &v89,
           &v71) )
    {
      v53 = (struct CInputDest *)v84;
      if ( v67 )
        v53 = 0LL;
      v54 = CInertiaManager::AddInertiaInfo(
              (CInertiaManager *)(v24 + 16904),
              v45,
              v72,
              v53,
              (struct tagInputRoutingInfo *)((unsigned __int64)&v86 & -(__int64)(a4 != 0)),
              v47,
              v67,
              (const struct INERTIA_INFO *)&v69,
              v71,
              (const struct tagRECT *)((unsigned __int64)&v81 & -(__int64)(a6 != 0)),
              (const struct _D3DMATRIX *)((unsigned __int64)&v89 & -(__int64)(a6 != 0)));
      v27 = v54;
      if ( v54 )
      {
        CInputDest::SetEmpty((CInputDest *)v84);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v55) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v55) = 0;
        }
        if ( (_BYTE)v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v55,
            v56,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            2,
            98,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
        }
        v27 = 0;
        UserSetLastError(5LL);
        CInputDest::SetEmpty((CInputDest *)v84);
      }
    }
    else
    {
      LOBYTE(v51) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v51,
          v52,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          97,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
      }
      v27 = 0;
      UserSetLastError(87LL);
      CInputDest::SetEmpty((CInputDest *)v84);
    }
    goto LABEL_24;
  }
  v25 = CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(v23 + 16904), *((_QWORD *)v73 + 53), v72);
  v27 = v25;
  if ( !v25 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v57 = &WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v57) = v8;
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v57,
        v26,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        100,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v27 = 0;
    v31 = 5LL;
    goto LABEL_195;
  }
LABEL_24:
  if ( !v27 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v60) = v58;
      LOBYTE(v61) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v61,
        v60,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        101,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        LastError);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit();
  return v27;
}
