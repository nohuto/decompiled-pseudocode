/*
 * XREFs of HMValidateHandle @ 0x1C0067040
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00032C0 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0007F90 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C001FA00 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C0024160 (NtUserUnhookWinEvent.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00320C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDrawIconEx @ 0x1C0043DF0 (NtUserDrawIconEx.c)
 *     NtUserDestroyCursor @ 0x1C0048320 (NtUserDestroyCursor.c)
 *     NtUserSetCursor @ 0x1C0048690 (NtUserSetCursor.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0049740 (NtUserFindExistingCursorIcon.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00549A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C005D060 (fnHkINLPMSG.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0065454 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserSetCursorIconData @ 0x1C00659A0 (NtUserSetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C0067230 (NtUserGetIconInfo.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserTranslateAccelerator @ 0x1C010AF90 (NtUserTranslateAccelerator.c)
 *     NtUserCopyAcceleratorTable @ 0x1C010B510 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C010F280 (NtUserGetIconSize.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C010F610 (NtUserEndDeferWindowPosEx.c)
 *     NtUserUpdateInputContext @ 0x1C01165E0 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C0116FB0 (NtUserQueryInputContext.c)
 *     _MapDesktopObject @ 0x1C01185A0 (_MapDesktopObject.c)
 *     NtUserAssociateInputContext @ 0x1C0118820 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C0119790 (NtUserGetRequiredCursorSizes.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C01262E0 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0127A30 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C0157F10 (NtUserDestroyInputContext.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0161BA0 (NtUserGetCursorFrameInfo.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E886C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserDragObject @ 0x1C01F7820 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7CE0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F93D0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F9530 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB000 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01FB370 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FBBB0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01FBD10 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01FDF00 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C0200490 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C0201200 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0201540 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C0201800 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C02024D0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0203F50 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EDD4 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0228B20 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0230060 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0230F40 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F08 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(unsigned __int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rsi
  char v12; // al
  struct _KTHREAD *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v23; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = a2;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v23),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    PsGetThreadWin32Thread(CurrentThread);
  }
  v9 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v10 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v11 = (__int64 *)HMPkheFromPhe(v10);
    v9 = a1 >> 16;
    if ( (WORD1(a1) == *(_WORD *)(v10 + 26) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process(v9))
      && (*(_BYTE *)(v10 + 25) & 1) == 0 )
    {
      v12 = *(_BYTE *)(v10 + 24);
      if ( v12 == (_BYTE)v4 || (_BYTE)v4 == 0xFF && v12 )
        v3 = *v11;
    }
  }
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (v25 = PsGetCurrentProcess(v16, v15, v17),
        v26 = PsGetProcessSessionIdEx(v25),
        v28 = PsGetCurrentThreadProcess(v27),
        v26 == (unsigned int)PsGetProcessSessionIdEx(v28)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v14 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v3 )
    return v3;
  switch ( v4 )
  {
    case 1:
      v20 = 1400LL;
      break;
    case 2:
      v20 = 1401LL;
      break;
    case 3:
      v20 = 1402LL;
      break;
    case 4:
      v20 = 1405LL;
      break;
    case 5:
      v20 = 1404LL;
      break;
    case 8:
      v20 = 1403LL;
      break;
    default:
      v20 = 6LL;
      break;
  }
  UserSetLastError(v20);
  return 0LL;
}
