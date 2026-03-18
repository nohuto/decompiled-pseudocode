/*
 * XREFs of unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0141E90
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C0141DCC (xxxGetComboBoxInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(_QWORD *a1)
{
  __int64 v2; // r8
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  v2 = a1[5];
  if ( _bittest16((const signed __int16 *)(v2 + 42), 0xCu) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = a1[5];
  }
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2A3 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return a1[35];
  return *(_QWORD *)(v2 + 296);
}
