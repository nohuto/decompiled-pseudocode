/*
 * XREFs of _TelIsProcessorModeAllowed@0 @ 0x10003030
 * Callers:
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall TelIsProcessorModeAllowed()
{
  int v1; // [esp+0h] [ebp-8h] BYREF
  int v2; // [esp+4h] [ebp-4h] BYREF

  v2 = 0;
  v1 = 4;
  NtQueryLicenseValue(asc_10005000, 0, &v2, 4, &v1);
  return v2 == 1;
}
