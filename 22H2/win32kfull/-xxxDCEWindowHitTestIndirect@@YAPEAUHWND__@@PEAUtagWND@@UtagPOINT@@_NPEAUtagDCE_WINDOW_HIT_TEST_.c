/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240
 * Callers:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C008C58C (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E5C0C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00423D8 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00424C0 (IsMessageOnlyWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x1C00A2C00 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00AB558 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00D0A80 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0121E78 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122140 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01513E8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddds @ 0x1C01BA440 (WPP_RECORDER_AND_TRACE_SF_ddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C01BA5D0 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x1C01BA6CC (WPP_RECORDER_AND_TRACE_SF_ddqd.c)
 *     SizeBoxHwnd @ 0x1C024B7D0 (SizeBoxHwnd.c)
 *     DwmSyncHitTestQuery @ 0x1C026E030 (DwmSyncHitTestQuery.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v4; // r12
  struct tagWND *v6; // r14
  int v7; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  struct tagWND *v12; // rdx
  struct tagPOINT v13; // rbx
  char v14; // r13
  __int64 v15; // r15
  int v16; // esi
  struct tagWND *v17; // r8
  _DWORD *v18; // rax
  unsigned __int16 y; // r9
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  char v22; // dl
  struct tagWND **v23; // r15
  struct tagWND *v24; // rcx
  char v25; // dl
  int v26; // edx
  int v27; // r8d
  char v28; // r15
  char v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rcx
  void *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // edx
  int v42; // r8d
  int v43; // esi
  const char *v44; // rax
  char v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  int v51; // r8d
  char v52; // r8
  const char *v53; // rax
  char v54; // r13
  int v55; // eax
  __int128 *v56; // rsi
  __int64 v57; // r12
  __int64 v58; // xmm1_8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // r15d
  tagObjLock **v64; // rsi
  __int64 Prop; // rsi
  const struct _D3DMATRIX *v66; // rdx
  bool v67; // al
  __int64 v68; // rcx
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rcx
  char v73; // dl
  char v74; // dl
  int v75; // [rsp+20h] [rbp-E0h]
  int v76; // [rsp+28h] [rbp-D8h]
  int v77; // [rsp+28h] [rbp-D8h]
  int v78; // [rsp+30h] [rbp-D0h]
  int v79; // [rsp+30h] [rbp-D0h]
  int v80; // [rsp+38h] [rbp-C8h]
  int v81; // [rsp+38h] [rbp-C8h]
  __int64 v82; // [rsp+40h] [rbp-C0h]
  __int64 v83; // [rsp+48h] [rbp-B8h]
  __int64 v84; // [rsp+50h] [rbp-B0h]
  char v85; // [rsp+60h] [rbp-A0h]
  struct tagWND *v86; // [rsp+68h] [rbp-98h]
  struct tagWND *v87; // [rsp+70h] [rbp-90h]
  struct tagPOINT v89; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v92; // [rsp+98h] [rbp-68h]
  unsigned int v93; // [rsp+A0h] [rbp-60h] BYREF
  int v94; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v95; // [rsp+A8h] [rbp-58h]
  __int128 v96; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-40h]
  __int128 v98; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v99; // [rsp+D8h] [rbp-28h]
  __int128 v100; // [rsp+E0h] [rbp-20h]
  __int64 v101; // [rsp+F0h] [rbp-10h]
  __int64 v102; // [rsp+F8h] [rbp-8h]
  char v103; // [rsp+100h] [rbp+0h]
  __int128 v104; // [rsp+108h] [rbp+8h] BYREF
  char v105; // [rsp+118h] [rbp+18h]
  char v106; // [rsp+120h] [rbp+20h]

  v92 = a4;
  v4 = a4;
  v6 = a1;
  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    v95 = CurrentThreadDpiAwarenessContext;
    v11 = *((_DWORD *)v4 + 8);
    v90 = a2;
    if ( (v11 & 4) != 0 )
      LogicalToPhysicalDPIPoint(&v90, &v90, CurrentThreadDpiAwarenessContext, 0LL);
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v7 || (_BYTE)v9 )
    {
      v84 = *(_QWORD *)v6;
      LODWORD(v83) = v90.y;
      WPP_RECORDER_AND_TRACE_SF_ddq(WPP_GLOBAL_Control->AttachedDevice, v7, v9, v10);
    }
    v12 = (struct tagWND *)*((_QWORD *)v6 + 13);
    v13 = v90;
    v14 = 0;
    LODWORD(v15) = -2;
    v85 = 0;
    v91 = 4294967294LL;
    v16 = 0;
    v87 = v12;
    v17 = 0LL;
    v89 = v90;
    v86 = 0LL;
    while ( 1 )
    {
      if ( !v16 )
      {
        if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
        {
          v54 = 1;
          if ( (*((_DWORD *)v4 + 8) & 8) != 0 )
          {
            LOBYTE(v55) = IsMessageOnlyWindow((__int64)v6);
            if ( !v55 )
              goto LABEL_109;
            goto LABEL_112;
          }
        }
        else
        {
          v54 = 0;
LABEL_109:
          if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) != 0 )
          {
LABEL_112:
            if ( (unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v6) )
            {
              if ( !v6 || (*((_DWORD *)v6 + 80) & 0x1000) == 0 )
                goto LABEL_132;
              v56 = (__int128 *)*((_QWORD *)v6 + 18);
              v57 = CoreWindowProp::s_atom;
              v102 = gDomainDummyLock;
              v103 = 0;
              v104 = 0LL;
              v105 = 0;
              v58 = *((_QWORD *)v56 + 2);
              v100 = *v56;
              v106 = 0;
              v101 = v58;
              if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v60, v59, v61, v62) )
              {
                v106 = 1;
                if ( v56 == (__int128 *)gObjDummyLock )
                  v56 = 0LL;
                *(_QWORD *)&v104 = v56;
                if ( !v105 )
                {
                  v63 = 0;
                  v64 = (tagObjLock **)&v104;
                  do
                  {
                    if ( *v64 )
                      tagObjLock::LockExclusive(*v64);
                    ++v63;
                    ++v64;
                  }
                  while ( !v63 );
                  LODWORD(v15) = v91;
                  v105 = 1;
                }
              }
              Prop = RealGetProp(*((_QWORD *)v6 + 18), v57, 1LL);
              if ( v106 && v105 )
              {
                if ( (_QWORD)v104 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v104);
                v105 = 0;
              }
              v4 = v92;
              if ( !Prop || !*(_DWORD *)(Prop + 28) )
              {
LABEL_132:
                if ( !(unsigned int)IsWindowHolographicForHitTest(v6) )
                  goto LABEL_110;
              }
            }
            if ( (*((_DWORD *)v4 + 8) & 4) != 0
              && (unsigned int)IsTopLevelWindow(v6)
              && (((unsigned __int16)(v95 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
            {
              v13 = a2;
              v86 = v6;
              v89 = a2;
              v17 = v6;
            }
            else
            {
              v17 = v86;
            }
            if ( !v54 )
            {
              v66 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
              if ( !v66 || v6 == v17 )
              {
                v70 = (_DWORD *)*((_QWORD *)v6 + 5);
                if ( v13.x < v70[22] || v13.x >= v70[24] || v13.y < v70[23] || v13.y >= v70[25] )
                {
                  v14 = v85;
                  v16 = 3;
                  v12 = v87;
                  goto LABEL_41;
                }
              }
              else
              {
                v67 = DCEHitTestWindow(
                        (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
                        v66,
                        &v89,
                        *((const struct _SUBPIXELS **)v4 + 5));
                v13 = v89;
                if ( !v67 )
                  goto LABEL_110;
              }
            }
            v68 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
            if ( !v68 || (unsigned int)GrePtInRegion(v68, (unsigned int)v13.x, (unsigned int)v89.y) )
            {
              v69 = *((_QWORD *)v6 + 5);
              if ( (*(_BYTE *)(v69 + 26) & 8) == 0 || (*(_DWORD *)(v69 + 232) & 2) != 0 || DCELayerHitTest(v6, v13) )
              {
                if ( !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6) || (*((_DWORD *)v4 + 8) & 1) == 0 )
                {
                  if ( v54
                    || (v71 = *((_QWORD *)v6 + 5), (*(_BYTE *)(v71 + 31) & 0x20) != 0)
                    || v13.x < *(_DWORD *)(v71 + 104)
                    || v13.x >= *(_DWORD *)(v71 + 112)
                    || v13.y < *(_DWORD *)(v71 + 108)
                    || v13.y >= *(_DWORD *)(v71 + 116) )
                  {
                    v17 = v86;
                    v16 = 1;
                    v14 = v85;
                    v12 = v87;
                  }
                  else
                  {
                    v17 = v86;
                    v14 = v85;
                    v12 = v87;
                    if ( *((_QWORD *)v6 + 14) )
                    {
                      v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                      v16 = 0;
                    }
                    else
                    {
                      v16 = 2;
                    }
                  }
                  goto LABEL_41;
                }
                if ( v54 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
                {
                  v17 = v86;
                  v16 = 4;
                  v14 = v85;
                  v12 = v87;
                  goto LABEL_41;
                }
              }
            }
          }
        }
LABEL_110:
        v17 = v86;
        v16 = 3;
        v14 = v85;
        v12 = v87;
        goto LABEL_41;
      }
      if ( v16 != 1 && v16 != 2 )
      {
        if ( v16 != 3 )
        {
          v18 = (_DWORD *)*((_QWORD *)v4 + 3);
          if ( v18 )
          {
            *v18 = v15;
            *((_BYTE *)v4 + 36) = 1;
          }
          y = v89.y;
          if ( __PAIR64__(v89.y, v13.x) != v90 )
          {
            *((_BYTE *)v4 + 48) = 1;
            *((_QWORD *)v4 + 2) = LOWORD(v13.x) | (y << 16);
          }
          v20 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
          if ( (_DWORD)v15 == (((v20[25] ^ (unsigned int)(unsigned __int8)~v20[26]) >> 6) & 1) + 16
            && (v20[30] & 4) == 0 )
          {
            v21 = SizeBoxHwnd(v6);
            if ( v21 )
              v6 = (struct tagWND *)v21;
          }
          v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_qddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v22,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
              v75,
              0xFu,
              0x11u,
              (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids);
          return *(HWND *)v6;
        }
        if ( *((_QWORD *)v6 + 27) || v6 == v17 )
        {
          v23 = (struct tagWND **)((char *)v6 + 104);
          v24 = (struct tagWND *)*((_QWORD *)v6 + 13);
          v89 = v90;
          RestoreLogicalPoint(v24, &v89, (const struct _SUBPIXELS **)v4);
          v12 = v87;
          v13 = v89;
        }
        else
        {
          v23 = (struct tagWND **)((char *)v6 + 104);
        }
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
        v17 = 0LL;
        v86 = 0LL;
        if ( v6 )
        {
          v16 = 0;
          if ( *((struct tagWND **)v6 + 13) == v12 && a3 )
          {
LABEL_42:
            v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v83) = v90.y;
              LODWORD(v82) = v90.x;
              WPP_RECORDER_AND_TRACE_SF_dd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v25,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gFullLog,
                4u,
                0xFu,
                0x12u,
                (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
                v82,
                v83,
                v84);
            }
            return 0LL;
          }
        }
        else
        {
          v6 = *v23;
          v16 = 2;
        }
        LODWORD(v15) = v91;
        goto LABEL_41;
      }
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
        break;
      v28 = 0;
      v93 = -2;
      if ( *((_QWORD *)v6 + 2) != gptiCurrent )
        goto LABEL_49;
      if ( !(unsigned int)IsTopLevelWindow(v6)
        || !(unsigned int)IsWindowDesktopComposed(v30)
        || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
        || v16 == 2 )
      {
        goto LABEL_75;
      }
      v96 = 0LL;
      v97 = 0LL;
      ThreadLock(v6, &v96);
      v32 = (void *)ReferenceDwmApiPort(v31);
      v94 = 1;
      UserSessionSwitchLeaveCrit(v34, v33, v35, v36);
      v37 = v89.y;
      DwmSyncHitTestQuery(
        v32,
        *((_QWORD *)v92 + 1),
        (LOWORD(v89.y) << 16) | LOWORD(v13.x),
        -2,
        (__int64)&v93,
        (__int64)&v94);
      EnterCrit(1LL, 0LL);
      if ( !ThreadUnlock1(v39, v38, v40) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
      {
        v73 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v73,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            13LL,
            3u,
            0xFu,
            0xDu,
            (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
            *(_QWORD *)v6,
            v83,
            v84);
        return 0LL;
      }
      LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      LODWORD(v15) = v93;
      v43 = v94;
      v91 = v93;
      if ( (_BYTE)v41 || (_BYTE)v42 )
      {
        v44 = "no";
        if ( !v94 )
          v44 = "yes";
        WPP_RECORDER_AND_TRACE_SF_ddds(
          WPP_GLOBAL_Control->AttachedDevice,
          v41,
          v42,
          (unsigned int)"yes",
          v75,
          v76,
          v78,
          v80,
          v13.x,
          v37,
          v93,
          (__int64)v44);
      }
      if ( !v43 )
      {
LABEL_75:
        v98 = 0LL;
        v99 = 0LL;
        ThreadLock(v6, &v98);
        _InterlockedIncrement(&glSendMessage);
        v45 = v89.y;
        v13 = v89;
        v15 = xxxSendTransformableMessageTimeout((ULONG_PTR)v6, 0, 0, 0LL, 1, 0);
        v91 = v15;
        if ( !ThreadUnlock1(v47, v46, v48) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
        {
          v74 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v74,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              v49,
              3u,
              0xFu,
              0xFu,
              (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
              *(_QWORD *)v6,
              v83,
              v84);
          return 0LL;
        }
        LOBYTE(v50) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v50 || (_BYTE)v51 )
          WPP_RECORDER_AND_TRACE_SF_ddqd(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            v51,
            v49,
            v75,
            v77,
            v79,
            v81,
            v13.x,
            v45,
            *(_QWORD *)v6,
            v15);
      }
      v4 = v92;
      v17 = v86;
      v12 = v87;
      if ( (_DWORD)v15 == -1 )
      {
        v14 = 1;
        v16 = 3;
        v85 = 1;
      }
      else
      {
        v16 = 4;
      }
LABEL_41:
      if ( v6 == v12 )
        goto LABEL_42;
    }
    v28 = 1;
LABEL_49:
    v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( v29 || v52 )
    {
      v53 = "composition input window";
      if ( !v28 )
        v53 = "other thread";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v29,
        v52,
        (__int64)gFullLog,
        5u,
        0xFu,
        0xBu,
        (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
        v53);
    }
    if ( !v28 && v14 && (*((_DWORD *)v4 + 8) & 0x10) != 0 )
    {
      LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          (unsigned int)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
          3,
          15,
          12,
          (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids);
      }
      return 0LL;
    }
    v17 = v86;
    LODWORD(v15) = 1;
    v12 = v87;
    v91 = 1LL;
    v16 = 4;
    goto LABEL_41;
  }
  return 0LL;
}
