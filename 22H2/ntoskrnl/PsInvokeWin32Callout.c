/*
 * XREFs of PsInvokeWin32Callout @ 0x14061B5A0
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x140314314 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405825EC (PspSetProcessTimerDelayForWin32.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     KeUserModeCallback @ 0x14063D750 (KeUserModeCallback.c)
 *     PsConvertToGuiThread @ 0x140683840 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x140683E50 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x140684130 (NtAddAtomEx.c)
 *     PsThawProcess @ 0x1406857E4 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14068595C (PsFreezeProcess.c)
 *     ExpWin32OpenProcedure @ 0x140685F90 (ExpWin32OpenProcedure.c)
 *     NtDeleteAtom @ 0x140686070 (NtDeleteAtom.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140686410 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1406871E0 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x140690140 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x140696FF0 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x14069EE9C (PfpQueryGpuUtilization.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     PopInvokeWin32Callout @ 0x1406F45B8 (PopInvokeWin32Callout.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140909180 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     MmSessionGetWin32Callouts @ 0x14025A170 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x14025A1B0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14025A270 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExCallCallBack @ 0x14061B29C (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x140660AC8 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rbp
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  int v10; // ebx
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  _RTL_RUN_ONCE *v16; // rax
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
