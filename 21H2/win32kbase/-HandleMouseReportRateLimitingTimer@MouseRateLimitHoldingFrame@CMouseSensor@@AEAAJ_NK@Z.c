/*
 * XREFs of ?HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z @ 0x1C01EC160
 * Callers:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00E92C8 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 *     ?InitializeHoldingFrame@MouseRateLimitHoldingFrame@CMouseSensor@@QEAAX_NPEAUDEVICEINFO@@@Z @ 0x1C00E9368 (-InitializeHoldingFrame@MouseRateLimitHoldingFrame@CMouseSensor@@QEAAX_NPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CMouseSensor::MouseRateLimitHoldingFrame::HandleMouseReportRateLimitingTimer(
        CMouseSensor::MouseRateLimitHoldingFrame *this,
        char a2,
        int a3)
{
  void *v3; // r10
  union _LARGE_INTEGER DueTime; // [rsp+68h] [rbp+20h] BYREF

  v3 = (void *)*((_QWORD *)this + 57);
  if ( a2 )
    return ZwCancelTimer(*((HANDLE *)this + 57), 0LL);
  DueTime.QuadPart = -10000LL * a3;
  return ZwSetTimer(v3, &DueTime, 0LL, 0LL, 0, 0, 0LL);
}
