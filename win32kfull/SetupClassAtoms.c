/*
 * XREFs of SetupClassAtoms @ 0x1C00E91C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetupClassAtoms()
{
  wchar_t **v0; // rdi
  char v1; // si
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int16 v4; // ax
  int v5; // ecx
  int v6; // ebx
  BOOL v7; // ebx
  BOOL v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // ebx
  BOOL v17; // edi
  int v18; // edi
  int v19; // ebx
  int v20; // ebp
  BOOL v21; // esi
  int v22; // edi
  int v23; // ebx
  BOOL v24; // ebx
  __int16 v25; // ax
  BOOL v26; // esi
  int v27; // edi
  int v28; // ebx
  int v29; // edi
  int v30; // ebx
  int v31; // edi
  int v32; // ebx
  int v33; // esi
  int v34; // edi
  int v35; // edi
  int v36; // r14d
  __int64 result; // rax

  v0 = off_1C030B510;
  v1 = 1;
  v2 = 868LL;
  v3 = 17LL;
  do
  {
    v4 = UserAddAtomEx(*v0++, 1LL, 2LL);
    *(_WORD *)(v2 + gpsi) = v4;
    v5 = -(*(_WORD *)(gpsi + v2) != 0);
    v2 += 2LL;
    v1 &= v5;
    --v3;
  }
  while ( v3 );
  *(_WORD *)(gpsi + 904LL) = -32766;
  *(_WORD *)(gpsi + 910LL) = -32764;
  *(_WORD *)(gpsi + 912LL) = -32762;
  *(_WORD *)(gpsi + 902LL) = -32767;
  *(_WORD *)(gpsi + 908LL) = -32765;
  *(_WORD *)(gpsi + 906LL) = 0x8000;
  *(_DWORD *)(gpsi + 928LL) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v6 = *(_DWORD *)(gpsi + 928LL);
  *(_WORD *)(gpsi + 1378LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v7 = *(_WORD *)(gpsi + 1378LL) != 0 && (unsigned __int8)v1 & (v6 != 0);
  *(&WPP_MAIN_CB.DeviceQueue.Size + 1) = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  v8 = *(&WPP_MAIN_CB.DeviceQueue.Size + 1) != 0 && v7;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v9 = v8 && atomDDETrack != 0;
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  v10 = atomQOS != 0 ? v9 : 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v11 = (unsigned __int8)v10 & (atomDDEImp != 0);
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  v12 = atomWndObj != 0 ? v11 : 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v13 = (unsigned __int8)v12 & (atomImeLevel != 0);
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  v14 = atomLayer != 0 ? v13 : 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v15 = (unsigned __int8)v14 & (atomDispAffinity != 0);
  *(_WORD *)&WPP_MAIN_CB.DeviceQueue.Busy = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  v16 = *(_WORD *)&WPP_MAIN_CB.DeviceQueue.Busy != 0 ? v15 : 0;
  *((_WORD *)&WPP_MAIN_CB.AlignmentRequirement + 2) = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  v17 = *((_WORD *)&WPP_MAIN_CB.AlignmentRequirement + 2) != 0;
  CHwndTargetProp::s_atom = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  LOWORD(WPP_MAIN_CB.AlignmentRequirement) = UserAddAtomEx(L"SysVisRgnTracker", 1LL, 2LL);
  v18 = LOWORD(WPP_MAIN_CB.AlignmentRequirement) != 0 && CHwndTargetProp::s_atom != 0 && v16 & v17;
  CHwndBitmapProp::s_atom = UserAddAtomEx(L"SysDCompHwndBitmap", 1LL, 2LL);
  v19 = (unsigned __int8)v18 & (CHwndBitmapProp::s_atom != 0);
  CInputQueueProp::s_atom = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  v20 = CInputQueueProp::s_atom != 0 ? v19 : 0;
  WindowMargins::CWindowMarginProp::s_atom = UserAddAtomEx(L"SysWndMargin", 1LL, 2LL);
  v21 = WindowMargins::CWindowMarginProp::s_atom != 0;
  v22 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiActivateShellWindow = v22;
  v23 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  guiOtherWindowCreated = v23;
  guiOtherWindowDestroyed = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  v24 = guiOtherWindowDestroyed != 0 && v23 != 0 && v22 != 0 && v20 & v21;
  v25 = UserAddAtomEx(L"Message", 1LL, 2LL);
  gatomMessage = v25;
  *(_WORD *)(gpsi + 916LL) = v25;
  v26 = v25 != 0 && v24;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v27 = v26 && gatomShadow != 0;
  *(_WORD *)(gpsi + 914LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  v28 = gaOleMainThreadWndClass != 0 ? v27 : 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v29 = (unsigned __int8)v28 & (gaFlashWState != 0);
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  v30 = gatomTouchFlags != 0 ? v29 : 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v31 = (unsigned __int8)v30 & (gatomPtrTargetFlags != 0);
  LOWORD(WPP_MAIN_CB.SecurityDescriptor) = UserAddAtom(L"SysFeedbackSettings", 1LL);
  v32 = LOWORD(WPP_MAIN_CB.SecurityDescriptor) != 0 ? v31 : 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v33 = (unsigned __int8)v32 & (gatomShutdownBlockingReason != 0);
  WORD2(WPP_MAIN_CB.SecurityDescriptor) = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  v34 = WORD2(WPP_MAIN_CB.SecurityDescriptor) != 0 ? v33 : 0;
  gatomMiPFlags = UserAddAtomEx(szMIPFLAGS, 1LL, 2LL);
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  v35 = CoreWindowProp::s_atom != 0 ? (gatomMiPFlags != 0 ? v34 : 0) : 0;
  gatomMonitorInheritance = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  v36 = (unsigned __int8)v35 & (gatomMonitorInheritance != 0);
  gatomDesktopRecalc = UserAddAtomEx(L"DesktopRecalcInfo", 1LL, 2LL);
  result = v36 & (unsigned int)-(gatomDesktopRecalc != 0);
  CRecalcProp::s_atom = gatomDesktopRecalc;
  gatomLastPinned = gatomDesktopRecalc;
  return result;
}
