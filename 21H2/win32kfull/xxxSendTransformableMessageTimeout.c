/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C0050D70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C004DF20 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendTransformableMessage @ 0x1C004EBC0 (xxxSendTransformableMessage.c)
 *     xxxSendMessageEx @ 0x1C004FED0 (xxxSendMessageEx.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxGetWindowSmIcon @ 0x1C0085264 (xxxGetWindowSmIcon.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     xxxSetScrollBar @ 0x1C00C64F8 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00C6A60 (xxxEnableScrollBar.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C8EC0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxSendSizeMessage @ 0x1C00F2578 (xxxSendSizeMessage.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00F49F8 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     xxxTranslateAccelerator @ 0x1C00FBF34 (xxxTranslateAccelerator.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101328 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C01090A8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     xxxTooltipWndProc @ 0x1C010CED0 (xxxTooltipWndProc.c)
 *     xxxSendMinRectMessages @ 0x1C010DD14 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C0121D98 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     xxxGetComboBoxInfo @ 0x1C0141DCC (xxxGetComboBoxInfo.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0145B10 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014F628 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C014F8A0 (xxxChangeClipboardChain.c)
 *     xxxSendMessageFF @ 0x1C0152220 (xxxSendMessageFF.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1C0159B20 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015A5CC (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DE0F0 (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01DE3A0 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01DE5F0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01EC71C (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0205BE8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0206590 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C020760C (xxxPerformTargetingWithinPwnd.c)
 *     EditionSendIMENotification @ 0x1C0209240 (EditionSendIMENotification.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021A3E8 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0231190 (xxxMNDismissIfOffMenu.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxGetListBoxInfo @ 0x1C0244FA4 (xxxGetListBoxInfo.c)
 *     xxxSendHelpMessage @ 0x1C024A834 (xxxSendHelpMessage.c)
 * Callees:
 *     FreeDelayedHooks @ 0x1C0023FA0 (FreeDelayedHooks.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsPointerInputHookCall @ 0x1C004EB38 (IsPointerInputHookCall.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00514D0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AD240 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0159D38 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1C015C188 (--0LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     ??1LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1C015C200 (--1LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     IsMiPEnabledForWindow @ 0x1C01DCDE0 (IsMiPEnabledForWindow.c)
 *     xxxPointerCallHook @ 0x1C01EAF28 (xxxPointerCallHook.c)
 *     ValidateDDEConvPair @ 0x1C0217870 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C0218378 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        unsigned __int64 *BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        int a8,
        int a9)
{
  __int64 v10; // rsi
  unsigned __int64 *v12; // r15
  __int64 *v13; // rdi
  ULONG_PTR v15; // r9
  unsigned __int64 v16; // rax
  int v17; // r14d
  unsigned __int64 *v18; // rax
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 *v26; // rax
  __int64 Valid; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  __int64 v30; // r14
  char v31[8]; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 HighLimit; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 LowLimit; // [rsp+60h] [rbp-118h] BYREF
  __int64 v34; // [rsp+68h] [rbp-110h]
  __int64 v35[2]; // [rsp+70h] [rbp-108h] BYREF
  __int128 v36; // [rsp+80h] [rbp-F8h]
  __int128 v37; // [rsp+90h] [rbp-E8h]
  int v38; // [rsp+A0h] [rbp-D8h]
  _QWORD v39[3]; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v40[56]; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v41[56]; // [rsp+F8h] [rbp-80h] BYREF

  v34 = a4;
  v10 = a2;
  v12 = a7;
  v39[2] = BugCheckParameter2;
  v13 = 0LL;
  LowLimit = 0LL;
  v39[0] = 0LL;
  *(_OWORD *)v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( BugCheckParameter2 != (unsigned __int64 *)-1LL )
  {
    v15 = 0LL;
    v39[1] = 0LL;
    if ( BugCheckParameter2 )
    {
      v16 = *BugCheckParameter2;
      HighLimit = *BugCheckParameter2;
    }
    else
    {
      HighLimit = 0LL;
      LOWORD(v16) = 0;
    }
    v38 = (unsigned __int16)v16;
    if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL)
      || (v15 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v16 * *((_DWORD *)&gSharedInfo + 4),
          *(unsigned __int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)v16) != BugCheckParameter2)
      || *(_BYTE *)(v15 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)BugCheckParameter2, v15, 1uLL);
    }
    if ( a2 - 992 <= 8 )
    {
      if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)BugCheckParameter2) )
        return 0LL;
      if ( (_DWORD)v10 == 992 && guDdeSendTimeout )
      {
        v17 = a5 | 2;
        a6 = guDdeSendTimeout;
        v18 = v39;
        if ( a7 )
          v18 = a7;
        v12 = v18;
      }
      else
      {
        v17 = a5;
      }
      if ( (unsigned int)ValidateDDEConvPair(a3, BugCheckParameter2) )
        a8 = 1;
LABEL_35:
      v21 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
      if ( v21 != BugCheckParameter2[2] )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(BugCheckParameter2) + 25) & 1) != 0 )
          return xxxDefWindowProc((struct tagWND *)BugCheckParameter2);
        if ( !v12 )
          return xxxInterSendMsgEx(
                   BugCheckParameter2,
                   (unsigned int)v10,
                   a3,
                   v34,
                   1,
                   BugCheckParameter2[2],
                   v13,
                   a8,
                   a9);
        if ( (v17 & 2) == 0
          || (v23 = (_QWORD *)BugCheckParameter2[2],
              v24 = v23[56],
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - *(_DWORD *)(v24 + 20) <= gdwHungAppTimeout)
          || (*(_DWORD *)(v24 + 16) & 0x1C07) != 0
          || (unsigned int)PsGetThreadFreezeCount(*v23)
          || (*(_DWORD *)(v23[53] + 12LL) & 0x40) != 0 )
        {
          LODWORD(v35[0]) = 2;
          *(_QWORD *)&v37 = __PAIR64__(a6, v17);
          *((_QWORD *)&v37 + 1) = v12;
          v13 = v35;
          return xxxInterSendMsgEx(
                   BugCheckParameter2,
                   (unsigned int)v10,
                   a3,
                   v34,
                   1,
                   BugCheckParameter2[2],
                   v13,
                   a8,
                   a9);
        }
        return 0LL;
      }
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v40);
      if ( BugCheckParameter2 != *(unsigned __int64 **)(v21 + 1464)
        && ((unsigned int)v10 >= 0x400
         || !_bittest16(&MessageTable[v10], 0xEu)
         || (*(_BYTE *)(BugCheckParameter2[5] + 18) & 4) == 0)
        && ((*(_BYTE *)(v21 + 680) | *(_BYTE *)(**(_QWORD **)(v21 + 464) + 16LL)) & 0x20) != 0 )
      {
        *((_QWORD *)&v36 + 1) = *BugCheckParameter2;
        LODWORD(v36) = v10;
        v35[1] = a3;
        v35[0] = v34;
        *(_QWORD *)&v37 = 0LL;
        if ( !gbInDestroyHandleTableObjects
          && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
          && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
           || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
           && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)) )
        {
          __int2c();
        }
        if ( (unsigned int)IsPointerInputHookCall(4, (int *)v35) )
        {
          xxxPointerCallHook(0, 0LL, (__int64)v35, 0);
        }
        else
        {
          v25 = 0LL;
          v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v26 )
            v25 = *v26;
          HighLimit = (unsigned __int64)gDomainHookLock;
          if ( !gbInDestroyHandleTableObjects
            && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
            && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
             || ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)HighLimit) != 1
             && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)HighLimit)) )
          {
            __int2c();
          }
          Valid = *(_QWORD *)(v25 + 952);
          if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v25 + 464) + 80LL)) != 0)
            && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
          {
            Valid = PhkNextValid(Valid);
          }
          xxxCallHook2((struct tagHOOK *)Valid, 0, 0LL, (__int64)v35, 0LL, 0);
        }
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v40);
      FreeDelayedHooks();
      if ( (*(_BYTE *)(BugCheckParameter2[5] + 18) & 4) != 0 )
      {
        HighLimit = 0LL;
        LowLimit = 0LL;
        IoGetStackLimits(&LowLimit, &HighLimit);
        if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
          return 0LL;
        v28 = *(_QWORD *)(BugCheckParameter2[5] + 120);
        if ( v28 >= 7 )
          return 0LL;
        LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v31);
        v29 = ((__int64 (__fastcall *)(unsigned __int64 *, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v28])(
                BugCheckParameter2,
                (unsigned int)v10,
                a3,
                v34);
        LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::~LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v31);
        if ( !v12 )
          return v29;
      }
      else
      {
        v30 = v34;
        xxxSendMessageToClient((struct tagWND *)BugCheckParameter2, v10, a3, v34, 0LL, 0, (__int64 *)&LowLimit);
        SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v41);
        if ( BugCheckParameter2 == *(unsigned __int64 **)(v21 + 1464)
          || ((*(_DWORD *)(v21 + 680) | *(_DWORD *)(**(_QWORD **)(v21 + 464) + 16LL)) & 0x2000) == 0 )
        {
          v29 = LowLimit;
        }
        else
        {
          v37 = *BugCheckParameter2;
          DWORD2(v36) = v10;
          *(_QWORD *)&v36 = a3;
          v35[1] = v30;
          v29 = LowLimit;
          v35[0] = LowLimit;
          xxxCallHook(0, 0LL, (__int64)v35, 12);
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v41);
        FreeDelayedHooks();
        if ( (_DWORD)v10 == 576 )
        {
          FreeTouchInputInfo(v30, 1LL);
        }
        else if ( (_DWORD)v10 == 281 )
        {
          FreeGestureInfo(v30, 1LL);
        }
        if ( !v12 )
          return v29;
      }
      *v12 = v29;
      return 1LL;
    }
    if ( a2 - 577 > 3 && (a2 - 581 > 0x12 || a2 == 589) )
    {
      if ( a2 != 528 || (_WORD)a3 != 582 )
      {
LABEL_34:
        v17 = a5;
        goto LABEL_35;
      }
      v19 = WORD1(a3) == 1;
    }
    else
    {
      v19 = (_WORD)a3 == 1;
    }
    if ( v19 && !(unsigned int)IsMiPEnabledForWindow(BugCheckParameter2) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      return 0LL;
    }
    goto LABEL_34;
  }
  if ( a7 )
  {
    v35[0] = __PAIR64__(a6, a5);
    v35[1] = (__int64)a7;
  }
  return (int)xxxBroadcastMessageEx(0LL, a2);
}
