/*
 * XREFs of ?SetDeviceTelemetryInfoFlags@FxDevice@@UEAAXW4FxDeviceInfoFlags@@@Z @ 0x1C0009590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDevice::SetDeviceTelemetryInfoFlags(FxDevice *this, FxDeviceInfoFlags Flag)
{
  this->m_DeviceTelemetryInfoFlags |= Flag;
}
