/*
 * XREFs of SetupClassAtoms @ 0x1C012A970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetupClassAtoms()
{
  wchar_t **v0; // rdi
  char v1; // bp
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int16 v4; // ax
  int v5; // eax
  int v6; // edi
  __int16 v7; // bx
  int v8; // ebx
  BOOL v9; // edi
  char v10; // bl
  BOOL v11; // edi
  char v12; // bl
  BOOL v13; // edi
  char v14; // bl
  BOOL v15; // edi
  unsigned __int8 v16; // bl
  int v17; // ebx
  unsigned __int16 v18; // di
  int v19; // ebp
  BOOL v20; // edi
  int v21; // ebx
  int v22; // ebp
  int v23; // ebx
  __int16 v24; // ax
  int v25; // edi
  BOOL v26; // ebx
  int v27; // ebx
  BOOL v28; // edi
  int v29; // edi
  _BOOL8 v30; // rbx
  BOOL v31; // ebx
  BOOL v32; // edi
  int v33; // edi
  __int16 v34; // bx
  int v35; // ebx
  __int16 v36; // ax

  v0 = off_1C02E1E50;
  v1 = 1;
  v2 = 868LL;
  v3 = 17LL;
  do
  {
    v4 = UserAddAtomEx(*v0++, 1LL, 2LL);
    *(_WORD *)(v2 + gpsi) = v4;
    v5 = -(*(_WORD *)(v2 + gpsi) != 0);
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
  v6 = (unsigned __int8)v1 & (*(_DWORD *)(gpsi + 928LL) != 0);
  *(_WORD *)(gpsi + 1378LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v7 = *(_WORD *)(gpsi + 1378LL);
  WPP_MAIN_CB.DeviceQueue.Type = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  if ( WPP_MAIN_CB.DeviceQueue.Type )
    v8 = v7 != 0 ? v6 : 0;
  else
    LOBYTE(v8) = 0;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v9 = atomDDETrack != 0;
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  if ( atomQOS )
    v10 = v9 & v8;
  else
    v10 = 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v11 = atomDDEImp != 0;
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  if ( atomWndObj )
    v12 = v11 & v10;
  else
    v12 = 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v13 = atomImeLevel != 0;
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  if ( atomLayer )
    v14 = v13 & v12;
  else
    v14 = 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v15 = atomDispAffinity != 0;
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  if ( atomDWMProp )
    v16 = v15 & v14;
  else
    v16 = 0;
  WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  v17 = (WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) != 0) & v16;
  v18 = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  CHwndTargetProp::s_atom = v18;
  LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = UserAddAtomEx(L"SysVisRgnTracker", 1LL, 2LL);
  if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    v19 = v18 != 0 ? v17 : 0;
  else
    v19 = 0;
  CInputQueueProp::s_atom = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  v20 = CInputQueueProp::s_atom != 0;
  v21 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiActivateShellWindow = v21;
  guiOtherWindowCreated = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  v22 = guiOtherWindowCreated != 0 && v21 != 0 && v19 & v20;
  v23 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  guiOtherWindowDestroyed = v23;
  v24 = UserAddAtomEx(L"Message", 1LL, 2LL);
  gatomMessage = v24;
  *(_WORD *)(gpsi + 916LL) = v24;
  if ( v24 )
    v25 = v23 != 0 ? v22 : 0;
  else
    v25 = 0;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v26 = gatomShadow != 0;
  *(_WORD *)(gpsi + 914LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  if ( gaOleMainThreadWndClass )
    v27 = v25 & v26;
  else
    v27 = 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v28 = gaFlashWState != 0;
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  if ( gatomTouchFlags )
    v29 = v27 & v28;
  else
    v29 = 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v30 = gatomPtrTargetFlags != 0;
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1LL);
  if ( gatomFeedbackSettings )
    v31 = v29 & v30;
  else
    v31 = 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v32 = gatomShutdownBlockingReason != 0;
  WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  if ( WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    v33 = v31 && v32;
  else
    v33 = 0;
  v34 = UserAddAtomEx(szMIPFLAGS, 1LL, 2LL);
  gatomMiPFlags = v34;
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  if ( CoreWindowProp::s_atom )
    v35 = v34 != 0 ? v33 : 0;
  else
    v35 = 0;
  v36 = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  LOBYTE(v3) = v36 != 0;
  gatomMonitorInheritance = v36;
  gatomLastPinned = v36;
  return v35 & (unsigned int)v3;
}
