/*
 * XREFs of unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00318FC
 * Callers:
 *     SetDialogPointer @ 0x1C00317C0 (SetDialogPointer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_zero_to_PDIALOG(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax
  __int16 v4; // ax

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( (*(_WORD *)(v2 + 42) & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1101LL);
      v2 = *(_QWORD *)(a1 + 40);
    }
    v3 = *(_WORD *)(v2 + 42);
    if ( (v3 & 0x1000) == 0 )
    {
      v4 = v3 & 0x2FFF;
      if ( !v4 )
        return *(_QWORD *)(v2 + 296);
      if ( v4 == 676 )
      {
        if ( *(_DWORD *)(v2 + 252) )
          return *(_QWORD *)(a1 + 280);
        return *(_QWORD *)(v2 + 296);
      }
    }
  }
  return 0LL;
}
