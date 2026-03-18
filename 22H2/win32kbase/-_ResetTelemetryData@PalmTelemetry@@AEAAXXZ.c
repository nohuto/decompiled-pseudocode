/*
 * XREFs of ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01B181C
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00E3672 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     rimSetupPalmTelemetry @ 0x1C0185D88 (rimSetupPalmTelemetry.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A894C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 */

void __fastcall PalmTelemetry::_ResetTelemetryData(PalmTelemetry *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 519) = 0;
  memset((char *)this + 2080, 0, 0x27F0uLL);
  memset((char *)this + 29, 0, 0x7FFuLL);
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 28) = 0;
}
