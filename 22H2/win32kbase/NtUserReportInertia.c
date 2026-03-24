/*
 * XREFs of NtUserReportInertia @ 0x1C0004160
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00042D0 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004300 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_iDqqqq @ 0x1C000432C (WPP_RECORDER_SF_iDqqqq.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0044A10 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004597C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00461A8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004CC10 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C009D0F8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ValidateBaseHandleFromMinuserHandle @ 0x1C0115560 (ValidateBaseHandleFromMinuserHandle.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0182920 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C01A8704 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C01A91D8 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     UserGetLastError @ 0x1C01D1CEC (UserGetLastError.c)
 */

_BOOL8 __fastcall NtUserReportInertia(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  ULONG64 v10; // r14
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r9d
  struct tagTHREADINFO *v14; // r12
  int v15; // edx
  char v16; // r15
  int v17; // ebx
  CInertiaManager *Instance; // rax
  bool v19; // al
  int v20; // edx
  BOOL v21; // edi
  int v23; // r9d
  int v24; // r9d
  PVOID CurrentProcess; // rax
  int v26; // edx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  BOOL v30; // r10d
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // r9d
  int v34; // r15d
  __int64 v35; // rax
  int v36; // edx
  int v37; // edx
  int v38; // edi
  ULONG64 v39; // rcx
  __int128 *v40; // rcx
  CInertiaManager *v41; // rcx
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r13
  struct CInputDest *v45; // r9
  bool v46; // al
  int v47; // edx
  char LastError; // al
  int v49; // edx
  __int64 v50; // [rsp+68h] [rbp-280h] BYREF
  int v51; // [rsp+70h] [rbp-278h]
  double v52; // [rsp+78h] [rbp-270h] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp-268h]
  CInertiaManager *v54; // [rsp+90h] [rbp-258h]
  __int64 v55; // [rsp+98h] [rbp-250h]
  int v56; // [rsp+A0h] [rbp-248h]
  __int128 v57; // [rsp+B0h] [rbp-238h]
  __int128 v58; // [rsp+C0h] [rbp-228h]
  __int64 v59; // [rsp+D0h] [rbp-218h]
  __int128 v60; // [rsp+D8h] [rbp-210h]
  __int128 v61; // [rsp+E8h] [rbp-200h]
  __int128 v62; // [rsp+F8h] [rbp-1F0h]
  _DWORD v63[28]; // [rsp+110h] [rbp-1D8h] BYREF
  char v64; // [rsp+180h] [rbp-168h]
  __int128 v65; // [rsp+190h] [rbp-158h] BYREF
  __int128 v66; // [rsp+1A0h] [rbp-148h]
  __int64 v67; // [rsp+1B0h] [rbp-138h]
  __int128 v68; // [rsp+1B8h] [rbp-130h] BYREF
  __int128 v69; // [rsp+1C8h] [rbp-120h]
  __int128 v70; // [rsp+1D8h] [rbp-110h]
  _D3DMATRIX v71; // [rsp+1F0h] [rbp-F8h] BYREF
  _BYTE v72[128]; // [rsp+230h] [rbp-B8h] BYREF

  v53 = a1;
  v10 = a5;
  EnterCrit(0LL, 1LL);
  v14 = gptiCurrent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_iDqqqq(v12, v11, (unsigned int)&WPP_RECORDER_INITIALIZED, v13);
  v15 = 0;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_101:
      v21 = 0;
      v27 = 87LL;
      goto LABEL_102;
    }
    v23 = 64;
LABEL_16:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      21,
      v23,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_101;
  }
  if ( (a2 & 0xFFFFFFF8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_101;
    v24 = 65;
LABEL_100:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      21,
      v24,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      a2);
    goto LABEL_101;
  }
  LOBYTE(v12) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
    {
LABEL_98:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v24 = 66;
      goto LABEL_100;
    }
LABEL_7:
    if ( !(_BYTE)v12 )
    {
      v16 = 0;
      goto LABEL_9;
    }
    goto LABEL_98;
  }
  if ( (a2 & 2) != 0 )
    goto LABEL_7;
  v16 = 1;
LABEL_9:
  v17 = a2 & 4;
  if ( !v17 )
    goto LABEL_10;
  if ( a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_101;
    v23 = 67;
    goto LABEL_16;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v12, 0LL);
  v26 = 0;
  if ( CurrentProcess )
    v26 = CurrentProcess == g_pepDwm;
  if ( !v26 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v26,
        21,
        68,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    }
    v21 = 0;
LABEL_31:
    v27 = 5LL;
LABEL_102:
    UserSetLastError(v27);
    goto LABEL_13;
  }
