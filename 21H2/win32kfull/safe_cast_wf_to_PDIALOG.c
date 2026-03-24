/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C01624D8
 * Callers:
 *     xxxSetWindowLong @ 0x1C00FB008 (xxxSetWindowLong.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1)
{
  __int64 v2; // rdx

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v2 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1102LL);
    v2 = *(_QWORD *)(a1 + 40);
    if ( (*(_WORD *)(v2 + 42) & 0x1000) != 0 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v2 + 18) & 1) == 0 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
