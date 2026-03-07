__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // esi
  void *v5; // rbx
  NTSTATUS TitleBarInfo; // ebx
  __int64 CurrentThreadDpiAwarenessContext; // r15
  char *v8; // rbx
  __int64 v9; // rbp
  int v10; // eax
  ULONG v12; // eax
  _DWORD *v13; // rsi
  int v14; // ebx
  int v15; // edi
  int v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed() )
    goto LABEL_9;
  v5 = (void *)ReferenceDwmApiPort();
  UserSessionSwitchLeaveCrit();
  TitleBarInfo = DwmSyncGetTitleBarInfo(v5);
  EnterCrit(1LL, 0LL);
  if ( TitleBarInfo < 0 )
  {
    v12 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v12);
    v10 = 1;
  }
  else
  {
    v3 = 1;
    v17 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v17);
    v8 = (char *)a2 + 44;
    v9 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v8, v8, (unsigned int)CurrentThreadDpiAwarenessContext, &v17);
      v8 += 16;
      --v9;
    }
    while ( v9 );
    v10 = v16;
  }
  if ( !v10 )
  {
LABEL_9:
    memset_0((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v13 = (_DWORD *)((char *)a2 + 28);
    v14 = 2;
    v15 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v13 & 0x8000) == 0 )
      {
        LOWORD(v16) = 0;
        LODWORD(v17) = 0;
        xxxCalcCaptionButton((_DWORD)a1, v14, (unsigned int)&v16, v15, (__int64)&v17, 1);
      }
      ++v14;
      v15 += 16;
      ++v13;
    }
    while ( v14 <= 5 );
    return 1;
  }
  return v3;
}
