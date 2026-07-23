/*
 * XREFs of PsInvokeWin32Callout @ 0x140684DA0
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x1402396C4 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405828DC (PspSetProcessTimerDelayForWin32.c)
 *     PsConvertToGuiThread @ 0x1405FE150 (PsConvertToGuiThread.c)
 *     NtQueryInformationAtom @ 0x1405FE8D0 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x1405FEBB0 (NtAddAtomEx.c)
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 *     ExpWin32OpenProcedure @ 0x1406009A0 (ExpWin32OpenProcedure.c)
 *     NtDeleteAtom @ 0x140600A80 (NtDeleteAtom.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140601680 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x140602390 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x14060B880 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x140613200 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x14061AEEC (PfpQueryGpuUtilization.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 *     KeUserModeCallback @ 0x140707410 (KeUserModeCallback.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140909290 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14027BE80 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14027BF80 (ExDereferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExCallSessionCallBack @ 0x1405E44F8 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x140684A9C (ExCallCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int *v4; // r10
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
  unsigned int *v17; // rcx
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
  v10 = ExCallSessionCallBack(v17, v5, a2, (int *)&v18);
  if ( v10 >= 0 )
    return v18;
  return (unsigned int)v10;
}
