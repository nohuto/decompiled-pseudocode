/*
 * XREFs of NtUserReportInertia @ 0x1C0002CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x1C0002F14 (WPP_RECORDER_AND_TRACE_SF_iDqqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C007D3C0 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C007D3DC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00D5EBC (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01E3284 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01E3804 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01E3C18 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C0210154 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C0210F24 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     UserGetLastError @ 0x1C0247AF0 (UserGetLastError.c)
 */

_BOOL8 __fastcall NtUserReportInertia(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  ULONG64 v7; // r13
  char v8; // bl
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  char v14; // al
  struct tagKERNELHANDLETABLEENTRY *i; // rdi
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // r9
  double v18; // r12
  unsigned __int64 v19; // rdi
  char v20; // di
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // r12
  bool v24; // al
  int v25; // edx
  BOOL v26; // r14d
  PDEVICE_OBJECT v28; // rcx
  __int16 v29; // ax
  PDEVICE_OBJECT v30; // rcx
  __int16 v31; // ax
  __int64 CurrentProcess; // rax
  _UNKNOWN **v33; // r8
  __int64 v34; // rcx
  int v35; // edx
  BOOL v36; // r10d
  PDEVICE_OBJECT v37; // rcx
  _UNKNOWN **v38; // r8
  __int16 v39; // ax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // edx
  bool IsCompositionInput; // al
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v45; // r9
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  _UNKNOWN **v47; // r8
  int v48; // edx
  _UNKNOWN **v49; // r8
  int v50; // r14d
  unsigned __int64 v51; // r13
  ULONG64 v52; // rcx
  __int128 *v53; // rcx
  const struct INERTIA_REGION *v54; // rdi
  CInertiaManager *v55; // rcx
  int v56; // edx
  _UNKNOWN **v57; // r8
  __int64 v58; // rcx
  bool v59; // cf
  struct CInputDest *v60; // r9
  bool v61; // al
  int v62; // edx
  _UNKNOWN **v63; // r8
  _UNKNOWN **v64; // r8
  bool v65; // r15
  char LastError; // al
  int v67; // r8d
  int v68; // edx
  int v69; // [rsp+70h] [rbp-258h]
  double v70; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-248h]
  unsigned __int64 v72; // [rsp+88h] [rbp-240h]
  unsigned __int64 v73; // [rsp+90h] [rbp-238h]
  struct tagTHREADINFO *v74; // [rsp+98h] [rbp-230h]
  __int64 v75; // [rsp+A8h] [rbp-220h] BYREF
  int v76; // [rsp+B0h] [rbp-218h]
  __int64 v77; // [rsp+C0h] [rbp-208h]
  int v78; // [rsp+C8h] [rbp-200h]
  __int128 v79; // [rsp+D8h] [rbp-1F0h]
  __int128 v80; // [rsp+E8h] [rbp-1E0h]
  __int64 v81; // [rsp+F8h] [rbp-1D0h]
  __int128 v82; // [rsp+100h] [rbp-1C8h]
  __int128 v83; // [rsp+110h] [rbp-1B8h]
  __int128 v84; // [rsp+120h] [rbp-1A8h]
  __int128 v85; // [rsp+130h] [rbp-198h] BYREF
  __int128 v86; // [rsp+140h] [rbp-188h]
  __int64 v87; // [rsp+150h] [rbp-178h]
  _DWORD v88[28]; // [rsp+160h] [rbp-168h] BYREF
  char v89; // [rsp+1D0h] [rbp-F8h]
  __int128 v90; // [rsp+1E0h] [rbp-E8h] BYREF
  __int128 v91; // [rsp+1F0h] [rbp-D8h]
  __int128 v92; // [rsp+200h] [rbp-C8h]
  _D3DMATRIX v93; // [rsp+210h] [rbp-B8h] BYREF

  v71 = a4;
  v70 = *(double *)&a3;
  v73 = a1;
  v72 = a6;
  v7 = a5;
  v8 = 1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v13 = v10 & CurrentProcessWin32Process;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v14 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v14 = 0;
          }
          if ( v14 )
          {
            for ( i = gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
              *((_QWORD *)i + 2) = 0LL;
              if ( !*(_DWORD *)(*(_QWORD *)i + 8LL) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*(_QWORD *)i);
            }
          }
        }
      }
    }
  }
  v74 = gptiCurrent;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v17 = 0LL;
    LOBYTE(v10) = 0;
  }
  else
  {
    LOBYTE(v10) = 1;
    v17 = 0LL;
  }
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = v70;
    v19 = v73;
  }
  else
  {
    v18 = v70;
    v19 = v73;
    WPP_RECORDER_AND_TRACE_SF_iDqqqq(WPP_GLOBAL_Control->AttachedDevice, v10, v11, 0);
    v17 = 0LL;
  }
  if ( !v19 )
  {
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_195;
    v29 = 95;
LABEL_42:
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v28->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v29,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_195:
    v26 = 0;
    v34 = 87LL;
    goto LABEL_196;
  }
  if ( (a2 & 0xFFFFFFF8) != 0 )
  {
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_195;
    v31 = 96;
LABEL_194:
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_D(
      v30->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v31,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      a2);
    goto LABEL_195;
  }
  LOBYTE(v16) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
    {
LABEL_187:
      v30 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_195;
      v31 = 97;
      goto LABEL_194;
    }
