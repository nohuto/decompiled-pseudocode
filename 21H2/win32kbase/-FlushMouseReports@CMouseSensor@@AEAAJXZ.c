/*
 * XREFs of ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00E92C8
 * Callers:
 *     ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C01EC260 (-OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ.c)
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01EC28C (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C0185AD0 (RIMRefreshDeviceAttributes.c)
 *     ?HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z @ 0x1C01EC160 (-HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01FB694 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 */

__int64 __fastcall CMouseSensor::FlushMouseReports(CMouseSensor *this)
{
  __int64 result; // rax
  char v3; // [rsp+20h] [rbp-18h]

  v3 = *((_BYTE *)this + 1744);
  if ( (unsigned int)CMouseProcessor::ProcessInput(
                       *((_QWORD *)this + 223),
                       *((_QWORD *)this + 217),
                       (char *)this + 1344,
                       24 * (unsigned int)*((unsigned __int16 *)this + 864),
                       v3) == 1 )
    RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), *(_QWORD *)(*((_QWORD *)this + 217) + 16LL));
  if ( *((__int64 *)this + 166) > 0 )
    CMouseSensor::MouseRateLimitHoldingFrame::HandleMouseReportRateLimitingTimer(
      (CMouseSensor *)((char *)this + 1320),
      1,
      0);
  *((_BYTE *)this + 1768) = 0;
  result = 0LL;
  *((_WORD *)this + 864) = 0;
  *((_QWORD *)this + 219) = 0LL;
  return result;
}
