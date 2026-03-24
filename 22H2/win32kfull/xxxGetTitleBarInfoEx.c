/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C002E488
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     DwmSyncGetTitleBarInfo @ 0x1C002E5B4 (DwmSyncGetTitleBarInfo.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0060FB4 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0247188 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rsi
  NTSTATUS TitleBarInfo; // esi
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  char *v11; // rsi
  __int64 v12; // rbp
  int v13; // eax
  ULONG v15; // eax
  _DWORD *v16; // rsi
  int v17; // ebx
  int v18; // edi
  int v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v19 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed(a1) )
    goto LABEL_12;
  v8 = (void *)ReferenceDwmApiPort(v6, v5);
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v8);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v15 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v15);
    v13 = 1;
  }
  else
  {
    v3 = 1;
    v20 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v20);
    v11 = (char *)a2 + 44;
    v12 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v11, v11, CurrentThreadDpiAwarenessContext, &v20);
      v11 += 16;
      --v12;
    }
    while ( v12 );
    v13 = v19;
  }
  if ( !v13 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v16 = (_DWORD *)((char *)a2 + 28);
    v17 = 2;
    v18 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v16 & 0x8000) == 0 )
      {
        LOWORD(v19) = 0;
        LODWORD(v20) = 0;
        xxxCalcCaptionButton((_DWORD)a1, v17, (unsigned int)&v19, v18, (__int64)&v20, 1);
      }
      ++v17;
      v18 += 16;
      ++v16;
    }
    while ( v17 <= 5 );
    return 1;
  }
  return v3;
}
