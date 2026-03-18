/*
 * XREFs of ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1C04
 * Callers:
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1C00D5060 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1C00D5148 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DEE34 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01DEEC0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01DF3A0 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x1C00D51F4 (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E09A2 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00E399C (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5044 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01B55DC (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01E20D8 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C01E224C (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1C02072D4 (ApiSetEditionPostInertiaMessage.c)
 */

char __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        unsigned int a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  char v5; // si
  char v10; // di
  char v11; // dl
  const char *v12; // rax
  CInertiaManager *v13; // rcx
  int v14; // eax
  CInertiaManager *v15; // rcx
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  int v20; // r10d
  int v21; // r9d
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v26; // edx
  int v27; // r8d
  unsigned __int64 v28; // [rsp+20h] [rbp-E0h]
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+70h] [rbp-90h]
  __int128 v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  _OWORD v36[7]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 1;
  if ( a2 - 571 > 1 )
    return 0;
  v10 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = "STOP";
    if ( a2 != 571 )
      v12 = "END";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v28,
      2u,
      0xAu,
      (__int64)&WPP_f78ec32fa48a32d50e3f554234e620f0_Traceguids,
      v12);
  }
  InputTraceLogging::Inertia::PostInertiaMessage(a2, a3, a4);
  v14 = *((_DWORD *)a3 + 46);
  if ( (v14 & 0x10) == 0 )
  {
    CInputDest::CInputDest((__int64 *)&v29, *((_QWORD *)a3 + 15), 2 - ((v14 & 0x20) != 0), 1);
    if ( CInertiaManager::ValidateInertiaDest(v15, (const struct CInputDest *)&v29) )
    {
      v20 = *((_DWORD *)a3 + 46);
      v21 = -__CFSHR__(v20, 2);
      if ( !__CFSHR__(v20, 2) || CInputDest::HasDelegationThread((CInputDest *)&v29) )
      {
        if ( (v20 & 0x20) != 0 )
        {
          v22 = *((_OWORD *)a3 + 8);
          LODWORD(v29) = v29 | 2;
          v23 = *((_OWORD *)a3 + 9);
          *((_QWORD *)&v30 + 1) = 0LL;
          v24 = *((_OWORD *)a3 + 10);
          v31 = v22;
          v32 = v23;
          v33 = v24;
        }
        else
        {
          v24 = v33;
          v23 = v32;
          v22 = v31;
        }
        v36[0] = v29;
        v36[1] = v30;
        v36[5] = v34;
        v36[6] = v35;
        v36[2] = v22;
        v36[3] = v23;
        v36[4] = v24;
        if ( !v21 )
        {
          if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v36, a2, *((_QWORD *)a3 + 1), a4.x, 0LL) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v26) = 0;
            }
            if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v26,
                v27,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                2,
                2,
                14,
                (__int64)&WPP_f78ec32fa48a32d50e3f554234e620f0_Traceguids);
            }
          }
          CInputDest::SetEmpty((CInputDest *)&v29);
          return 1;
        }
        DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)&v29);
        if ( (unsigned int)ApiSetEditionPostInertiaMessage(
                             (unsigned int)v36,
                             a2,
                             *((_QWORD *)a3 + 1),
                             a4.x,
                             (__int64)DelegateThreadInfo) )
        {
          v10 = 1;
          goto LABEL_45;
        }
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v5 = 0;
        }
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v19 = 13;
      }
      else
      {
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v5 = 0;
        }
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v19 = 12;
      }
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v19 = 11;
    }
    LOBYTE(v16) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v18->AttachedDevice,
      v16,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      v19,
      (__int64)&WPP_f78ec32fa48a32d50e3f554234e620f0_Traceguids);
LABEL_45:
    CInputDest::SetEmpty((CInputDest *)&v29);
    return v10;
  }
  CInertiaManager::RouteSyntheticTouchpadToMT(v13, a2, a4, a5, *((_QWORD *)a3 + 1));
  return 1;
}
