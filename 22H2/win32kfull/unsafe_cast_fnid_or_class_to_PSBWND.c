/*
 * XREFs of unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C0062C1C
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00629F0 (xxxGetScrollBarInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PSBWND(_QWORD *a1)
{
  __int64 v2; // r8
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  v2 = a1[5];
  if ( (*(_WORD *)(v2 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1109LL);
    v2 = a1[5];
  }
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x29A && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 876LL) )
    return 0LL;
  if ( *(_DWORD *)(v2 + 252) )
    return a1[35];
  return *(_QWORD *)(v2 + 296);
}
