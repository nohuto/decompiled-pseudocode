/*
 * XREFs of HMValidateHandle @ 0x1C00670E0
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00032C0 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0007F90 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C001FAA0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C0024200 (NtUserUnhookWinEvent.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0032160 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDrawIconEx @ 0x1C0043E90 (NtUserDrawIconEx.c)
 *     NtUserDestroyCursor @ 0x1C00483C0 (NtUserDestroyCursor.c)
 *     NtUserSetCursor @ 0x1C0048730 (NtUserSetCursor.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00497E0 (NtUserFindExistingCursorIcon.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C005A2F0 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C005D100 (fnHkINLPMSG.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C00654F4 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserSetCursorIconData @ 0x1C0065A40 (NtUserSetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C00672D0 (NtUserGetIconInfo.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserTranslateAccelerator @ 0x1C010B310 (NtUserTranslateAccelerator.c)
 *     NtUserCopyAcceleratorTable @ 0x1C010B890 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C010F600 (NtUserGetIconSize.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C010F990 (NtUserEndDeferWindowPosEx.c)
 *     NtUserUpdateInputContext @ 0x1C0116960 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C0117330 (NtUserQueryInputContext.c)
 *     _MapDesktopObject @ 0x1C0118920 (_MapDesktopObject.c)
 *     NtUserAssociateInputContext @ 0x1C0118BA0 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C0119B10 (NtUserGetRequiredCursorSizes.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0126660 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0127DB0 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C01584D0 (NtUserDestroyInputContext.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0162370 (NtUserGetCursorFrameInfo.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8E2C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserDragObject @ 0x1C01F7DE0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F82A0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F9990 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01F9AF0 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB5C0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01FB930 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01FC170 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01FC2D0 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01FE4C0 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C0200A50 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C02017C0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0201B00 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C0201DC0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C0202A90 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0204510 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021F394 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C02290E0 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0230620 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231500 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02484C8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
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
