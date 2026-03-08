/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01EFAD0
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01F02E0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF640 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C023D134 (ApiSetEditionDelegateCapturePointers.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, unsigned __int64 a2)
{
  char v4; // di
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // bl
  _OWORD v9[7]; // [rsp+40h] [rbp-198h] BYREF
  _DWORD v10[32]; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v11[128]; // [rsp+130h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v10, 0, sizeof(v10));
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11176);
  CTouchProcessor::DelegateCapture(this, v9, a2, v5, (__int64)v10);
  if ( !LOWORD(v10[0])
    || !v10[1]
    || (v4 = 1, v7 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v11, (const struct tagINPUTDEST *)&v10[2])) )
  {
    v7 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v11);
  if ( v7 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v6, v10);
}
