/*
 * XREFs of PsInvokeWin32Callout @ 0x1407D2D10
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x1402EA5D0 (SeCaptureAtomTableCallout.c)
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405A25D4 (PspSetProcessTimerDelayForWin32.c)
 *     PsApplyDeepFreezeOptimizations @ 0x14067CDA4 (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067CDE8 (PsRemoveDeepFreezeOptimizations.c)
 *     PfpQueryGpuUtilization @ 0x14067F23C (PfpQueryGpuUtilization.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x140776D40 (PsConvertToGuiThread.c)
 *     ExpWin32OpenProcedure @ 0x14077A640 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x14077D9F0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x14077E250 (ExpWin32CloseProcedure.c)
 *     ExpWin32ParseProcedure @ 0x140786D50 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x14078B860 (ExpWin32DeleteProcedure.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     KeUserModeCallback @ 0x1407DA1F0 (KeUserModeCallback.c)
 *     NtAddAtomEx @ 0x1407DC020 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1407DC6C0 (NtQueryInformationAtom.c)
 *     NtDeleteAtom @ 0x1407DCF30 (NtDeleteAtom.c)
 *     PsFreezeProcess @ 0x1407DD068 (PsFreezeProcess.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409AF770 (PspQueryProcessInterferenceCountCallback.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1409B1C08 (PspEnsureGuiThreadAndBatchFlush.c)
 * Callees:
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 *     MmSessionGetWin32Callouts @ 0x14034C010 (MmSessionGetWin32Callouts.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x1407D2DA4 (ExCallCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  __int64 v5; // r10
  __int64 v7; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  int v10; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v13; // r9
  unsigned int *v14; // rcx
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0;
  v4 = a4;
  v5 = a1;
  if ( !a3 )
    goto LABEL_2;
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 3221225485LL;
    v14 = 0LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      SessionId = MmGetSessionId((__int64)Process);
      if ( *v13 == SessionId )
      {
LABEL_2:
        v7 = v5;
        Win32Callouts = MmSessionGetWin32Callouts();
        return ExCallCallBack(Win32Callouts, v7, a2);
      }
    }
    v14 = v4;
  }
  result = ExCallSessionCallBack(v14, v5, a2, (int *)&v15);
  if ( (int)result >= 0 )
    return v15;
  return result;
}
