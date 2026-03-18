/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C01B7010
 * Callers:
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C01A1EF8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01B78F0 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 */

void __fastcall DeadzonePalmTelemetry::ClearSession(DeadzonePalmTelemetry *this)
{
  DeadzonePalmTelemetry::_UploadTelemetryData(this, 1);
  *((_DWORD *)this + 1) = 0;
  memset((char *)this + 2060, 0, 0x2800uLL);
  memset((char *)this + 13, 0, 0x7FFuLL);
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 12) = 0;
}
