/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C01271B0
 * Callers:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     xxxTranslateAccelerator @ 0x1C000C884 (xxxTranslateAccelerator.c)
 *     xxxSendMinRectMessages @ 0x1C000E188 (xxxSendMinRectMessages.c)
 *     xxxTooltipWndProc @ 0x1C001FBD0 (xxxTooltipWndProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C004174C (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0041F3C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C004A5E4 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     xxxGetWindowSmIcon @ 0x1C0065C34 (xxxGetWindowSmIcon.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     xxxSendMessageFF @ 0x1C009B170 (xxxSendMessageFF.c)
 *     xxxSendMessageEx @ 0x1C009B1B0 (xxxSendMessageEx.c)
 *     xxxEnableScrollBar @ 0x1C009E260 (xxxEnableScrollBar.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C00BD928 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00C3F18 (xxxSendSizeMessage.c)
 *     xxxSetScrollBar @ 0x1C00C6C68 (xxxSetScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00C73CC (xxxGetScrollBarInfo.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0123FB0 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C013BB08 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxSendTransformableMessage @ 0x1C013C8C8 (xxxSendTransformableMessage.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B81FC (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01B84B4 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01B86E0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C6724 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E5250 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E5C0C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01E6F4C (xxxPerformTargetingWithinPwnd.c)
 *     EditionSendIMENotification @ 0x1C01E8CA0 (EditionSendIMENotification.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F15CC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01FD548 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01FD6B0 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxChangeClipboardChain @ 0x1C01FDCF8 (xxxChangeClipboardChain.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200A20 (xxxHandleNCMouseGuys.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0217814 (xxxMNDismissIfOffMenu.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C021E20C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222AD8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022F6D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C023035C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxGetComboBoxInfo @ 0x1C02307E0 (xxxGetComboBoxInfo.c)
 *     xxxGetListBoxInfo @ 0x1C0230BF0 (xxxGetListBoxInfo.c)
 *     xxxGetMenuBarInfo @ 0x1C0230D6C (xxxGetMenuBarInfo.c)
 *     xxxSendHelpMessage @ 0x1C0239990 (xxxSendHelpMessage.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C004F384 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     FreeDelayedHooks @ 0x1C009B3F0 (FreeDelayedHooks.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0127BE0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0139AF4 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     IsMiPEnabledForWindow @ 0x1C0150E7A (IsMiPEnabledForWindow.c)
 *     _FreeTouchInputInfo @ 0x1C01B0580 (_FreeTouchInputInfo.c)
 *     xxxPointerCallHook @ 0x1C01C4E30 (xxxPointerCallHook.c)
 *     ValidateDDEConvPair @ 0x1C01FB050 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C01FB5C4 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C0204B90 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        unsigned __int64 *BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        int a8,
        int a9)
{
  int v10; // r10d
  __int64 v11; // r13
  unsigned __int64 *v13; // r15
  __int64 *v14; // rdi
  __int64 *v15; // rcx
  unsigned int v16; // r9d
  ULONG_PTR v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // ebx
  unsigned __int64 *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  int v29; // eax
  PERESOURCE *v30; // rax
  unsigned __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v32; // rax
  _QWORD *v33; // r15
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rbx
  BOOL v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __int64 v43; // rcx
  PERESOURCE *v44; // rax
  __int64 v45; // rcx
  PERESOURCE *v46; // rax
  bool v47; // al
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  PERESOURCE *v53; // rax
  __int64 v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  PERESOURCE *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  PERESOURCE *v65; // rax
  bool v66; // al
  __int64 Valid; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int64 v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char v77; // bl
  PERESOURCE *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r12
  unsigned __int64 LowLimit; // [rsp+60h] [rbp-118h] BYREF
  unsigned __int64 *v90; // [rsp+68h] [rbp-110h]
  unsigned __int64 *v91; // [rsp+70h] [rbp-108h]
  unsigned __int64 HighLimit; // [rsp+78h] [rbp-100h] BYREF
  __int64 v93; // [rsp+80h] [rbp-F8h]
  __int64 v94[2]; // [rsp+88h] [rbp-F0h] BYREF
  __int128 v95; // [rsp+98h] [rbp-E0h]
  __int128 v96; // [rsp+A8h] [rbp-D0h]
  int v97; // [rsp+B8h] [rbp-C0h]
  __int64 v98; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v99[56]; // [rsp+C8h] [rbp-B0h] BYREF
  _BYTE v100[56]; // [rsp+100h] [rbp-78h] BYREF

  v93 = (__int64)a4;
  v10 = a3;
  v11 = a2;
  v13 = a7;
  v91 = a7;
  v90 = BugCheckParameter2;
  v14 = 0LL;
  HighLimit = 0LL;
  v98 = 0LL;
  *(_OWORD *)v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( BugCheckParameter2 != (unsigned __int64 *)-1LL )
  {
    v18 = 0LL;
    if ( BugCheckParameter2 )
    {
      v19 = *BugCheckParameter2;
      LowLimit = *BugCheckParameter2;
    }
    else
    {
      LowLimit = 0LL;
      LOWORD(v19) = 0;
    }
    v97 = (unsigned __int16)v19;
    v20 = (unsigned __int16)v19;
    if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(gpsi + 8LL)
      || (v18 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v19,
          v21 = 3LL * (unsigned __int16)v19,
          *(unsigned __int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)v19) != BugCheckParameter2)
      || *(_BYTE *)(v18 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)BugCheckParameter2, v18, 1uLL);
    }
    if ( (unsigned int)(v11 - 992) <= 8 )
    {
      if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)BugCheckParameter2) )
        return 0LL;
      if ( (_DWORD)v11 == 992 && (v22 = guDdeSendTimeout) != 0 )
      {
        v23 = a5 | 2;
        v24 = (unsigned __int64 *)&v98;
        if ( a7 )
          v24 = a7;
        v13 = v24;
        v91 = v24;
      }
      else
      {
        v22 = a6;
        v23 = a5;
      }
      if ( (unsigned int)ValidateDDEConvPair(a3, BugCheckParameter2) )
      {
        LODWORD(v90) = 1;
      }
      else
      {
        LODWORD(v90) = a8;
        v13 = v91;
      }
LABEL_43:
      v30 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v25, v21, v20, v18);
      if ( !ExIsResourceAcquiredSharedLite(*v30) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      LowLimit = 0LL;
      ThreadWin32Thread = (unsigned __int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v32 = *ThreadWin32Thread;
        LowLimit = v32;
      }
      else
      {
        v32 = 0LL;
      }
      if ( v32 != BugCheckParameter2[2] )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(BugCheckParameter2) + 25) & 1) != 0 )
          return xxxDefWindowProc((struct tagWND *)BugCheckParameter2, v11, a3, v93);
        if ( !v13 )
          return xxxInterSendMsgEx(
                   BugCheckParameter2,
                   v11,
                   a3,
                   (void **)v93,
                   1,
                   (struct tagTHREADINFO *)BugCheckParameter2[2],
                   (__int64)v14,
                   (int)v90,
                   a9);
        if ( (v23 & 2) == 0 )
        {
          v34 = 2;
          goto LABEL_62;
        }
        v33 = (_QWORD *)BugCheckParameter2[2];
        if ( gdwHungAppTimeout )
        {
          v34 = 2;
        }
        else
        {
          v34 = gdwHungAppTimeout + 2;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 267LL);
        }
        v35 = v33[56];
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(v35 + 20) <= gdwHungAppTimeout
          || (*(_DWORD *)(v35 + 16) & 0x1C07) != 0
          || (unsigned int)PsGetThreadFreezeCount(*v33)
          || (*(_DWORD *)(v33[53] + 12LL) & 0x40) != 0 )
        {
          v13 = v91;
LABEL_62:
          LODWORD(v94[0]) = v34;
          *(_QWORD *)&v96 = __PAIR64__(v22, v23);
          *((_QWORD *)&v96 + 1) = v13;
          v14 = v94;
          return xxxInterSendMsgEx(
                   BugCheckParameter2,
                   v11,
                   a3,
                   (void **)v93,
                   1,
                   (struct tagTHREADINFO *)BugCheckParameter2[2],
                   (__int64)v14,
                   (int)v90,
                   a9);
        }
        return 0LL;
      }
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v99);
      v38 = LowLimit;
      if ( BugCheckParameter2 != *(unsigned __int64 **)(LowLimit + 1504) )
      {
        v39 = (unsigned int)v11 < 0x400 && ((unsigned __int16)MessageTable[v11] >> 14) & 1;
        if ( !v39 || (*(_BYTE *)(BugCheckParameter2[5] + 18) & 4) == 0 )
        {
          v40 = *(_QWORD *)(LowLimit + 464);
          v41 = (unsigned int)(*(_DWORD *)(LowLimit + 680) | *(_DWORD *)(*(_QWORD *)v40 + 16LL));
          v42 = a3;
          if ( ((*(_BYTE *)(LowLimit + 680) | *(_BYTE *)(*(_QWORD *)v40 + 16LL)) & 0x20) == 0 )
            goto LABEL_115;
          *((_QWORD *)&v95 + 1) = *BugCheckParameter2;
          v43 = (unsigned int)v11;
          LODWORD(v95) = v11;
          v94[1] = a3;
          v94[0] = v93;
          *(_QWORD *)&v96 = 0LL;
          if ( !gbInDestroyHandleTableObjects )
          {
            v44 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(
                                  (unsigned int)v11,
                                  v41,
                                  v36,
                                  v37);
            if ( ExIsResourceAcquiredExclusiveLite(*v44) != 1 )
            {
              v46 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v45, v41, v36, v37);
              if ( !ExIsResourceAcquiredSharedLite(*v46) )
                goto LABEL_78;
              if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) == 1
                || (v47 = ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock) != 0) )
              {
                v47 = 1;
              }
              if ( !v47 )
LABEL_78:
                __int2c();
            }
            v43 = (unsigned int)v95;
          }
          if ( (unsigned int)(v43 - 577) <= 3 )
            goto LABEL_85;
          if ( (unsigned int)(v43 - 581) > 0x12 || (v48 = 1, (_DWORD)v43 == 589) )
            v48 = 0;
          v28 = v48 == 0;
          v49 = 0;
          if ( !v28 )
LABEL_85:
            v49 = 1;
          if ( !v49 || (v50 = 1, (_DWORD)v43 == 595) )
            v50 = 0;
          if ( v50 )
            goto LABEL_94;
          if ( (_DWORD)v43 != 528 || (v51 = 1, LOWORD(v94[1]) != 582) )
            v51 = 0;
          v28 = v51 == 0;
          v52 = 0;
          if ( !v28 )
LABEL_94:
            v52 = 1;
          if ( v52 )
          {
            xxxPointerCallHook(0LL, 0LL, v94, 4LL, 0);
            v38 = LowLimit;
            goto LABEL_115;
          }
          v53 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v43, v41, v36, v37);
          if ( !ExIsResourceAcquiredSharedLite(*v53) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
          v54 = 0LL;
          v55 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v55 )
            v54 = *v55;
          if ( !gbInDestroyHandleTableObjects )
          {
            v60 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v57, v56, v58, v59);
            if ( ExIsResourceAcquiredExclusiveLite(*v60) != 1 )
            {
              v65 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v62, v61, v63, v64);
              if ( !ExIsResourceAcquiredSharedLite(*v65) )
                goto LABEL_108;
              if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) == 1
                || (v66 = ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock) != 0) )
              {
                v66 = 1;
              }
              if ( !v66 )
