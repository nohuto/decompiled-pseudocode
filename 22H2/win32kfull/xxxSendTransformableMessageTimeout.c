/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C00598F0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     xxxFlashWindow @ 0x1C002AFD8 (xxxFlashWindow.c)
 *     xxxGetWindowSmIcon @ 0x1C0038CA8 (xxxGetWindowSmIcon.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C003ECB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00598C0 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessageEx @ 0x1C005D440 (xxxSendMessageEx.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxGetScrollBarInfo @ 0x1C00629F0 (xxxGetScrollBarInfo.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E8B8 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxGetMenuBarInfo @ 0x1C008AA48 (xxxGetMenuBarInfo.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00C07B8 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00D70C4 (xxxWindowHitTest2.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C00DA860 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00DACB8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00DAED0 (xxxTooltipWndProc.c)
 *     xxxSetScrollBar @ 0x1C00F5D08 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00F63B0 (xxxEnableScrollBar.c)
 *     xxxSendSizeMessage @ 0x1C00FF870 (xxxSendSizeMessage.c)
 *     xxxTranslateAccelerator @ 0x1C010B0F8 (xxxTranslateAccelerator.c)
 *     xxxSendTransformableMessage @ 0x1C010F8F4 (xxxSendTransformableMessage.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0120DC8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0123A94 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0124928 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 *     xxxImmActivateLayout @ 0x1C0136518 (xxxImmActivateLayout.c)
 *     xxxGetComboBoxInfo @ 0x1C0152BE4 (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015BFFC (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C015EC70 (xxxChangeClipboardChain.c)
 *     xxxSendMessageFF @ 0x1C0161950 (xxxSendMessageFF.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0168AB4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxMetricsRecalc @ 0x1C01D76D4 (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2940 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E2B90 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01E35F0 (xxxImmUnloadLayout.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F17FC (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 *     EditionSendIMENotification @ 0x1C02089A0 (EditionSendIMENotification.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021026C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02106D4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02158E0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0216334 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C02171EC (xxxPerformTargetingWithinPwnd.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021E1F4 (xxxRequestOutOfFullScreenMode.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021EFBC (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223744 (xxxHandleNCMouseGuys.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0237B24 (xxxMNDismissIfOffMenu.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0241668 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F08 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 *     xxxGetListBoxInfo @ 0x1C0248FB0 (xxxGetListBoxInfo.c)
 *     xxxSendHelpMessage @ 0x1C02500BC (xxxSendHelpMessage.c)
 * Callees:
 *     PhkNextValid @ 0x1C00202D0 (PhkNextValid.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     xxxDefWindowProc @ 0x1C00484E0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059E70 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BD10 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01DC580 (_FreeTouchInputInfo.c)
 *     IsMiPEnabledForWindow @ 0x1C01E18C8 (IsMiPEnabledForWindow.c)
 *     xxxPointerCallHook @ 0x1C01EFECC (xxxPointerCallHook.c)
 *     ValidateDDEConvPair @ 0x1C021C530 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C021CDFC (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C0227680 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 *LowLimit,
        int a8,
        int a9)
{
  __int64 v11; // rsi
  _OWORD *v13; // r14
  __int64 *v14; // r13
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *ThreadWin32Thread; // rax
  int v24; // edx
  __int64 Valid; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 result; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  union tagBROADCASTMSG *v35; // rcx
  unsigned int v36; // r9d
  __int64 v37; // r8
  __int64 *v38; // rax
  bool v39; // zf
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v42; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v44; // [rsp+50h] [rbp-F8h] BYREF
  int v45; // [rsp+58h] [rbp-F0h]
  __int64 v46; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v47; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+78h] [rbp-D0h]
  __int64 v49[2]; // [rsp+80h] [rbp-C8h] BYREF
  int v50; // [rsp+90h] [rbp-B8h]
  __int64 v51; // [rsp+98h] [rbp-B0h]
  __int64 v52; // [rsp+A0h] [rbp-A8h]
  _OWORD v53[2]; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-80h]
  __int64 v55[3]; // [rsp+D8h] [rbp-70h] BYREF
  int v56; // [rsp+F0h] [rbp-58h]
  __int64 v57; // [rsp+F8h] [rbp-50h]
  __int64 v58; // [rsp+100h] [rbp-48h]
  unsigned __int64 HighLimit; // [rsp+150h] [rbp+8h] BYREF
  unsigned __int64 v60; // [rsp+160h] [rbp+18h]
  __int64 v61; // [rsp+168h] [rbp+20h]

  v61 = (__int64)a4;
  v60 = a3;
  HighLimit = a1;
  v11 = a2;
  v13 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v14 = LowLimit;
  if ( LowLimit )
    *LowLimit = 0LL;
  if ( a1 == -1LL )
  {
    v47 = 0LL;
    v48 = 0LL;
    v35 = 0LL;
    v36 = 0;
    if ( v14 )
    {
      v36 = 4;
      *(_QWORD *)&v47 = __PAIR64__(a6, a5);
      *((_QWORD *)&v47 + 1) = v14;
      v35 = (union tagBROADCASTMSG *)&v47;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v36, v35, a8, 0);
  }
  v15 = 0LL;
  LowLimit = 0LL;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    LOWORD(v16) = 0;
  v45 = (unsigned __int16)v16;
  if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL)
    || (v15 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v16 * LODWORD(gSharedInfo[2]),
        v17 = gpKernelHandleTable,
        *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v16) != a1)
    || *(_BYTE *)(v15 + 24) != 1 )
  {
    KeBugCheckEx(0x197u, 1uLL, a1, v15, 1uLL);
  }
  if ( a2 - 992 <= 8 )
  {
    if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)a1) )
      return 0LL;
    if ( (_DWORD)v11 == 992 && guDdeSendTimeout )
    {
      a5 |= 2u;
      a6 = guDdeSendTimeout;
      v38 = &v46;
      if ( v14 )
        v38 = v14;
      v14 = v38;
    }
    if ( (unsigned int)ValidateDDEConvPair(a3, a1, v37) )
      a8 = 1;
  }
  else
  {
    if ( a2 - 577 <= 0xB || a2 - 590 <= 9 )
    {
      v39 = (_WORD)a3 == 1;
    }
    else
    {
      if ( a2 != 528 || (_WORD)a3 != 582 )
        goto LABEL_14;
      v39 = WORD1(a3) == 1;
    }
    v17 = v39;
    if ( v39 && !(unsigned int)IsMiPEnabledForWindow(a1) )
    {
      LODWORD(HighLimit) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1531LL);
      return 0LL;
    }
  }
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (CurrentProcess = PsGetCurrentProcess(v21, v20, v22),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v42),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  if ( v19 == *(_QWORD *)(a1 + 16) )
  {
    if ( a1 != *(_QWORD *)(v19 + 1464)
      && ((unsigned int)v11 >= 0x400
       || (MessageTable[v11] & 0x4000) == 0
       || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 18LL) & 4) == 0)
      && ((*(_BYTE *)(v19 + 680) | *(_BYTE *)(**(_QWORD **)(v19 + 464) + 16LL)) & 0x20) != 0 )
    {
      v51 = *(_QWORD *)a1;
      v50 = v11;
      v49[1] = v60;
      v49[0] = v61;
      v52 = 0LL;
      if ( (unsigned int)(v11 - 577) <= 0x16 && (v24 = 8122367, _bittest(&v24, v11 - 577))
        || (_DWORD)v11 == 528 && (_WORD)v60 == 582 )
      {
        xxxPointerCallHook(0, 0LL, (__int64)v49, 0);
      }
      else
      {
        Valid = *(_QWORD *)(gptiCurrent + 952LL);
        if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 80LL)) != 0)
          && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        {
          Valid = PhkNextValid(Valid);
        }
        xxxCallHook2((struct tagHOOK *)Valid, 0, 0LL, (__int64)v49, 0LL, 0);
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 18LL) & 4) == 0 )
    {
      v26 = v61;
      v27 = v60;
      xxxSendMessageToClient((struct tagWND *)a1, v11, v60, v61, 0LL, 0, &v44);
      if ( a1 != *(_QWORD *)(v19 + 1464)
        && ((*(_DWORD *)(v19 + 680) | *(_DWORD *)(**(_QWORD **)(v19 + 464) + 16LL)) & 0x2000) != 0 )
      {
        v57 = *(_QWORD *)a1;
        v56 = v11;
        v55[2] = v27;
        v55[1] = v26;
        v30 = v44;
        v55[0] = v44;
        v58 = 0LL;
        xxxCallHook(0, 0LL, (__int64)v55, 12);
      }
      else
      {
        v30 = v44;
      }
      if ( (_DWORD)v11 == 576 )
      {
        FreeTouchInputInfo(v26, 1LL);
      }
      else if ( (_DWORD)v11 == 281 )
      {
        FreeGestureInfo(v26, 1LL, v28, v29);
      }
      if ( !v14 )
        return v30;
LABEL_48:
      *v14 = v30;
      return 1LL;
    }
    HighLimit = 0LL;
    LowLimit = 0LL;
    IoGetStackLimits((PULONG_PTR)&LowLimit, &HighLimit);
    if ( (unsigned __int64)((char *)&HighLimit - (char *)LowLimit) < 0x2000 )
      return 0LL;
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
    if ( v34 >= 7 )
      return 0LL;
    result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v34])(
               a1,
               (unsigned int)v11,
               v60,
               v61);
    v30 = result;
    if ( v14 )
      goto LABEL_48;
  }
  else
  {
    memset(v53, 0, sizeof(v53));
    v54 = 0LL;
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
    {
      if ( v14 )
      {
        if ( (a5 & 2) != 0 )
        {
          v32 = *(_QWORD **)(a1 + 16);
          v33 = v32[56];
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - *(_DWORD *)(v33 + 12) > gdwHungAppTimeout
            && (*(_WORD *)(v33 + 10) & 0x1C07) == 0
            && !(unsigned int)PsGetThreadFreezeCount(*v32)
            && (*(_DWORD *)(v32[53] + 12LL) & 0x40) == 0 )
          {
            return 0LL;
          }
        }
        LODWORD(v53[0]) = 2;
        *(_QWORD *)&v54 = __PAIR64__(a6, a5);
        *((_QWORD *)&v54 + 1) = v14;
        v13 = v53;
      }
      return xxxInterSendMsgEx(a1, (unsigned int)v11, v60, v61, 1, *(_QWORD *)(a1 + 16), v13, a8, a9);
    }
    return xxxDefWindowProc((struct tagWND *)a1, (unsigned int)v11, v60, v61);
  }
  return result;
}
