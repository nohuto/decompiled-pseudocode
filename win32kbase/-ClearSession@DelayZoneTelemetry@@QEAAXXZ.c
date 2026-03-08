/*
 * XREFs of ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0232030
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0215D38 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0094BE0 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C0232450 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 */

void __fastcall DelayZoneTelemetry::ClearSession(DelayZoneTelemetry *this)
{
  DelayZoneTelemetry::UploadTelemetryData(this, 1);
  *((_DWORD *)this + 2) = 0;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset((char *)this + 17, 0, 0x7FFuLL);
  *((_BYTE *)this + 16) = 0;
  DelayZoneTelemetry::ClearInputPanelRects(this);
  *((_DWORD *)this + 3) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}
