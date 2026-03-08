/*
 * XREFs of ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1C019DD70
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00875D8 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const wchar_t *__fastcall RimTelemetry::PointerDeviceTypeToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return L"Unknown";
    case 1:
      return L"SingleTouch";
    case 2:
      return L"SerialTouch";
    case 3:
      return L"ParallelACTouch";
    case 4:
      return L"ParallelNullTouch";
    case 5:
      return L"IntegratedPen";
    case 6:
      return L"ExternalPen";
    case 7:
      return L"Touchpad";
  }
  return L"Unexpected Value";
}
