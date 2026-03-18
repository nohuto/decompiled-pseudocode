/*
 * XREFs of GetKbdLangSwitch @ 0x1C01202D8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h]

  DefaultLocaleId = 0;
  FastGetProfileIntW(a1, 25LL, L"Hotkey");
  LODWORD(WPP_MAIN_CB.SecurityDescriptor) = 0;
  return 1LL;
}