LABEL_19:
    if ( !(_BYTE)v16 )
    {
      v20 = 0;
      goto LABEL_21;
    }
    goto LABEL_187;
  }
  if ( (a2 & 2) != 0 )
    goto LABEL_19;
  v20 = 1;
LABEL_21:
  v21 = a2 & 4;
  if ( !v21 )
    goto LABEL_22;
  if ( v18 != 0.0 )
  {
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_195;
    v29 = 98;
    goto LABEL_42;
  }
  CurrentProcess = PsGetCurrentProcess(v16, v10, v11, 0LL);
  v10 = 0LL;
  if ( CurrentProcess )
    v10 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( !(_DWORD)v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v33 = &WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = v8;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v33,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        99,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v26 = 0;
LABEL_73:
    v34 = 5LL;
LABEL_196:
    UserSetLastError(v34);
    goto LABEL_25;
  }
LABEL_22:
  v22 = SGDGetUserSessionState(v16, v10, v11, v17);
  v23 = v22;
  if ( !v20 )
  {
    v24 = CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(v22 + 16904), *((_QWORD *)v74 + 53), v73);
    v26 = v24;
    if ( v24 )
      goto LABEL_24;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v64 = &WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = v8;
      LOBYTE(v64) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        (_DWORD)v64,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        110,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v26 = 0;
    goto LABEL_73;
  }
  memset(v88, 0, sizeof(v88));
  v36 = 0;
  v89 = 0;
  if ( !a5 )
  {
    v37 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v38 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_84;
    v39 = 100;
LABEL_83:
    LOBYTE(v35) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v37->AttachedDevice,
      v35,
      (_DWORD)v38,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v39,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    v36 = 0;
LABEL_84:
    v40 = 87LL;
LABEL_87:
    v26 = v36;
    UserSetLastError(v40);
    CInputDest::SetEmpty((CInputDest *)v88);
    goto LABEL_25;
  }
  if ( v21 )
  {
    v69 = 1;
    if ( !v72 )
    {
      v37 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      v38 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_84;
      v39 = 105;
      goto LABEL_83;
    }
    v45 = v74;
  }
  else
  {
    v69 = 0;
    v41 = CInputDest::CInputDest(&v93, *(_QWORD *)&v70, 2 - (unsigned int)(v71 != 0), 2LL);
    CInputDest::operator=(v88, v41);
    CInputDest::SetEmpty((CInputDest *)&v93);
    v36 = 0;
    if ( !v88[0]
      || CInputDest::TestWindowFlag((CInputDest *)v88, 0x480u)
      || CInputDest::TestWindowFlag((CInputDest *)v88, 0x380u) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = v36;
      }
      v49 = &WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v42) = v8;
        LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v42,
          (_DWORD)v49,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          101,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          SLOBYTE(v70));
        v36 = 0;
      }
      v40 = 1400LL;
      goto LABEL_87;
    }
    if ( v88[23] == 2 )
    {
      IsCompositionInput = CInputDest::IsCompositionInput((CInputDest *)v88);
      v36 = 0;
      if ( IsCompositionInput && !v72 )
      {
        v37 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        v38 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_84;
        v39 = 102;
        goto LABEL_83;
      }
    }
    ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v88);
    v45 = v74;
    if ( v74 != ThreadInfo )
    {
      DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)v88);
      if ( v45 != DelegateThreadInfo )
      {
        v37 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = v36;
        }
        v38 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_84;
        v39 = 103;
        goto LABEL_83;
      }
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v45 + 340) > 0x7D0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = v36;
      }
      v47 = &WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = 104;
        LOBYTE(v48) = v8;
        LOBYTE(v47) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v48,
          (_DWORD)v47,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          104,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          *((_DWORD *)v45 + 340),
          (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
        v36 = 0;
      }
      v40 = 5LL;
      goto LABEL_87;
    }
  }
  v50 = (*((_DWORD *)v45 + 318) >> 17) & 1;
  v75 = 0LL;
  v76 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  if ( a5 + 12 < a5 || a5 + 12 > MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v77 = *(_QWORD *)v7;
  v78 = *(_DWORD *)(v7 + 8);
  v75 = v77;
  v76 = v78;
  v51 = v72;
  if ( v72 )
  {
    v52 = v72;
    if ( v72 + 40 < v72 || v72 + 40 > MmUserProbeAddress )
      v52 = MmUserProbeAddress;
    v79 = *(_OWORD *)v52;
    v80 = *(_OWORD *)(v52 + 16);
    v81 = *(_QWORD *)(v52 + 32);
    v85 = v79;
    v86 = v80;
    v87 = v81;
  }
  if ( v71 )
  {
    v53 = (__int128 *)v71;
    if ( v71 + 48 < v71 || v71 + 48 > MmUserProbeAddress )
      v53 = (__int128 *)MmUserProbeAddress;
    v82 = *v53;
    v83 = v53[1];
    v84 = v53[2];
    v90 = v82;
    v91 = v83;
    v92 = v84;
  }
  memset(&v93, 0, sizeof(v93));
  v70 = 0.0;
  v54 = (const struct INERTIA_REGION *)((unsigned __int64)&v85 & -(__int64)(v72 != 0));
  if ( !CInertiaManager::ValidateInertiaInfo(v55, (struct INERTIA_INFO *)&v75, v54, &v93, &v70) )
  {
    LOBYTE(v56) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v57 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v57) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v56,
        (_DWORD)v57,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        107,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v58 = 87LL;
LABEL_161:
    v26 = 0;
    UserSetLastError(v58);
    CInputDest::SetEmpty((CInputDest *)v88);
    goto LABEL_24;
  }
  v59 = v71 != 0;
  v71 = -(__int64)v71;
  v60 = (struct CInputDest *)v88;
  if ( v69 )
    v60 = 0LL;
  v61 = CInertiaManager::AddInertiaInfo(
          (CInertiaManager *)(v23 + 16904),
          v74,
          v73,
          v60,
          (struct tagInputRoutingInfo *)((unsigned __int64)&v90 & -(__int64)v59),
          v50,
          v69,
          (const struct INERTIA_INFO *)&v75,
          v70,
          (const struct tagRECT *)v54,
          (const struct _D3DMATRIX *)((unsigned __int64)&v93 & -(__int64)(v51 != 0)));
  v26 = v61;
  if ( !v61 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v62) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v62) = 0;
    }
    v63 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v63) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v62,
        (_DWORD)v63,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        108,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v58 = 5LL;
    goto LABEL_161;
  }
  CInputDest::SetEmpty((CInputDest *)v88);
LABEL_24:
  if ( !v26 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v67) = v65;
      LOBYTE(v68) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v68,
        v67,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        111,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        LastError);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit();
  return v26;
}