LABEL_108:
                __int2c();
            }
          }
          Valid = *(_QWORD *)(v54 + 960);
          if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v54 + 464) + 80LL)) != 0)
            && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
          {
            Valid = PhkNextValid(Valid);
          }
          xxxCallHook2((struct tagHOOK *)Valid, 0LL, 0LL, (__int64)v94, 0LL, 0);
          v38 = LowLimit;
        }
      }
      v42 = a3;
LABEL_115:
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v99);
      FreeDelayedHooks();
      if ( (*(_BYTE *)(BugCheckParameter2[5] + 18) & 4) != 0 )
      {
        HighLimit = 0LL;
        LowLimit = 0LL;
        IoGetStackLimits(&LowLimit, &HighLimit);
        if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
          return 0LL;
        v72 = *(_QWORD *)(BugCheckParameter2[5] + 120);
        if ( v72 >= 7 )
          return 0LL;
        if ( IS_USERCRIT_OWNED_EXCLUSIVE(v69, v68, v70, v71) || !IS_USERCRIT_OWNED_AT_ALL(v74, v73, v75, v76) )
        {
          v77 = 0;
          v78 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v74, v73, v75, v76);
          if ( ExIsResourceAcquiredExclusiveLite(*v78) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 50LL);
        }
        else
        {
          v77 = 1;
          UserSessionSwitchLeaveCrit(v74, v73, v75, v76);
          EnterCrit(1LL, 0LL);
        }
        v81 = ((__int64 (__fastcall *)(unsigned __int64 *, _QWORD, __int64, __int64))(&gServerHandlers)[v72])(
                BugCheckParameter2,
                (unsigned int)v11,
                a3,
                v93);
        if ( v77 )
        {
          UserSessionSwitchLeaveCrit(v80, v79, v82, v83);
          EnterSharedCrit(v85, v84, v86);
        }
        if ( !v13 )
          return v81;
      }
      else
      {
        v87 = v93;
        xxxSendMessageToClient((struct tagWND *)BugCheckParameter2, v11, v42, v93, 0LL, 0, (__int64 *)&HighLimit);
        SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v100);
        if ( BugCheckParameter2 == *(unsigned __int64 **)(v38 + 1504)
          || ((*(_DWORD *)(v38 + 680) | *(_DWORD *)(**(_QWORD **)(v38 + 464) + 16LL)) & 0x2000) == 0 )
        {
          v81 = HighLimit;
        }
        else
        {
          v96 = *BugCheckParameter2;
          DWORD2(v95) = v11;
          *(_QWORD *)&v95 = v42;
          v94[1] = v87;
          v81 = HighLimit;
          v94[0] = HighLimit;
          xxxCallHook(0LL, 0LL, (__int64)v94, 12LL);
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v100);
        FreeDelayedHooks();
        if ( (_DWORD)v11 == 576 )
        {
          FreeTouchInputInfo(v87, 1LL);
        }
        else if ( (_DWORD)v11 == 281 )
        {
          FreeGestureInfo(v87, 1LL);
        }
        if ( !v13 )
          return v81;
      }
      *v13 = v81;
      return 1LL;
    }
    if ( (unsigned int)(v11 - 577) <= 3 )
      goto LABEL_29;
    if ( (unsigned int)(v11 - 581) > 0x12 || (v26 = 1, (_DWORD)v11 == 589) )
      v26 = 0;
    v28 = v26 == 0;
    v27 = 0;
    if ( !v28 )
LABEL_29:
      v27 = 1;
    if ( v27 )
    {
      v25 = 0LL;
      v28 = (_WORD)v10 == 1;
    }
    else
    {
      if ( (_DWORD)v11 != 528 || (v29 = 1, (_WORD)v10 != 582) )
        v29 = 0;
      v25 = 0LL;
      if ( !v29 )
        goto LABEL_38;
      v28 = HIWORD(v10) == 1;
    }
    LOBYTE(v25) = v28;
LABEL_38:
    if ( (_DWORD)v25 && !(unsigned int)IsMiPEnabledForWindow(BugCheckParameter2) )
    {
      LODWORD(v90) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1528LL);
      return 0LL;
    }
    LODWORD(v90) = a8;
    v22 = a6;
    v23 = a5;
    goto LABEL_43;
  }
  v15 = 0LL;
  v16 = 0;
  if ( a7 )
  {
    v16 = 4;
    v94[0] = __PAIR64__(a6, a5);
    v94[1] = (__int64)a7;
    v15 = v94;
  }
  return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v16, (union tagBROADCASTMSG *)v15, a8, 0);
}
