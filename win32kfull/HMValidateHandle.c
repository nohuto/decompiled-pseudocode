/*
 * XREFs of HMValidateHandle @ 0x1C0064BF4
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C000BAD0 (NtUserTranslateAccelerator.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0012624 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0013190 (NtUserCopyAcceleratorTable.c)
 *     NtUserUpdateInputContext @ 0x1C003B580 (NtUserUpdateInputContext.c)
 *     NtUserDrawIconEx @ 0x1C003B810 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C003B910 (NtUserGetIconSize.c)
 *     NtUserSetCursor @ 0x1C003ED70 (NtUserSetCursor.c)
 *     NtUserDestroyCursor @ 0x1C003FAC0 (NtUserDestroyCursor.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     NtUserGetIconInfo @ 0x1C0060FD0 (NtUserGetIconInfo.c)
 *     NtUserSetCursorIconDataEx @ 0x1C0064850 (NtUserSetCursorIconDataEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _MapDesktopObject @ 0x1C0099770 (_MapDesktopObject.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0099C50 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C009C2B0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00C5470 (NtUserFindExistingCursorIcon.c)
 *     fnHkINLPMSG @ 0x1C00C5E60 (fnHkINLPMSG.c)
 *     NtUserUnhookWinEvent @ 0x1C00D23D0 (NtUserUnhookWinEvent.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C00DDEE0 (NtUserGetRequiredCursorSizes.c)
 *     NtUserGetCursorFrameInfo @ 0x1C00DDFF0 (NtUserGetCursorFrameInfo.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00DFB10 (NtUserEndDeferWindowPosEx.c)
 *     NtUserQueryInputContext @ 0x1C00E21C0 (NtUserQueryInputContext.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C00F3BA0 (NtUserDestroyAcceleratorTable.c)
 *     NtUserGetRawInputData @ 0x1C0147690 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C1D64 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserAssociateInputContext @ 0x1C01CDCA0 (NtUserAssociateInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1C01CF0E0 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C01CF610 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1C01CF970 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01CFDF0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D2600 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01D2760 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D4570 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01D48E0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01D4F90 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01D50F0 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01D7000 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C01DA110 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C01DB750 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C01DC8D0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01DDAE0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01E0F70 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFEE0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C02091E0 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0212810 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0213D34 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02323EC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
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
  __int64 v11; // rcx
  int v13; // ecx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rdx
  __int16 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax

  v3 = a2;
  v4 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_19;
  v5 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)a1;
  v6 = (__int64 *)HMPkheFromPhe(v5);
  v7 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v5 + 26) && v7 != 0x7FFF && (v7 || !PsGetCurrentProcessWow64Process(0x7FFFLL)) )
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
    v11 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
    v4 &= v11;
  }
  if ( *(char *)(v5 + 25) < 0 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v16 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
        if ( (v16 & 2) != 0 )
        {
          v17 = (_QWORD *)v6[1];
LABEL_42:
          if ( v17 && v17 != v15 )
            goto LABEL_19;
          goto LABEL_11;
        }
        if ( (v16 & 1) != 0 )
        {
          v18 = v6[1];
          if ( v18 )
          {
            v17 = *(_QWORD **)(v18 + 424);
            goto LABEL_42;
          }
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
      v13 = 1400;
      break;
    case 2:
      v13 = 1401;
      break;
    case 3:
      v13 = 1402;
      break;
    case 4:
      v13 = 1405;
      break;
    case 5:
      v13 = 1404;
      break;
    case 8:
      v13 = 1403;
      break;
    default:
      v13 = 6;
      break;
  }
  UserSetLastError(v13);
  return 0LL;
}
