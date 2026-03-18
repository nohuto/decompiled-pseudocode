/*
 * XREFs of HMValidateHandle @ 0x1C0024F44
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0001BE0 (NtUserGetRawInputData.c)
 *     NtUserDestroyCursor @ 0x1C0021300 (NtUserDestroyCursor.c)
 *     NtUserSetCursor @ 0x1C00232B0 (NtUserSetCursor.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00236D0 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetIconInfo @ 0x1C00240A0 (NtUserGetIconInfo.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0024310 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0024510 (NtUserUnhookWindowsHookEx.c)
 *     NtUserSetCursorIconDataEx @ 0x1C0025EE0 (NtUserSetCursorIconDataEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     fnHkINLPMSG @ 0x1C0076120 (fnHkINLPMSG.c)
 *     _MapDesktopObject @ 0x1C007B8C0 (_MapDesktopObject.c)
 *     NtUserDrawIconEx @ 0x1C00BDC50 (NtUserDrawIconEx.c)
 *     NtUserUnhookWinEvent @ 0x1C00E5900 (NtUserUnhookWinEvent.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00F6A80 (NtUserCopyAcceleratorTable.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00FB8A0 (NtUserEndDeferWindowPosEx.c)
 *     NtUserGetIconSize @ 0x1C00FB970 (NtUserGetIconSize.c)
 *     NtUserTranslateAccelerator @ 0x1C00FBDD0 (NtUserTranslateAccelerator.c)
 *     NtUserUpdateInputContext @ 0x1C0105800 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C0105AB0 (NtUserQueryInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C0106D30 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C0107FC0 (NtUserGetRequiredCursorSizes.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0110790 (NtUserDestroyAcceleratorTable.c)
 *     NtUserDestroyInputContext @ 0x1C0149860 (NtUserDestroyInputContext.c)
 *     NtUserGetCursorFrameInfo @ 0x1C014A720 (NtUserGetCursorFrameInfo.c)
 *     NtUserCreateLocalMemHandle @ 0x1C014D9F0 (NtUserCreateLocalMemHandle.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserDragObject @ 0x1C01F2820 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F2C90 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F4390 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F44F0 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01F6020 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01F6390 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01F6A40 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01F6BA0 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01F8CB0 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C01FB790 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C01FC760 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C01FD040 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01FE060 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0200530 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A200 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0223030 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C022A3D0 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C022B0C0 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rdx
  __int16 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = a2;
  v4 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_19;
  v5 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4);
  v6 = (__int64 *)HMPkheFromPhe(v5);
  v7 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v5 + 26) && v7 != 0x7FFF && (v7 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_19;
  if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
  {
    v8 = *(_BYTE *)(v5 + 24);
    if ( v8 == (_BYTE)v3 || (_BYTE)v3 == 0xFF && v8 )
      v4 = *v6;
  }
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v4 = 0LL;
  }
  else
  {
    v4 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( *(char *)(v5 + 25) < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
    {
      v14 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
      if ( (v14 & 2) != 0 )
      {
        v15 = v6[1];
LABEL_41:
        if ( v15 && v15 != CurrentProcessWin32Process )
          goto LABEL_19;
        goto LABEL_11;
      }
      if ( (v14 & 1) != 0 )
      {
        v16 = v6[1];
        if ( v16 )
        {
          v15 = *(_QWORD *)(v16 + 424);
          goto LABEL_41;
        }
      }
    }
  }
LABEL_11:
  if ( v4 )
    return v4;
LABEL_19:
  switch ( v3 )
  {
    case 1:
      v12 = 1400LL;
      break;
    case 2:
      v12 = 1401LL;
      break;
    case 3:
      v12 = 1402LL;
      break;
    case 4:
      v12 = 1405LL;
      break;
    case 5:
      v12 = 1404LL;
      break;
    case 8:
      v12 = 1403LL;
      break;
    default:
      v12 = 6LL;
      break;
  }
  UserSetLastError(v12);
  return 0LL;
}
