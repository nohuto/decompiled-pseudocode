/*
 * XREFs of NtUserDestroyCursor @ 0x1C003FAC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _BOOL8 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v4) + 8)
    || (v7 = SGDGetUserSessionState(v5), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8);
  LOBYTE(v10) = 3;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v13 = HMValidateHandle(a1, v10);
  if ( v13 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v18 = 87LL;
LABEL_18:
        UserSetLastError(v18);
        goto LABEL_8;
      }
    }
    else if ( PsGetCurrentProcess(v12, v11, v14) != gpepCSRSS )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *(_QWORD *)(v13 + 24) != CurrentProcessWin32Process )
      {
LABEL_17:
        v18 = 5LL;
        goto LABEL_18;
      }
    }
    if ( *(_QWORD *)(v13 + 48) == v13 )
    {
      v6 = _DestroyCursor((struct tagCURSOR *)v13, a2);
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_8:
  v15 = PsGetCurrentThreadWin32Thread(v12);
  --*(_DWORD *)(v15 + 48);
  UserSessionSwitchLeaveCrit(v16);
  return v6;
}
