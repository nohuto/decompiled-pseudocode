/*
 * XREFs of PsInvokeWin32Callout @ 0x14061B140
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x1402BB4B4 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405826AC (PspSetProcessTimerDelayForWin32.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PopInvokeWin32Callout @ 0x14067B7C8 (PopInvokeWin32Callout.c)
 *     PsFreezeProcess @ 0x14067CC1C (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14067D0F8 (PsThawProcess.c)
 *     PsConvertToGuiThread @ 0x14069EF80 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x14069F590 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x14069F870 (NtAddAtomEx.c)
 *     ExpWin32OpenProcedure @ 0x1406A1210 (ExpWin32OpenProcedure.c)
 *     NtDeleteAtom @ 0x1406A12F0 (NtDeleteAtom.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406A1690 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406A2460 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1406AD190 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1406B4030 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1406BBE6C (PfpQueryGpuUtilization.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     KeUserModeCallback @ 0x1406F0030 (KeUserModeCallback.c)
 *     PspAssignProcessToJob @ 0x14071F430 (PspAssignProcessToJob.c)
 *     PspShutdownCsrProcess @ 0x140906650 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140909130 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x140253550 (MmGetSessionId.c)
 *     MmSessionGetWin32Callouts @ 0x14025A910 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x14025A950 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14025AA10 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x14061AE3C (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x140683678 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rbp
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  int v10; // ebx
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  union _RTL_RUN_ONCE *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0;
  v4 = a4;
  v5 = a1;
  if ( !a3 )
  {
    Win32Callouts = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v5, a2);
      ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v9);
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  v12 = a3 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
      return (unsigned int)-1073741811;
    v17 = 0LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      SessionId = MmGetSessionId((__int64)Process);
      if ( *v15 == SessionId )
      {
        v16 = MmSessionGetWin32Callouts();
        return (unsigned int)ExCallCallBack((signed __int64 *)v16, v5, a2);
      }
    }
    v17 = v4;
  }
  v10 = ExCallSessionCallBack(v17, v5, a2, &v18);
  if ( v10 >= 0 )
    return v18;
  return (unsigned int)v10;
}
