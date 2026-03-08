/*
 * XREFs of ?CanCombineMouseReportBatches@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_N_JPEAUDEVICEINFO@@_NK@Z @ 0x1C0214C0C
 * Callers:
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F3D88 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMouseSensor::MouseRateLimitHoldingFrame::CanCombineMouseReportBatches(
        CMouseSensor::MouseRateLimitHoldingFrame *this,
        __int64 a2,
        struct DEVICEINFO *a3,
        char a4,
        unsigned int a5)
{
  __int64 v5; // rax

  v5 = *((_QWORD *)this + 1);
  return v5 > 0
      && a3 == *((struct DEVICEINFO **)this + 52)
      && a4 == *((_BYTE *)this + 424)
      && a2 - *((_QWORD *)this + 54) <= v5
      && *((unsigned __int16 *)this + 204) + a5 / 0x18 <= 0x10;
}
