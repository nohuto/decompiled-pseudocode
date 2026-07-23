/*
 * XREFs of PopFxEnforceDirectedPowerTransition @ 0x14056AD4C
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x14056A79C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x14057CD88 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888C90 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopFxEnforceDirectedPowerTransition(ULONG_PTR BugCheckParameter2, int a2, unsigned __int8 a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rsi

  result = *(unsigned int *)(BugCheckParameter2 + 824);
  v5 = a3;
  if ( (result & 1) == 0 )
  {
    if ( a2 < 0 )
      PopDirectedDripsDiagTraceDfxPowerStateFailure();
    result = (unsigned int)PopDirectedDripsDfxEnforcementPolicy;
    if ( PopDirectedDripsDfxEnforcementPolicy && a2 < 0 )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && PopDirectedDripsDfxEnforcementPolicy == 3 )
        NT_ASSERT(
          "*** DFX Transition Failure
    This break point indicates that a device has failed its
    Directed Power tran"
          "sition callback.
");
      result = *(_QWORD *)(BugCheckParameter2 + 48);
      if ( PopDirectedDripsDfxEnforcementPolicy == 2 )
        KeBugCheckEx(0x9Fu, 6uLL, BugCheckParameter2, v5, 0LL);
      if ( (*(_DWORD *)(result + 760) & 0x40) == 0 )
        return DbgkWerCaptureLiveKernelDump(L"DirectedFxPowerStateFailure", 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
