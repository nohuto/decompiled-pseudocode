/*
 * XREFs of ?MKButtonSelect@@YAHG@Z @ 0x1C01E43D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0241574 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall MKButtonSelect(__int16 a1)
{
  gwMKCurrentButton = a1;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
