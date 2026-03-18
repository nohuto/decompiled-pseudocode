/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C0064850 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0206590 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006995C (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006D2FC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C006D450 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006D988 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0078D94 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     DwmSyncHitTestQuery @ 0x1C00CA230 (DwmSyncHitTestQuery.c)
 *     IsMessageOnlyWindow @ 0x1C00F1ED0 (IsMessageOnlyWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0149F9C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C016B5D8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdD @ 0x1C01E026C (WPP_RECORDER_AND_TRACE_SF_qdD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdDc @ 0x1C01E0368 (WPP_RECORDER_AND_TRACE_SF_qdDc.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdc @ 0x1C01E0484 (WPP_RECORDER_AND_TRACE_SF_qdc.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x1C01E0584 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddd @ 0x1C01E06A0 (WPP_RECORDER_AND_TRACE_SF_qdddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddd @ 0x1C01E07EC (WPP_RECORDER_AND_TRACE_SF_qddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdq @ 0x1C01E0944 (WPP_RECORDER_AND_TRACE_SF_qdq.c)
 *     SizeBoxHwnd @ 0x1C025A230 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxDCEWindowHitTestIndirect(
        struct tagWND *BugCheckParameter2,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagPOINT v4; // rdi
  struct tagWND *v5; // r14
  PDEVICE_OBJECT v6; // rcx
  bool v7; // r8
  char y; // si
  unsigned int v9; // eax
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v10; // rdx
  struct tagWND *v11; // r12
  int v12; // r8d
  struct tagPOINT v13; // rbx
  struct tagWND *v14; // rax
  int v15; // esi
  int v16; // r10d
  struct tagWND *v17; // rdx
  int v18; // r8d
  char v19; // si
  bool v20; // r10
  int v21; // r8d
  int v22; // r9d
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v23; // rcx
  struct tagWND *v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  bool v30; // r10
  __int128 *v31; // r15
  __int64 v32; // r12
  __int64 v33; // xmm1_8
  __int64 Prop; // r15
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r9d
  int v40; // r8d
  bool v41; // r15
  __int64 v42; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // edx
  int v48; // r8d
  int v49; // r9d
  int v50; // r8d
  _DWORD *v51; // rax
  int v52; // r9d
  unsigned __int16 v53; // ax
  _BYTE *v54; // rcx
  int v55; // edx
  int v56; // r11d
  struct tagWND *v58; // rcx
  int v59; // edx
  int v60; // r9d
  int v61; // edx
  int v62; // r8d
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // r15
  void *v66; // rsi
  __int64 v67; // rcx
  int v68; // edx
  int v69; // r8d
  int v70; // esi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  char v74; // al
  char v75; // al
  int v76; // r13d
  tagObjLock **v77; // r15
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // rax
  bool v81; // r10
  PDEVICE_OBJECT v82; // rcx
  __int16 v83; // r9
  int v84; // [rsp+20h] [rbp-E0h]
  int v85; // [rsp+28h] [rbp-D8h]
  int v86; // [rsp+30h] [rbp-D0h]
  int v87; // [rsp+38h] [rbp-C8h]
  int v88; // [rsp+70h] [rbp-90h]
  struct tagWND *v89; // [rsp+78h] [rbp-88h]
  struct tagPOINT v90; // [rsp+80h] [rbp-80h] BYREF
  char v91; // [rsp+88h] [rbp-78h]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v92; // [rsp+90h] [rbp-70h]
  struct tagPOINT v93; // [rsp+98h] [rbp-68h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-60h]
  unsigned int v95; // [rsp+A8h] [rbp-58h] BYREF
  int v96; // [rsp+ACh] [rbp-54h] BYREF
  struct tagPOINT v97; // [rsp+B0h] [rbp-50h]
  unsigned int v98; // [rsp+B8h] [rbp-48h]
  struct tagWND *v99; // [rsp+C0h] [rbp-40h]
  _QWORD v100[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v101; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v102; // [rsp+F0h] [rbp-10h]
  __int128 v103; // [rsp+F8h] [rbp-8h]
  __int64 v104; // [rsp+108h] [rbp+8h]
  __int64 v105; // [rsp+110h] [rbp+10h]
  char v106; // [rsp+118h] [rbp+18h]
  __int128 v107; // [rsp+120h] [rbp+20h] BYREF
  char v108; // [rsp+130h] [rbp+30h]
  char v109; // [rsp+138h] [rbp+38h]

  v92 = a4;
  v4 = a2;
  v91 = a3;
  v5 = BugCheckParameter2;
  v97 = a2;
  if ( BugCheckParameter2 )
  {
    v6 = WPP_GLOBAL_Control;
    LOBYTE(a2.x) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( LOBYTE(a2.x) || v7 )
    {
      y = v97.y;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2.x,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        27,
        11,
        (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
        *(_QWORD *)v5,
        v4.x,
        v97.y);
    }
    else
    {
      y = v97.y;
    }
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetCurrentThreadDpiAwarenessContext)(v6, a2);
    v10 = v92;
    v98 = v9;
    v93 = v4;
    if ( (*((_DWORD *)v92 + 8) & 4) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v93, &v93, v9, 0LL);
      LOBYTE(v61) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v62) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v61 || (_BYTE)v62 )
        WPP_RECORDER_AND_TRACE_SF_qdddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v61,
          v62,
          12,
          5,
          27,
          12,
          (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
          *(_QWORD *)v5,
          v4.x,
          y,
          v93.x,
          v93.y);
      v10 = v92;
    }
    v11 = (struct tagWND *)*((_QWORD *)v5 + 13);
    v12 = 0;
    v13 = v93;
    v14 = 0LL;
    v89 = 0LL;
    v94 = 4294967294LL;
    v15 = 0;
    v99 = v11;
    v16 = 0;
    v90 = v93;
    v88 = 0;
    while ( 1 )
    {
      if ( v15 )
      {
        if ( v15 > 2 )
        {
          if ( v15 != 3 )
          {
            v51 = (_DWORD *)*((_QWORD *)v10 + 3);
            v52 = v94;
            if ( v51 )
            {
              *v51 = v94;
              *((_BYTE *)v10 + 36) = 1;
            }
            v53 = v90.y;
            if ( v13.x != v93.x || v90.y != v93.y )
            {
              *((_BYTE *)v10 + 48) = 1;
              *((_QWORD *)v10 + 2) = (v53 << 16) | LOWORD(v13.x);
            }
            v54 = (_BYTE *)*((_QWORD *)v5 + 5);
            v55 = 17;
            v56 = 1;
            if ( (v54[26] & 0x40) != 0 )
              v12 = 1;
            if ( (v54[25] & 0x40) == 0 )
              v56 = 0;
            if ( v56 != v12 )
              v55 = 16;
            if ( v52 == v55 && (v54[30] & 4) == 0 )
            {
              v80 = SizeBoxHwnd(v5);
              LOBYTE(v16) = v88;
              if ( v80 )
                v5 = (struct tagWND *)v80;
            }
            LOBYTE(v55) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( (_BYTE)v55 || (_BYTE)v12 )
              WPP_RECORDER_AND_TRACE_SF_qdq(
                WPP_GLOBAL_Control->AttachedDevice,
                v55,
                v12,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v84,
                v85,
                36,
                v87,
                *(_QWORD *)v5,
                v16,
                *(_QWORD *)v5);
            return *(_QWORD *)v5;
          }
          if ( v5 == v14 || *((_QWORD *)v5 + 27) )
          {
            v58 = (struct tagWND *)*((_QWORD *)v5 + 13);
            v90 = v93;
            RestoreLogicalPoint(v58, &v90, (const struct _SUBPIXELS **)v10);
            LOBYTE(v59) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            v13 = v90;
            if ( (_BYTE)v59 || (_BYTE)v12 )
              WPP_RECORDER_AND_TRACE_SF_qddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v59,
                v12,
                v60,
                v84,
                v85,
                32,
                v87,
                *(_QWORD *)v5,
                v88,
                v90.x,
                v90.y);
            v16 = v88;
          }
          v17 = (struct tagWND *)*((_QWORD *)v5 + 11);
          v15 = 0;
          v14 = 0LL;
          v89 = 0LL;
          if ( v17 )
          {
            v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( v20 || (_BYTE)v12 )
            {
              WPP_RECORDER_AND_TRACE_SF_qdq(
                WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v12,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v84,
                v85,
                33,
                v87,
                *(_QWORD *)v5,
                v88,
                *(_QWORD *)v17);
              v17 = (struct tagWND *)*((_QWORD *)v5 + 11);
              v14 = 0LL;
            }
            v5 = v17;
            if ( *((struct tagWND **)v17 + 13) == v11 && v91 )
            {
              v81 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
              LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                         && LOWORD(WPP_GLOBAL_Control->DeviceType);
              if ( v81 || (_BYTE)v12 )
                WPP_RECORDER_AND_TRACE_SF_qd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v81,
                  v12,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  5,
                  27,
                  34,
                  (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
                  *(_QWORD *)v17,
                  v88);
              v5 = v11;
LABEL_250:
              LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qdd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v17,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  27,
                  37,
                  (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
                  *(_QWORD *)v5,
                  v4.x,
                  v97.y);
              return 0LL;
            }
            goto LABEL_34;
          }
          LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          if ( (_BYTE)v17 || (_BYTE)v12 )
          {
            WPP_RECORDER_AND_TRACE_SF_qdq(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v17,
              v12,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v84,
              v85,
              35,
              v87,
              *(_QWORD *)v5,
              v16,
              **((_QWORD **)v5 + 13));
            v16 = v88;
            v14 = 0LL;
          }
          v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
          v88 = --v16;
          v15 = 2;
LABEL_35:
          v12 = 0;
          goto LABEL_36;
        }
        v41 = (unsigned int)IsCompositionInputWindowForHitTest(v5) != 0;
        v95 = -2;
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v17 || (_BYTE)v40 )
        {
          v74 = 89;
          if ( v15 == 2 )
            v74 = 78;
          WPP_RECORDER_AND_TRACE_SF_qdc(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v17,
            v40,
            78,
            v84,
            v85,
            v86,
            v87,
            *(_QWORD *)v5,
            v88,
            v74);
        }
        if ( v41 || *((_QWORD *)v5 + 2) != gptiCurrent )
        {
          LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          if ( (_BYTE)v17 || (_BYTE)v40 )
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v17,
              v40,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              27,
              26,
              (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
              *(_QWORD *)v5,
              v88);
          LODWORD(v94) = 1;
        }
        else
        {
          if ( !(unsigned int)IsToplevelWindowDesktopComposed(v5)
            || (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 8) == 0
            || v15 == 2 )
          {
            goto LABEL_137;
          }
          v101 = 0LL;
          v102 = 0LL;
          ThreadLock((__int64)v5, (__int64 *)&v101);
          v65 = *(_QWORD *)v5;
          v66 = (void *)ReferenceDwmApiPort();
          v96 = 1;
          UserSessionSwitchLeaveCrit(v67);
          DwmSyncHitTestQuery(
            v66,
            *((_QWORD *)v92 + 1),
            (LOWORD(v90.y) << 16) | LOWORD(v13.x),
            -2,
            (__int64)&v95,
            (__int64)&v96);
          LOBYTE(v68) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v69) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          v70 = v96;
          v94 = v95;
          if ( (_BYTE)v68 || (_BYTE)v69 )
          {
            v75 = 70;
            if ( v96 )
              v75 = 84;
            WPP_RECORDER_AND_TRACE_SF_qdDc(
              WPP_GLOBAL_Control->AttachedDevice,
              v68,
              v69,
              v95,
              v84,
              v85,
              v86,
              v87,
              *(_QWORD *)v5,
              v88,
              v95,
              v75);
          }
          EnterCrit(1LL, 0LL);
          ThreadUnlock1(v72, v71, v73);
          if ( (struct tagWND *)HMValidateHandleNoSecure(v65, 1) != v5 )
          {
            v82 = WPP_GLOBAL_Control;
            LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v83 = 28;
LABEL_448:
              WPP_RECORDER_AND_TRACE_SF_qd(
                v82->AttachedDevice,
                (_DWORD)v17,
                v50,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                27,
                v83,
                (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
                *(_QWORD *)v5,
                v88);
              return 0LL;
            }
            return 0LL;
          }
          if ( !v70 )
          {
LABEL_137:
            v42 = *(_QWORD *)v5;
            v100[2] = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v100[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v100;
            v100[1] = v5;
            HMLockObject(v5);
            _InterlockedIncrement(&glSendMessage);
            v13 = v90;
            v94 = xxxSendTransformableMessageTimeout(
                    (unsigned __int64 *)v5,
                    0x84u,
                    0LL,
                    LOWORD(v90.x) | (LOWORD(v90.y) << 16),
                    0,
                    0,
                    0LL,
                    1,
                    0);
            ThreadUnlock1(v45, v44, v46);
            LOBYTE(v47) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( (_BYTE)v47 || (_BYTE)v48 )
              WPP_RECORDER_AND_TRACE_SF_qdD(
                WPP_GLOBAL_Control->AttachedDevice,
                v47,
                v48,
                v49,
                v84,
                v85,
                v86,
                v87,
                *(_QWORD *)v5,
                v88,
                v94);
            if ( (struct tagWND *)HMValidateHandleNoSecure(v42, 1) != v5 )
            {
              v82 = WPP_GLOBAL_Control;
              LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v83 = 30;
                goto LABEL_448;
              }
              return 0LL;
            }
          }
          if ( (_DWORD)v94 == -1 )
          {
            LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( (_BYTE)v17 || (_BYTE)v50 )
              WPP_RECORDER_AND_TRACE_SF_qd(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v17,
                v50,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                5,
                27,
                31,
                (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
                *(_QWORD *)v5,
                v88);
            goto LABEL_32;
          }
        }
        v15 = 4;
        goto LABEL_33;
      }
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v10 || (_BYTE)v12 )
        WPP_RECORDER_AND_TRACE_SF_qd(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v10,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          5,
          27,
          13,
          (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
          *(_QWORD *)v5,
          v16);
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v5) )
      {
        v19 = 1;
        if ( (*((_DWORD *)v92 + 8) & 8) == 0
          || !(unsigned int)IsMessageOnlyWindow(v5) && (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) == 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
          {
            LOBYTE(v17) = 0;
          }
          else
          {
            LODWORD(v17) = 1;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v18 = 1;
          }
          else
          {
            LOBYTE(v18) = 0;
          }
          if ( (_BYTE)v17 || (_BYTE)v18 )
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v17,
              v18,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              27,
              14,
              (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
              *(_QWORD *)v5,
              v88);
          goto LABEL_32;
        }
      }
      else
      {
        v19 = 0;
        if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) == 0 )
        {
          LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          if ( (_BYTE)v17 || (_BYTE)v18 )
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v17,
              v18,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              27,
              15,
              (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
              *(_QWORD *)v5,
              v88);
          goto LABEL_32;
        }
      }
      if ( GetWindowCloakState(v5) )
      {
        if ( !v5 || (*((_DWORD *)v5 + 80) & 0x1000) == 0 )
          goto LABEL_453;
        v31 = (__int128 *)*((_QWORD *)v5 + 18);
        v32 = CoreWindowProp::s_atom;
        v105 = gDomainDummyLock;
        v106 = 0;
        v107 = 0LL;
        v108 = 0;
        v33 = *((_QWORD *)v31 + 2);
        v103 = *v31;
        v109 = 0;
        v104 = v33;
        if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
        {
          v109 = 1;
          if ( v31 == (__int128 *)gObjDummyLock )
            v31 = 0LL;
          *(_QWORD *)&v107 = v31;
          if ( !v108 )
          {
            v76 = 0;
            v77 = (tagObjLock **)&v107;
            do
            {
              if ( *v77 )
                tagObjLock::LockExclusive(*v77);
              ++v76;
              ++v77;
            }
            while ( !v76 );
            v108 = 1;
          }
        }
        Prop = RealGetProp(*((_QWORD *)v5 + 18), v32, 1LL);
        if ( v109 && v108 )
        {
          if ( (_QWORD)v107 )
            tagObjLock::UnLockExclusive((tagObjLock *)v107);
          v108 = 0;
        }
        v11 = v99;
        if ( !Prop || !*(_DWORD *)(Prop + 28) )
        {
LABEL_453:
          if ( !(unsigned int)IsWindowHolographicForHitTest(v5) )
          {
            LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( (_BYTE)v17 || (_BYTE)v21 )
              WPP_RECORDER_AND_TRACE_SF_qd(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v17,
                v21,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                5,
                27,
                16,
                (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
                *(_QWORD *)v5,
                v88);
            goto LABEL_32;
          }
        }
      }
      v23 = v92;
      if ( (*((_DWORD *)v92 + 8) & 4) == 0 )
        goto LABEL_58;
      v35 = *((_QWORD *)v5 + 13);
      if ( !v35 )
        goto LABEL_58;
      v36 = *((_QWORD *)v5 + 3);
      if ( !v36 )
        goto LABEL_58;
      v37 = *(_QWORD *)(v36 + 8);
      if ( !v37
        || v35 != *(_QWORD *)(v37 + 24)
        || (((unsigned __int16)(v98 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
      {
        break;
      }
      LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v35 || (_BYTE)v21 )
        WPP_RECORDER_AND_TRACE_SF_qddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v35,
          v21,
          v22,
          v84,
          v85,
          v86,
          v87,
          *(_QWORD *)v5,
          v88,
          v13.x,
          v90.y,
          v4.x,
          v97.y);
      v23 = v92;
      v13 = v4;
      v24 = v5;
      v90 = v4;
      v89 = v5;
LABEL_59:
      if ( !v19 )
      {
        v17 = (struct tagWND *)*((_QWORD *)v5 + 27);
        if ( !v17 || v5 == v24 )
        {
          v25 = (_DWORD *)*((_QWORD *)v5 + 5);
          if ( v13.x < v25[22] || v13.x >= v25[24] || v13.y < v25[23] || v13.y >= v25[25] )
          {
            LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( (_BYTE)v17 || (_BYTE)v21 )
              WPP_RECORDER_AND_TRACE_SF_qddd(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v17,
                v21,
                v22,
                v84,
                v85,
                18,
                v87,
                *(_QWORD *)v5,
                v88,
                v13.x,
                v90.y);
            goto LABEL_32;
          }
        }
        else
        {
          if ( !DCEHitTestWindow(
                  (const struct tagRECT *)(*((_QWORD *)v5 + 5) + 88LL),
                  (const struct _D3DMATRIX *)v17,
                  &v90,
                  *((const struct _SUBPIXELS **)v23 + 5)) )
          {
            LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v78) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            v13 = v90;
            if ( (_BYTE)v17 || (_BYTE)v78 )
              WPP_RECORDER_AND_TRACE_SF_qddd(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v17,
                v78,
                v79,
                v84,
                v85,
                19,
                v87,
                *(_QWORD *)v5,
                v88,
                v90.x,
                v90.y);
            goto LABEL_32;
          }
          v13 = v90;
        }
      }
      v26 = *(_QWORD *)(*((_QWORD *)v5 + 5) + 168LL);
      if ( v26 && !(unsigned int)GrePtInRegion(v26, (unsigned int)v13.x, (unsigned int)v90.y) )
      {
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v63) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v17 || (_BYTE)v63 )
          WPP_RECORDER_AND_TRACE_SF_qddd(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v17,
            v63,
            v64,
            v84,
            v85,
            20,
            v87,
            *(_QWORD *)v5,
            v88,
            v13.x,
            v90.y);
        goto LABEL_32;
      }
      v27 = *((_QWORD *)v5 + 5);
      if ( (*(_BYTE *)(v27 + 26) & 8) != 0 && (*(_DWORD *)(v27 + 232) & 2) == 0 && !DCELayerHitTest(v5, v13) )
      {
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v17 || (_BYTE)v38 )
          WPP_RECORDER_AND_TRACE_SF_qddd(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v17,
            v38,
            v39,
            v84,
            v85,
            21,
            v87,
            *(_QWORD *)v5,
            v88,
            v13.x,
            v90.y);
        goto LABEL_32;
      }
      if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v5) && (*((_DWORD *)v92 + 8) & 1) != 0 )
      {
        if ( v19 || (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0xC0) != 0x40 )
        {
          LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          if ( (_BYTE)v17 || (_BYTE)v28 )
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v17,
              v28,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              27,
              23,
              (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
              *(_QWORD *)v5,
              v88);
          v15 = 4;
LABEL_33:
          v14 = v89;
LABEL_34:
          v16 = v88;
          goto LABEL_35;
        }
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v17 || (_BYTE)v28 )
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v17,
            v28,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            27,
            22,
            (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids,
            *(_QWORD *)v5,
            v88);
