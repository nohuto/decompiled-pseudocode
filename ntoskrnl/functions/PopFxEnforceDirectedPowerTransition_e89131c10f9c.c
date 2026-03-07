__int64 __fastcall PopFxEnforceDirectedPowerTransition(ULONG_PTR BugCheckParameter2, int a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rsi
  __int64 result; // rax

  v3 = a3;
  if ( a2 < 0 )
    PopDirectedDripsDiagTraceDfxPowerStateFailure();
  result = (unsigned int)PopDirectedDripsDfxEnforcementPolicy;
  if ( PopDirectedDripsDfxEnforcementPolicy && a2 < 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && PopDirectedDripsDfxEnforcementPolicy == 3 )
      NT_ASSERT(
        "*** DFX Transition Failure
    This break point indicates that a device has failed its
    Directed Power transition callback.
");
    result = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( PopDirectedDripsDfxEnforcementPolicy == 2 )
      KeBugCheckEx(0x9Fu, 6uLL, BugCheckParameter2, v3, 0LL);
    if ( (*(_DWORD *)(result + 760) & 0x40) == 0 )
      return DbgkWerCaptureLiveKernelDump(
               (unsigned int)L"DirectedFxPowerStateFailure",
               425,
               BugCheckParameter2,
               v3,
               0LL,
               0LL,
               0LL,
               0LL,
               0);
  }
  return result;
}
