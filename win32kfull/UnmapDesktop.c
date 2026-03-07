__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // r14
  bool v3; // bl
  bool v4; // bp
  bool v5; // r15
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdi
  struct _KPROCESS *v10; // rcx
  __int64 v11; // rcx

  v1 = *(struct tagDESKTOP **)(a1 + 8);
  v3 = IS_USERCRIT_OWNED_EXCLUSIVE();
  if ( !v3 )
    EnterCrit(1LL, 0LL);
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessSessionId(*(_QWORD *)a1);
    LOBYTE(v6) = v5;
    LOBYTE(v7) = v4;
    WPP_RECORDER_AND_TRACE_SF_qqDD(WPP_GLOBAL_Control->AttachedDevice, v7, v6, (_DWORD)gFullLog);
  }
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 8) - 40LL) + 1;
  v8 = ReferenceDwmProcess();
  v9 = v8;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v10 = *(struct _KPROCESS **)a1;
    if ( *(_QWORD *)a1 != gpepCSRSS && v10 != (struct _KPROCESS *)v8 )
      FreeView(v10, v1);
  }
  DereferenceDwmProcess(v9);
  if ( *(_DWORD *)(a1 + 20) == 1 )
    DestroyDesktop(v1);
  if ( !v3 )
    UserSessionSwitchLeaveCrit(v11);
  return 0LL;
}
