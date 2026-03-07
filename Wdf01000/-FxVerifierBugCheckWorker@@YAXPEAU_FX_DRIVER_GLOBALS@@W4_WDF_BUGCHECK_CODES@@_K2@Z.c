void __fastcall __noreturn FxVerifierBugCheckWorker(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_BUGCHECK_CODES WdfBugCheckCode,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  FxDriverGlobals->FxForceLogsInMiniDump = 1;
  KeBugCheckEx(0x10Du, WdfBugCheckCode, BugCheckParameter2, BugCheckParameter3, (ULONG_PTR)FxDriverGlobals);
}