LABEL_10:
  Instance = CInertiaManager::GetInstance();
  v54 = Instance;
  if ( !v16 )
  {
    v19 = CInertiaManager::InvalidateInertiaInfo(Instance, *((_QWORD *)v14 + 53), v53);
    v21 = v19;
    if ( v19 )
      goto LABEL_12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v20,
        21,
        80,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    }
    v21 = 0;
    goto LABEL_31;
  }
  memset(v63, 0, sizeof(v63));
  v64 = 0;
  if ( a4 )
  {
    v29 = ValidateBaseHandleFromMinuserHandle(a3, 0LL);
    v30 = 0;
    if ( !v29 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_37:
        v21 = v30;
        v32 = 1400LL;
LABEL_39:
        UserSetLastError(v32);
        CInputDest::SetEmpty((CInputDest *)v63);
        goto LABEL_13;
      }
      v31 = 69;
LABEL_36:
      LOBYTE(v28) = 2;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v28,
        21,
        v31,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        a3);
      v30 = 0;
      goto LABEL_37;
    }
    a3 = v29;
  }
  if ( !a5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_45:
      v21 = 0;
LABEL_47:
      v32 = 87LL;
      goto LABEL_39;
    }
    v33 = 70;
LABEL_44:
    LOBYTE(v28) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v28,
      21,
      v33,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_45;
  }
  if ( v17 )
  {
    v34 = 1;
    if ( !a6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v33 = 75;
      goto LABEL_44;
    }
  }
  else
  {
    v34 = 0;
    v35 = CInputDest::CInputDest(v72, a3, 2 - (unsigned int)(a4 != 0), 2LL);
    CInputDest::operator=(v63, v35);
    CInputDest::SetEmpty((CInputDest *)v72);
    v30 = 0;
    if ( !v63[0]
      || CInputDest::TestWindowFlag((CInputDest *)v63, 0x480u)
      || CInputDest::TestWindowFlag((CInputDest *)v63, 0x380u) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v31 = 71;
      goto LABEL_36;
    }
    if ( v63[23] == 2 && CInputDest::IsCompositionInput((CInputDest *)v63) && !a6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v33 = 72;
      goto LABEL_44;
    }
    if ( v14 != CInputDest::GetThreadInfo((CInputDest *)v63)
      && v14 != CInputDest::GetDelegateThreadInfo((CInputDest *)v63) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v36,
          21,
          73,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
      }
      v21 = 0;
      goto LABEL_47;
    }
    v37 = 800;
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v14 + 322) > 0x7D0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 2;
        WPP_RECORDER_SF_Dd(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v37,
          21,
          74,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          *((_DWORD *)v14 + 322),
          (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
      }
      v21 = 0;
      v32 = 5LL;
      goto LABEL_39;
    }
  }
  v38 = (*((_DWORD *)v14 + 308) >> 17) & 1;
  v50 = 0LL;
  v51 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  if ( a5 + 12 < a5 || a5 + 12 > MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v55 = *(_QWORD *)v10;
  v56 = *(_DWORD *)(v10 + 8);
  v50 = v55;
  v51 = v56;
  if ( a6 )
  {
    v39 = a6;
    if ( a6 + 40 < a6 || a6 + 40 > MmUserProbeAddress )
      v39 = MmUserProbeAddress;
    v57 = *(_OWORD *)v39;
    v58 = *(_OWORD *)(v39 + 16);
    v59 = *(_QWORD *)(v39 + 32);
    v65 = v57;
    v66 = v58;
    v67 = v59;
  }
  if ( a4 )
  {
    v40 = (__int128 *)a4;
    if ( a4 + 48 < a4 || a4 + 48 > MmUserProbeAddress )
      v40 = (__int128 *)MmUserProbeAddress;
    v60 = *v40;
    v61 = v40[1];
    v62 = v40[2];
    v68 = v60;
    v69 = v61;
    v70 = v62;
  }
  memset(&v71, 0, sizeof(v71));
  v52 = 0.0;
  if ( CInertiaManager::ValidateInertiaInfo(
         v41,
         (struct INERTIA_INFO *)&v50,
         (const struct INERTIA_REGION *)((unsigned __int64)&v65 & -(__int64)(a6 != 0)),
         &v71,
         &v52) )
  {
    v44 = -(__int64)a4;
    v45 = (struct CInputDest *)v63;
    if ( v34 )
      v45 = 0LL;
    v46 = CInertiaManager::AddInertiaInfo(
            v54,
            v14,
            v53,
            v45,
            (struct tagInputRoutingInfo *)((unsigned __int64)&v68 & -(__int64)(v44 != 0)),
            v38,
            v34,
            (const struct INERTIA_INFO *)&v50,
            v52,
            (const struct tagRECT *)((unsigned __int64)&v65 & -(__int64)(a6 != 0)),
            (const struct _D3DMATRIX *)((unsigned __int64)&v71 & -(__int64)(a6 != 0)));
    v21 = v46;
    if ( v46 )
    {
      CInputDest::SetEmpty((CInputDest *)v63);
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v47) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v47,
        21,
        78,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    }
    v43 = 5LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v42,
        21,
        77,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    }
    v43 = 87LL;
  }
  v21 = 0;
  UserSetLastError(v43);
  CInputDest::SetEmpty((CInputDest *)v63);
LABEL_12:
  if ( !v21 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v49) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v49,
      21,
      81,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
LABEL_13:
  UserSessionSwitchLeaveCrit();
  return v21;
}
