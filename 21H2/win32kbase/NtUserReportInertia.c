/*
 * XREFs of NtUserReportInertia @ 0x1C0002E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C000303C (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x1C0003068 (WPP_RECORDER_AND_TRACE_SF_iDqqqq.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0034240 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0041B78 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0042158 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C01E0B84 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C01E1924 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall NtUserReportInertia(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  ULONG64 v7; // r13
  char v8; // bl
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // r9
  char v15; // al
  struct tagKERNELHANDLETABLEENTRY *v16; // rdi
  struct tagTHREADINFO *v17; // r12
  PDEVICE_OBJECT v18; // rcx
  _UNKNOWN **v19; // rdx
  char v20; // di
  int v21; // esi
  bool v22; // al
  BOOL v23; // esi
  __int64 v25; // rcx
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // ax
  PDEVICE_OBJECT v28; // rcx
  __int16 v29; // ax
  PVOID CurrentProcess; // rax
  BOOL v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r8
  BOOL v34; // r10d
  PDEVICE_OBJECT v35; // rcx
  _UNKNOWN **v36; // rdx
  __int16 v37; // ax
  __int64 v38; // rcx
  __int64 v39; // rax
  bool IsCompositionInput; // al
  int v41; // edx
  int v42; // esi
  ULONG64 v43; // rcx
  double v44; // r13
  ULONG64 v45; // rcx
  CInertiaManager *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r13
  struct CInputDest *v51; // r9
  bool v52; // al
  bool v53; // r14
  char LastError; // al
  int v55; // r8d
  int v56; // edx
  __int64 v57; // [rsp+70h] [rbp-238h] BYREF
  int v58; // [rsp+78h] [rbp-230h]
  double v59; // [rsp+80h] [rbp-228h] BYREF
  int v60; // [rsp+88h] [rbp-220h]
  unsigned __int64 v61; // [rsp+90h] [rbp-218h]
  __int64 v62; // [rsp+A8h] [rbp-200h]
  int v63; // [rsp+B0h] [rbp-1F8h]
  __int128 v64; // [rsp+C0h] [rbp-1E8h]
  __int128 v65; // [rsp+D0h] [rbp-1D8h]
  __int64 v66; // [rsp+E0h] [rbp-1C8h]
  __int128 v67; // [rsp+E8h] [rbp-1C0h]
  __int128 v68; // [rsp+F8h] [rbp-1B0h]
  __int128 v69; // [rsp+108h] [rbp-1A0h]
  __int128 v70; // [rsp+118h] [rbp-190h] BYREF
  __int128 v71; // [rsp+128h] [rbp-180h]
  __int64 v72; // [rsp+138h] [rbp-170h]
  _DWORD v73[28]; // [rsp+140h] [rbp-168h] BYREF
  char v74; // [rsp+1B0h] [rbp-F8h]
  __int128 v75; // [rsp+1C0h] [rbp-E8h] BYREF
  __int128 v76; // [rsp+1D0h] [rbp-D8h]
  __int128 v77; // [rsp+1E0h] [rbp-C8h]
  _D3DMATRIX v78; // [rsp+1F0h] [rbp-B8h] BYREF

  *(_QWORD *)&v59 = a4;
  v57 = a3;
  v61 = a1;
  v7 = a5;
  v8 = 1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12, 0LL);
    v14 = 0LL;
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v15 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v15 = 0;
        }
        if ( v15 )
        {
          while ( 1 )
          {
            v16 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v16 + 2) = 0LL;
            v25 = *(_QWORD *)v16;
            if ( !*(_DWORD *)(*(_QWORD *)v16 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v10, v12);
              v25 = *(_QWORD *)v16;
            }
            HMUnlockObject(v25, v10, v12, v14);
            v14 = 0LL;
          }
        }
      }
    }
  }
  v17 = gptiCurrent;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_iDqqqq(WPP_GLOBAL_Control->AttachedDevice, v10, v12, 0);
  v19 = (_UNKNOWN **)v61;
  if ( !v61 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_190;
    v27 = 95;
LABEL_39:
    LOBYTE(v19) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v26->AttachedDevice,
      (_DWORD)v19,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v27,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_190:
    v32 = 87LL;
LABEL_191:
    v23 = 0;
    goto LABEL_192;
  }
  if ( (a2 & 0xFFFFFFF8) != 0 )
  {
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_190;
    v29 = 96;
LABEL_189:
    LOBYTE(v19) = v8;
    WPP_RECORDER_AND_TRACE_SF_D(
      v28->AttachedDevice,
      (_DWORD)v19,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v29,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      a2);
    goto LABEL_190;
  }
  LOBYTE(v18) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
    {
LABEL_182:
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_190;
      v29 = 97;
      goto LABEL_189;
    }
LABEL_18:
    if ( !(_BYTE)v18 )
    {
      v20 = 0;
      goto LABEL_20;
    }
    goto LABEL_182;
  }
  if ( (a2 & 2) != 0 )
    goto LABEL_18;
  v20 = 1;
LABEL_20:
  v21 = a2 & 4;
  if ( !v21 )
    goto LABEL_21;
  if ( v57 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_190;
    v27 = 98;
    goto LABEL_39;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v61, v12, 0LL);
  v31 = 0;
  if ( CurrentProcess )
    v31 = CurrentProcess == g_pepDwm;
  if ( !v31 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v19,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        99,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    }
    v32 = 5LL;
    goto LABEL_191;
  }
  v19 = (_UNKNOWN **)v61;
LABEL_21:
  if ( !v20 )
  {
    v22 = CInertiaManager::InvalidateInertiaInfo(
            (CInertiaManager *)&qword_1C029A5D0,
            *((_QWORD *)v17 + 53),
            (unsigned __int64)v19);
    v23 = v22;
    if ( v22 )
      goto LABEL_23;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v19,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        110,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    }
    v23 = 0;
    v32 = 5LL;
LABEL_192:
    UserSetLastError(v32, v19, v12);
    goto LABEL_24;
  }
  memset(v73, 0, sizeof(v73));
  v34 = 0;
  v74 = 0;
  if ( !a5 )
  {
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v36 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_79;
    v37 = 100;
LABEL_78:
    LOBYTE(v36) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v35->AttachedDevice,
      (_DWORD)v36,
      v33,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v37,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v34 = 0;
LABEL_79:
    v38 = 87LL;
LABEL_82:
    v23 = v34;
    UserSetLastError(v38, v36, v33);
    CInputDest::SetEmpty((CInputDest *)v73);
    goto LABEL_24;
  }
  if ( v21 )
  {
    v60 = 1;
    if ( !a6 )
    {
      v35 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      v36 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_79;
      v37 = 105;
      goto LABEL_78;
    }
  }
  else
  {
    v60 = 0;
    v39 = CInputDest::CInputDest(&v78, v57, 2 - (unsigned int)(*(_QWORD *)&v59 != 0LL), 2LL);
    CInputDest::operator=(v73, v39);
    CInputDest::SetEmpty((CInputDest *)&v78);
    v34 = 0;
    if ( !v73[0]
      || CInputDest::TestWindowFlag((CInputDest *)v73, 0x480u)
      || CInputDest::TestWindowFlag((CInputDest *)v73, 0x380u) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = v34;
      }
      v36 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = v8;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v36,
          v33,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          101,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
          v57);
        v34 = 0;
      }
      v38 = 1400LL;
      goto LABEL_82;
    }
    if ( v73[23] == 2 )
    {
      IsCompositionInput = CInputDest::IsCompositionInput((CInputDest *)v73);
      v34 = 0;
      if ( IsCompositionInput && !a6 )
      {
        v35 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v8 = 0;
        }
        v36 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_79;
        v37 = 102;
        goto LABEL_78;
      }
    }
    if ( v17 != CInputDest::GetThreadInfo((CInputDest *)v73)
      && v17 != CInputDest::GetDelegateThreadInfo((CInputDest *)v73) )
    {
      v35 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = v34;
      }
      v36 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_79;
      v37 = 103;
      goto LABEL_78;
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v17 + 330) > 0x7D0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = v34;
      }
      v36 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = 104;
        LOBYTE(v41) = v8;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v41,
          v33,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          104,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
          *((_DWORD *)v17 + 330),
          (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
        v34 = 0;
      }
      v38 = 5LL;
      goto LABEL_82;
    }
  }
  v42 = (*((_DWORD *)v17 + 314) >> 17) & 1;
  v57 = 0LL;
  v58 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( a5 + 12 < a5 || a5 + 12 > MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v62 = *(_QWORD *)v7;
  v63 = *(_DWORD *)(v7 + 8);
  v57 = v62;
  v58 = v63;
  if ( a6 )
  {
    v43 = a6;
    if ( a6 + 40 < a6 || a6 + 40 > MmUserProbeAddress )
      v43 = MmUserProbeAddress;
    v64 = *(_OWORD *)v43;
    v65 = *(_OWORD *)(v43 + 16);
    v66 = *(_QWORD *)(v43 + 32);
    v70 = v64;
    v71 = v65;
    v72 = v66;
  }
  v44 = v59;
  if ( *(_QWORD *)&v59 )
  {
    v45 = *(_QWORD *)&v59;
    if ( (unsigned __int64)(*(_QWORD *)&v59 + 48LL) < *(_QWORD *)&v59 || *(_QWORD *)&v59 + 48LL > MmUserProbeAddress )
      v45 = MmUserProbeAddress;
    v67 = *(_OWORD *)v45;
    v68 = *(_OWORD *)(v45 + 16);
    v69 = *(_OWORD *)(v45 + 32);
    v75 = v67;
    v76 = v68;
    v77 = v69;
  }
  memset(&v78, 0, sizeof(v78));
  v59 = 0.0;
  if ( !CInertiaManager::ValidateInertiaInfo(
          v46,
          (struct INERTIA_INFO *)&v57,
          (const struct INERTIA_REGION *)((unsigned __int64)&v70 & -(__int64)(a6 != 0)),
          &v78,
          &v59) )
  {
    LOBYTE(v47) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v47,
        v48,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        107,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v49 = 87LL;
LABEL_155:
    v23 = 0;
    UserSetLastError(v49, v47, v48);
    CInputDest::SetEmpty((CInputDest *)v73);
    goto LABEL_23;
  }
  v50 = -*(_QWORD *)&v44;
  v51 = (struct CInputDest *)v73;
  if ( v60 )
    v51 = 0LL;
  v52 = CInertiaManager::AddInertiaInfo(
          (CInertiaManager *)&qword_1C029A5D0,
          v17,
          v61,
          v51,
          (struct tagInputRoutingInfo *)((unsigned __int64)&v75 & -(__int64)(v50 != 0)),
          v42,
          v60,
          (const struct INERTIA_INFO *)&v57,
          v59,
          (const struct tagRECT *)((unsigned __int64)&v70 & -(__int64)(a6 != 0)),
          (const struct _D3DMATRIX *)((unsigned __int64)&v78 & -(__int64)(a6 != 0)));
  v23 = v52;
  if ( !v52 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v47) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v47) = 0;
    }
    LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v47,
        v48,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        108,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v49 = 5LL;
    goto LABEL_155;
  }
  CInputDest::SetEmpty((CInputDest *)v73);
LABEL_23:
  if ( !v23 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v56,
        v55,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        111,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        LastError);
    }
  }
LABEL_24:
  UserSessionSwitchLeaveCrit();
  return v23;
}
