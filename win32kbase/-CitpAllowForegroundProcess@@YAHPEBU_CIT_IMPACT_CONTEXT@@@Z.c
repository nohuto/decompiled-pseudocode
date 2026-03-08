/*
 * XREFs of ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0AB4
 * Callers:
 *     CitDisplayPowerChange @ 0x1C00B00A4 (CitDisplayPowerChange.c)
 *     CitSessionConnectChange @ 0x1C00B01F0 (CitSessionConnectChange.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0564 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  bool result; // al

  result = 0;
  if ( (*((_BYTE *)a1 + 112) & 2) != 0 )
    return *((_DWORD *)a1 + 50) != 0;
  return result;
}
