/*
 * XREFs of NtSetThreadExecutionState @ 0x1407A92D0
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14032D28C (SessionIsInteractive.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14032EC58 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032ECAC (PopApplyLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x1403B43BC (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1408657D4 (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall NtSetThreadExecutionState(int a1, _DWORD *a2)
{
  char PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v8; // ebx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char LegacyPowerRequestFlags; // al
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // bl
  bool v24; // di
  unsigned int SessionId; // eax
  __int64 v26; // rcx
  struct _LIST_ENTRY *v27; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v28 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return (unsigned int)-1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (a1 & 0x7FFFFFBC) != 0 || (a1 & 0x40) != 0 && a1 >= 0 )
    return (unsigned int)-1073741811;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a2;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v27 = Blink;
  if ( Blink || a1 >= 0 )
    goto LABEL_11;
  v8 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, 0LL, (__int64 *)&P);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = P;
  v8 = PopPowerRequestCreateCommon(P, 0, &v27);
  if ( v8 >= 0 )
  {
    Blink = v27;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v27;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, a1, &v28);
    *a2 = v28;
    if ( a1 >= 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, (unsigned int)a1);
      if ( (a1 & 1) != 0 )
      {
        PopAcquirePolicyLock(v15);
        PopSystemRequiredSet();
        PopReleasePolicyLock(v17, v16, v18);
      }
      if ( (a1 & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v19);
        if ( !PopPlatformAoAc || PopLidOpened || PopConsoleExternalDisplayConnected )
        {
          LOBYTE(v21) = 1;
          PopAcquireAdaptiveLock(v21);
          v23 = PopAdaptiveBootContext != 0;
          PopReleaseAdaptiveLock();
          v24 = v23;
        }
        else
        {
          v24 = 1;
        }
        PopReleasePolicyLock(v21, v20, v22);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v24 )
        {
          LOBYTE(v26) = 1;
          PopNotifyConsoleUserPresent(v26, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, a1, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v9 )
    PoDestroyReasonContext(v9, v10, v11, v12);
  return (unsigned int)v8;
}
