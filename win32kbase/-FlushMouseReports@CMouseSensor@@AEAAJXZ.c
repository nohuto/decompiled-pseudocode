/*
 * XREFs of ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00F3B84
 * Callers:
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F3D88 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 *     ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C0214D70 (-OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01A7490 (RIMRefreshDeviceAttributes.c)
 *     ?HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z @ 0x1C0214C68 (-HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z.c)
 */

__int64 __fastcall CMouseSensor::FlushMouseReports(CMouseSensor *this)
{
  __int64 result; // rax
  char v3; // [rsp+20h] [rbp-18h]

  v3 = *((_BYTE *)this + 1832);
  if ( (unsigned int)CMouseProcessor::ProcessInput(
                       *((_QWORD *)this + 234),
                       *((_QWORD *)this + 228),
                       (char *)this + 1432,
                       24 * (unsigned int)*((unsigned __int16 *)this + 908),
                       v3) == 1 )
    RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), *(_QWORD *)(*((_QWORD *)this + 228) + 16LL));
  if ( *((__int64 *)this + 177) > 0 )
    CMouseSensor::MouseRateLimitHoldingFrame::HandleMouseReportRateLimitingTimer(
      (CMouseSensor *)((char *)this + 1408),
      1,
      0);
  *((_BYTE *)this + 1856) = 0;
  result = 0LL;
  *((_WORD *)this + 908) = 0;
  *((_QWORD *)this + 230) = 0LL;
  return result;
}
