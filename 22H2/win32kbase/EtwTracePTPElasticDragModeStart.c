/*
 * XREFs of EtwTracePTPElasticDragModeStart @ 0x1C013ABB0
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DFD20 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePTPElasticDragModeStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PTPElasticDragModeStart, &W32kControlGuid);
  return result;
}
