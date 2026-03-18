/*
 * XREFs of unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x1C01BB1F0
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C02307E0 (xxxGetComboBoxInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PCOMBOWND(_QWORD *a1)
{
  __int64 v2; // r8
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(a1[5] + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 877);
  v2 = a1[5];
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2A2 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 878LL) )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return a1[35];
  return *(_QWORD *)(v2 + 296);
}
