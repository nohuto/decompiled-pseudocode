/*
 * XREFs of GetKbdLangSwitch @ 0x1C0134DAC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h]

  DefaultLocaleId = 0;
  FastGetProfileIntW(a1, 25LL, L"Hotkey");
  LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 0;
  return 1LL;
}
