/*
 * XREFs of IsLegacyTouchPad @ 0x1C009C6AC
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C009C550 (_GetPrecisionTouchPadConfiguration.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C020DB48 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLegacyTouchPad(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !*(_BYTE *)(a1 + 48) )
    return *(_WORD *)(a1 + 880) == 1;
  return result;
}
