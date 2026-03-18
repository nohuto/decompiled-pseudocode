/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01C423C
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01C45D0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C3E28 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C0206A94 (ApiSetEditionDelegateCapturePointers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  char v10; // di
  _OWORD v12[7]; // [rsp+40h] [rbp-198h] BYREF
  _DWORD v13[32]; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v14[128]; // [rsp+130h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v13, 0, sizeof(v13));
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  CTouchProcessor::DelegateCapture((__int64)this, v12, a2, v8, (__int64)v13);
  if ( !LOWORD(v13[0])
    || !v13[1]
    || (v4 = 1, v10 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v14, (const struct tagINPUTDEST *)&v13[2])) )
  {
    v10 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v14);
  if ( v10 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v9, v13);
}
