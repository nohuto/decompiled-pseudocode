/*
 * XREFs of PsInvokeWin32Callout @ 0x1406F83A0
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x140241C40 (SeCaptureAtomTableCallout.c)
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     KiSystemCall64 @ 0x140434000 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E1428 (PspSetProcessTimerDelayForWin32.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x140659774 (PspEnsureGuiThreadAndBatchFlush.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     NtDeleteAtom @ 0x1406AB2D0 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1406BC9D0 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406BFED0 (NtAddAtomEx.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1406C0100 (ExpWin32OkayToCloseProcedure.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 *     ExpWin32CloseProcedure @ 0x1406C1740 (ExpWin32CloseProcedure.c)
 *     NtQueryInformationAtom @ 0x1406C43F0 (NtQueryInformationAtom.c)
 *     ExpWin32ParseProcedure @ 0x1406CB660 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1406D5120 (ExpWin32DeleteProcedure.c)
 *     PfpQueryGpuUtilization @ 0x1406DFA80 (PfpQueryGpuUtilization.c)
 *     ExpWin32OpenProcedure @ 0x1406F5D60 (ExpWin32OpenProcedure.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409B04E0 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140281830 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140281930 (ExDereferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x1406F8074 (ExCallCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int *v5; // r10
  union _RTL_RUN_ONCE *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned int v10; // esi
  __int64 result; // rax
  int v12; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v15; // r9
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int *v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  v18 = 0;
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return 3221225485LL;
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
          Win32Callouts = MmSessionGetWin32Callouts();
          return ExCallCallBack((signed __int64 *)Win32Callouts, v4, a2);
        }
      }
      v17 = v5;
    }
    result = ExCallSessionCallBack(v17, v4, a2, (int *)&v18);
    if ( (int)result >= 0 )
      return v18;
  }
  else
  {
    v7 = MmSessionGetWin32Callouts();
    v8 = ExReferenceCallBackBlock((signed __int64 *)v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v8[1].Count)(v8[2].Count, v4, a2);
      ExDereferenceCallBackBlock((signed __int64 *)v7, v9);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v10;
  }
  return result;
}
