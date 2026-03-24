/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C018CD74
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C018D1F0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C018C8B4 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C01CADFC (ApiSetEditionDelegateCapturePointers.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, __int64 a2)
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
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10456);
  CTouchProcessor::DelegateCapture((__int64)this, v9, a2, v5, (__int64)v10);
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