LABEL_32:
        v15 = 3;
        goto LABEL_33;
      }
      if ( v19
        || (v29 = *((_QWORD *)v5 + 5), (*(_BYTE *)(v29 + 31) & 0x20) != 0)
        || v13.x < *(_DWORD *)(v29 + 104)
        || v13.x >= *(_DWORD *)(v29 + 112)
        || v13.y < *(_DWORD *)(v29 + 108)
        || v13.y >= *(_DWORD *)(v29 + 116) )
      {
        v15 = 1;
        goto LABEL_33;
      }
      v17 = (struct tagWND *)*((_QWORD *)v5 + 14);
      if ( !v17 )
      {
        v15 = 2;
        goto LABEL_33;
      }
      v30 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( v30 || (_BYTE)v28 )
      {
        WPP_RECORDER_AND_TRACE_SF_qdq(
          WPP_GLOBAL_Control->AttachedDevice,
          v30,
          v28,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v84,
          v85,
          24,
          v87,
          *(_QWORD *)v5,
          v88,
          *(_QWORD *)v17);
        v17 = (struct tagWND *)*((_QWORD *)v5 + 14);
      }
      v12 = 0;
      v14 = v89;
      v16 = ++v88;
      v5 = v17;
      v15 = 0;
LABEL_36:
      if ( v5 == v11 )
        goto LABEL_250;
      v10 = v92;
    }
    v23 = v92;
LABEL_58:
    v24 = v89;
    goto LABEL_59;
  }
  LOBYTE(a2.x) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( LOBYTE(a2.x) || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2.x,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      10,
      4,
      27,
      10,
      (__int64)&WPP_322180384a9c33d799574c6b9f9446f8_Traceguids);
  return 0LL;
}
