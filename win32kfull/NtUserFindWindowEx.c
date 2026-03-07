__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v17; // rcx
  struct tagWND *v18; // rdi
  struct tagWND *v19; // r15
  int v20; // r8d
  const unsigned __int16 *v21; // rdx
  int v22; // ecx
  const unsigned __int16 *v23; // rsi
  ULONG64 v24; // r9
  ULONG64 v25; // r8
  __int64 v26; // rcx
  struct tagWND *Window; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rax
  unsigned __int16 Atom; // [rsp+50h] [rbp-298h]
  unsigned __int16 v34[256]; // [rsp+A0h] [rbp-248h] BYREF

  v11 = 0LL;
  if ( (unsigned __int8)ShouldRunShared(1LL) )
    EnterSharedCrit(v9, v8, v10);
  else
    EnterCrit(0LL, 1LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v12) + 8)
    || (v14 = SGDGetUserSessionState(v13), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v15);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 == -3 )
  {
    v18 = 0LL;
    v31 = PtiCurrentShared(v17);
    if ( v31 )
    {
      v32 = *((_QWORD *)v31 + 57);
      if ( v32 )
        v18 = *(struct tagWND **)(v32 + 104);
    }
  }
  else if ( a1 )
  {
    v18 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v18 )
      goto LABEL_45;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a2 )
  {
    v19 = (struct tagWND *)ValidateHwnd(a2);
    if ( !v19 )
      goto LABEL_45;
  }
  else
  {
    v19 = 0LL;
  }
  Atom = 0;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v20 = *(_DWORD *)a3;
  v21 = *(const unsigned __int16 **)(a3 + 8);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v22 = *(_DWORD *)a4;
  v23 = *(const unsigned __int16 **)(a4 + 8);
  if ( ((unsigned __int64)v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v21 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = (ULONG64)v21 + (unsigned __int16)v20 + 2;
    if ( v24 <= (unsigned __int64)v21 || v24 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v20 > (unsigned __int16)HIWORD(*(_DWORD *)a3) || (v20 & 1) != 0 )
    {
      if ( (v20 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9814LL);
      ExRaiseAccessViolation();
    }
  }
  if ( ((unsigned __int8)v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (ULONG64)v23 + (unsigned __int16)v22 + 2;
  if ( v25 <= (unsigned __int64)v23 || v25 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v22 > (unsigned __int16)HIWORD(*(_DWORD *)a4) )
  {
    if ( (v22 & 1) == 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( (v22 & 1) != 0 )
  {
LABEL_40:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9815LL);
LABEL_41:
    ExRaiseAccessViolation();
  }
  if ( !v21 || ((unsigned __int64)v21 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    Window = _FindWindowEx(v18, v19, (unsigned __int16)v21, v23);
LABEL_43:
    if ( Window )
      v11 = *(_QWORD *)Window;
    goto LABEL_45;
  }
  if ( RtlStringCchCopyW(v34, 0x100uLL, v21) >= 0 )
    Atom = UserFindAtom(v34);
  if ( Atom )
  {
    Window = _FindWindowEx(v18, v19, Atom, v23);
    goto LABEL_43;
  }
LABEL_45:
  v28 = PsGetCurrentThreadWin32Thread(v26);
  --*(_DWORD *)(v28 + 48);
  UserSessionSwitchLeaveCrit(v29);
  return v11;
}
