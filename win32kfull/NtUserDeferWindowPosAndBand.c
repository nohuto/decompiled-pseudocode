__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v12; // rbx
  unsigned int v13; // r15d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagWND *v25; // rsi
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v30; // ecx
  struct tagWND *v31; // [rsp+58h] [rbp-18h] BYREF
  struct tagWND *v32; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v33 = a4;
  v12 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v13 = a4;
  EnterCrit(0LL, 0LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v15) + 8)
    || (v17 = SGDGetUserSessionState(v16), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v18);
  v20 = a8;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (v20 & 0xFFFC9800) != 0 )
  {
    v30 = 1004;
LABEL_18:
    UserSetLastError(v30);
    goto LABEL_12;
  }
  v21 = HMValidateHandle(a1, 4u);
  v23 = v21;
  if ( !v21 )
    goto LABEL_12;
  if ( (*(_DWORD *)(v21 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v21);
    v30 = 1405;
    goto LABEL_18;
  }
  if ( (unsigned int)ValidateHWNDND(a2, &v31) && (unsigned int)ValidateHWNDIA(a3, &v32) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v22);
    v25 = v31;
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v31, CurrentThreadDpiAwarenessContext) )
    {
      TransformSWPCoords(v25, &v33, &a5, &a6, &a7, v20);
      v13 = v33;
    }
    v26 = (__int64 *)_DeferWindowPosAndBand(v23, v25, v32, v13, a5, a6, a7, v20, a9, a10 != 0);
    if ( v26 )
      v12 = *v26;
  }
  else if ( a10 )
  {
    DestroySMWP(v23);
  }
LABEL_12:
  v27 = PsGetCurrentThreadWin32Thread(v22);
  --*(_DWORD *)(v27 + 48);
  UserSessionSwitchLeaveCrit(v28);
  return v12;
}
