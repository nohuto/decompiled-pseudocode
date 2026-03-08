/*
 * XREFs of NtSetThreadExecutionState @ 0x14073A9D0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLegacyPowerRequestFlags @ 0x1402B8BEC (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1402B8C40 (PopApplyLegacyPowerRequestFlags.c)
 *     SessionIsInteractive @ 0x1402B92A4 (SessionIsInteractive.c)
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     PoCaptureReasonContext @ 0x1402BD2FC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1402BDBE4 (PoDestroyReasonContext.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     PopSystemRequiredSet @ 0x1403AF6CC (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406FF3F8 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x14073A3BC (PopNotifyConsoleUserPresent.c)
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1408611C4 (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall NtSetThreadExecutionState(int a1, __int64 a2)
{
  _DWORD *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v7; // ebx
  _QWORD *v8; // rsi
  char LegacyPowerRequestFlags; // al
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // bl
  bool v20; // di
  unsigned int SessionId; // eax
  __int64 v22; // rcx
  struct _LIST_ENTRY *v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v2 = (_DWORD *)a2;
  v24 = 0;
  P = 0LL;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)a2 )
    return (unsigned int)-1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (a1 & 0x7FFFFFBC) != 0 || (a1 & 0x40) != 0 && a1 >= 0 )
    return (unsigned int)-1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v23 = Blink;
  if ( Blink || a1 >= 0 )
    goto LABEL_11;
  v7 = PoCaptureReasonContext(0LL, a2, 0LL, 1, 0LL, &P);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = P;
  v7 = PopPowerRequestCreateCommon(P, 0, &v23);
  if ( v7 >= 0 )
  {
    Blink = v23;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v23;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, a1, &v24);
    *v2 = v24;
    if ( a1 >= 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, (unsigned int)a1);
      if ( (a1 & 1) != 0 )
      {
        PopAcquirePolicyLock(v11);
        PopSystemRequiredSet();
        PopReleasePolicyLock(v13, v12, v14);
      }
      if ( (a1 & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v15);
        if ( !PopPlatformAoAc || PopLidOpened || PopConsoleExternalDisplayConnected )
        {
          LOBYTE(v17) = 1;
          PopAcquireAdaptiveLock(v17);
          v19 = PopAdaptiveBootContext != 0;
          PopReleaseAdaptiveLock();
          v20 = v19;
        }
        else
        {
          v20 = 1;
        }
        PopReleasePolicyLock(v17, v16, v18);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v20 )
        {
          LOBYTE(v22) = 1;
          PopNotifyConsoleUserPresent(v22, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, a1, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v8 )
    PoDestroyReasonContext(v8);
  return (unsigned int)v7;
}
