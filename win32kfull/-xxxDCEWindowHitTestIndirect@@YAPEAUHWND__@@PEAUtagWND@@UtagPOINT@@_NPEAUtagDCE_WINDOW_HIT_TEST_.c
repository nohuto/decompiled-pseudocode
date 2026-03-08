/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C00D6C0C (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E6CBC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00468F4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0049F70 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     IsMessageOnlyWindow @ 0x1C00967C0 (IsMessageOnlyWindow.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00A2FC8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x1C00D90B8 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00E3758 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage @ 0x1C012D678 (Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01446E8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddds @ 0x1C01BB5E0 (WPP_RECORDER_AND_TRACE_SF_ddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C01BB770 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x1C01BB86C (WPP_RECORDER_AND_TRACE_SF_ddqd.c)
 *     SizeBoxHwnd @ 0x1C024E490 (SizeBoxHwnd.c)
 *     DwmSyncHitTestQuery @ 0x1C0270AE0 (DwmSyncHitTestQuery.c)
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
  struct tagWND **v22; // r15
  struct tagWND *v23; // rcx
  char v24; // r15
  char v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // rsi
  __int64 v29; // rcx
  char v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // edx
  int v35; // r8d
  int v36; // esi
  const char *v37; // rax
  char v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // edx
  int v43; // r8d
  int v44; // r9d
  int IsEnabledDeviceUsage; // eax
  char v46; // r8
  const char *v47; // rax
  int v48; // edx
  int v49; // r8d
  char v50; // r13
  __int128 *v51; // rsi
  __int64 v52; // r12
  __int64 v53; // xmm1_8
  __int64 v54; // rcx
  int v55; // r15d
  tagObjLock **v56; // rsi
  __int64 Prop; // rsi
  const struct _D3DMATRIX *v58; // rdx
  bool v59; // al
  __int64 v60; // rcx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  __int64 v63; // rcx
  char v65; // dl
  char v66; // dl
  int v67; // [rsp+20h] [rbp-E0h]
  int v68; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+28h] [rbp-D8h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+30h] [rbp-D0h]
  int v72; // [rsp+38h] [rbp-C8h]
  int v73; // [rsp+38h] [rbp-C8h]
  __int64 v74; // [rsp+48h] [rbp-B8h]
  __int64 v75; // [rsp+50h] [rbp-B0h]
  char v76; // [rsp+60h] [rbp-A0h]
  struct tagWND *v77; // [rsp+68h] [rbp-98h]
  struct tagWND *v78; // [rsp+70h] [rbp-90h]
  struct tagPOINT v80; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v81; // [rsp+88h] [rbp-78h] BYREF
  __int64 v82; // [rsp+90h] [rbp-70h]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v83; // [rsp+98h] [rbp-68h]
  unsigned int v84; // [rsp+A0h] [rbp-60h] BYREF
  int v85; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v86; // [rsp+A8h] [rbp-58h]
  __int128 v87; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v88; // [rsp+C0h] [rbp-40h]
  __int128 v89; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-28h]
  __int128 v91; // [rsp+E0h] [rbp-20h]
  __int64 v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+F8h] [rbp-8h]
  char v94; // [rsp+100h] [rbp+0h]
  __int128 v95; // [rsp+108h] [rbp+8h] BYREF
  char v96; // [rsp+118h] [rbp+18h]
  char v97; // [rsp+120h] [rbp+20h]

  v83 = a4;
  v4 = a4;
  v6 = a1;
  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    v86 = CurrentThreadDpiAwarenessContext;
    v11 = *((_DWORD *)v4 + 8);
    v81 = a2;
    if ( (v11 & 4) != 0 )
      LogicalToPhysicalDPIPoint(&v81, &v81, CurrentThreadDpiAwarenessContext, 0LL);
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v7 || (_BYTE)v9 )
    {
      v75 = *(_QWORD *)v6;
      LODWORD(v74) = v81.y;
      WPP_RECORDER_AND_TRACE_SF_ddq(WPP_GLOBAL_Control->AttachedDevice, v7, v9, v10);
    }
    v12 = (struct tagWND *)*((_QWORD *)v6 + 13);
    v13 = v81;
    v14 = 0;
    LODWORD(v15) = -2;
    v76 = 0;
    v82 = 4294967294LL;
    v16 = 0;
    v78 = v12;
    v17 = 0LL;
    v80 = v81;
    v77 = 0LL;
    while ( 1 )
    {
      if ( !v16 )
      {
        if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
        {
          v50 = 1;
          if ( (*((_DWORD *)v4 + 8) & 8) != 0 )
          {
            if ( !(unsigned int)IsMessageOnlyWindow(v6) )
              goto LABEL_112;
            goto LABEL_115;
          }
        }
        else
        {
          v50 = 0;
LABEL_112:
          if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) != 0 )
          {
LABEL_115:
            if ( (unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v6) )
            {
              if ( !v6 || (*((_DWORD *)v6 + 80) & 0x1000) == 0 )
                goto LABEL_135;
              v51 = (__int128 *)*((_QWORD *)v6 + 18);
              v52 = CoreWindowProp::s_atom;
              v93 = gDomainDummyLock;
              v94 = 0;
              v95 = 0LL;
              v96 = 0;
              v53 = *((_QWORD *)v51 + 2);
              v91 = *v51;
              v97 = 0;
              v92 = v53;
              if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v54) )
              {
                v97 = 1;
                if ( v51 == (__int128 *)gObjDummyLock )
                  v51 = 0LL;
                *(_QWORD *)&v95 = v51;
                if ( !v96 )
                {
                  v55 = 0;
                  v56 = (tagObjLock **)&v95;
                  do
                  {
                    if ( *v56 )
                      tagObjLock::LockExclusive(*v56);
                    ++v55;
                    ++v56;
                  }
                  while ( !v55 );
                  LODWORD(v15) = v82;
                  v96 = 1;
                }
              }
              Prop = RealGetProp(*((_QWORD *)v6 + 18), v52, 1LL);
              if ( v97 && v96 )
              {
                if ( (_QWORD)v95 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v95);
                v96 = 0;
              }
              v4 = v83;
              if ( !Prop || !*(_DWORD *)(Prop + 28) )
              {
LABEL_135:
                if ( !(unsigned int)IsWindowHolographicForHitTest(v6) )
                  goto LABEL_113;
              }
            }
            if ( (*((_DWORD *)v4 + 8) & 4) != 0
              && (unsigned int)IsTopLevelWindow(v6)
              && (((unsigned __int16)(v86 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
            {
              v13 = a2;
              v77 = v6;
              v80 = a2;
              v17 = v6;
            }
            else
            {
              v17 = v77;
            }
            if ( !v50 )
            {
              v58 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
              if ( !v58 || v6 == v17 )
              {
                v62 = (_DWORD *)*((_QWORD *)v6 + 5);
                if ( v13.x < v62[22] || v13.x >= v62[24] || v13.y < v62[23] || v13.y >= v62[25] )
                {
                  v14 = v76;
                  v16 = 3;
                  v12 = v78;
                  goto LABEL_41;
                }
              }
              else
              {
                v59 = DCEHitTestWindow(
                        (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
                        v58,
                        &v80,
                        *((const struct _SUBPIXELS **)v4 + 5));
                v13 = v80;
                if ( !v59 )
                  goto LABEL_113;
              }
            }
            v60 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
            if ( !v60 || (unsigned int)GrePtInRegion(v60, (unsigned int)v13.x, (unsigned int)v80.y) )
            {
              v61 = *((_QWORD *)v6 + 5);
              if ( (*(_BYTE *)(v61 + 26) & 8) == 0 || (*(_DWORD *)(v61 + 232) & 2) != 0 || DCELayerHitTest(v6, v13) )
              {
                if ( !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6) || (*((_DWORD *)v4 + 8) & 1) == 0 )
                {
                  if ( v50
                    || (v63 = *((_QWORD *)v6 + 5), (*(_BYTE *)(v63 + 31) & 0x20) != 0)
                    || v13.x < *(_DWORD *)(v63 + 104)
                    || v13.x >= *(_DWORD *)(v63 + 112)
                    || v13.y < *(_DWORD *)(v63 + 108)
                    || v13.y >= *(_DWORD *)(v63 + 116) )
                  {
                    v17 = v77;
                    v16 = 1;
                    v14 = v76;
                    v12 = v78;
                  }
                  else
                  {
                    v17 = v77;
                    v14 = v76;
                    v12 = v78;
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
                if ( v50 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
                {
                  v17 = v77;
                  v16 = 4;
                  v14 = v76;
                  v12 = v78;
                  goto LABEL_41;
                }
              }
            }
          }
        }
LABEL_113:
        v17 = v77;
        v16 = 3;
        v14 = v76;
        v12 = v78;
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
          y = v80.y;
          if ( __PAIR64__(v80.y, v13.x) != v81 )
          {
            *((_BYTE *)v4 + 48) = 1;
            *((_QWORD *)v4 + 2) = LOWORD(v13.x) | (y << 16);
          }
          v20 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
          if ( (_DWORD)v15 == (((v20[25] ^ (unsigned int)(unsigned __int8)~v20[26]) >> 6) & 1) + 16
            && (v20[30] & 4) == 0 )
          {
            v21 = SizeBoxHwnd(v6, v20, v17);
            LOBYTE(y) = v80.y;
            if ( v21 )
              v6 = (struct tagWND *)v21;
          }
          LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qddd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v20,
              (_DWORD)v17,
              (unsigned int)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
              v67,
              27,
              17,
              (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
              *(_QWORD *)v6,
              v13.x,
              y,
              v15);
          }
          return *(HWND *)v6;
        }
        if ( *((_QWORD *)v6 + 27) || v6 == v17 )
        {
          v22 = (struct tagWND **)((char *)v6 + 104);
          v23 = (struct tagWND *)*((_QWORD *)v6 + 13);
          v80 = v81;
          RestoreLogicalPoint(v23, &v80, v4);
          v12 = v78;
          v13 = v80;
        }
        else
        {
          v22 = (struct tagWND **)((char *)v6 + 104);
        }
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
        v17 = 0LL;
        v77 = 0LL;
        if ( v6 )
        {
          v16 = 0;
          if ( *((struct tagWND **)v6 + 13) == v12 && a3 )
          {
LABEL_42:
            LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dd(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v12,
                (_DWORD)v17,
                (_DWORD)gFullLog,
                4,
                27,
                18,
                (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
                v81.x,
                v81.y);
            }
            return 0LL;
          }
        }
        else
        {
          v6 = *v22;
          v16 = 2;
        }
        LODWORD(v15) = v82;
        goto LABEL_41;
      }
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
        break;
      v24 = 0;
      v84 = -2;
      if ( *((_QWORD *)v6 + 2) != gptiCurrent )
        goto LABEL_49;
      if ( !(unsigned int)IsTopLevelWindow(v6)
        || !(unsigned int)IsWindowDesktopComposed(v26)
        || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
        || v16 == 2 )
      {
        goto LABEL_75;
      }
      v87 = 0LL;
      v88 = 0LL;
      ThreadLock(v6, &v87);
      v28 = (void *)ReferenceDwmApiPort(v27);
      v85 = 1;
      UserSessionSwitchLeaveCrit(v29);
      v30 = v80.y;
      DwmSyncHitTestQuery(
        v28,
        *((_QWORD *)v83 + 1),
        (LOWORD(v80.y) << 16) | LOWORD(v13.x),
        -2,
        (__int64)&v84,
        (__int64)&v85);
      EnterCrit(1LL, 0LL);
      if ( !ThreadUnlock1(v32, v31, v33) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
      {
        v65 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v65,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            13LL,
            3u,
            0x1Bu,
            0xDu,
            (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
            *(_QWORD *)v6,
            v74,
            v75);
        return 0LL;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
      {
        LOBYTE(v34) = 0;
      }
      else
      {
        v34 = 1;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v35) = 0;
      else
        v35 = 1;
      LODWORD(v15) = v84;
      v36 = v85;
      v82 = v84;
      if ( (_BYTE)v34 || (_BYTE)v35 )
      {
        v37 = "no";
        if ( !v85 )
          v37 = "yes";
        WPP_RECORDER_AND_TRACE_SF_ddds(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          v35,
          (unsigned int)"yes",
          v67,
          v68,
          v70,
          v72,
          v13.x,
          v30,
          v84,
          (__int64)v37);
      }
      if ( !v36 )
      {
LABEL_75:
        v89 = 0LL;
        v90 = 0LL;
        ThreadLock(v6, &v89);
        _InterlockedIncrement(&glSendMessage);
        v38 = v80.y;
        v13 = v80;
        v15 = xxxSendTransformableMessageTimeout(v6, 0x84u, 0, 0, 0LL, 1, 0);
        v82 = v15;
        if ( !ThreadUnlock1(v40, v39, v41) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
        {
          v66 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v66,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              15LL,
              3u,
              0x1Bu,
              0xFu,
              (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
              *(_QWORD *)v6,
              v74,
              v75);
          return 0LL;
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          LOBYTE(v42) = 0;
        }
        else
        {
          v42 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v43) = 0;
        }
        else
        {
          v43 = 1;
        }
        if ( (_BYTE)v42 || (_BYTE)v43 )
          WPP_RECORDER_AND_TRACE_SF_ddqd(
            WPP_GLOBAL_Control->AttachedDevice,
            v42,
            v43,
            v44,
            v67,
            v69,
            v71,
            v73,
            v13.x,
            v38,
            *(_QWORD *)v6,
            v15);
      }
      if ( (_DWORD)v15 == -1 )
      {
        IsEnabledDeviceUsage = Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage();
        v4 = v83;
        v17 = v77;
        v12 = v78;
        if ( IsEnabledDeviceUsage )
          v14 = 1;
        v16 = 3;
        v76 = v14;
      }
      else
      {
        v4 = v83;
        v16 = 4;
        v17 = v77;
        v12 = v78;
      }
LABEL_41:
      if ( v6 == v12 )
        goto LABEL_42;
    }
    v24 = 1;
LABEL_49:
    v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( v25 || v46 )
    {
      v47 = "composition input window";
      if ( !v24 )
        v47 = "other thread";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v46,
        (__int64)gFullLog,
        5u,
        0x1Bu,
        0xBu,
        (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
        v47);
    }
    if ( (unsigned int)Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage()
      && !v24
      && v14
      && (*((_DWORD *)v4 + 8) & 0x10) != 0 )
    {
      LOBYTE(v48) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v48,
          v49,
          (unsigned int)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
          3,
          27,
          12,
          (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids);
      }
      return 0LL;
    }
    v17 = v77;
    LODWORD(v15) = 1;
    v12 = v78;
    v82 = 1LL;
    v16 = 4;
    goto LABEL_41;
  }
  return 0LL;
}
