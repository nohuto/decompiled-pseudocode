/*
 * XREFs of unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00F9F78
 * Callers:
 *     SetDialogPointer @ 0x1C00F9E74 (SetDialogPointer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_zero_to_PDIALOG(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // cx
  __int16 v4; // cx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 40) + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 868LL);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 )
    return 0LL;
  v4 = v3 & 0x2FFF;
  if ( !v4 )
    return *(_QWORD *)(v2 + 296);
  if ( v4 != 676 )
    return 0LL;
  if ( !*(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(v2 + 296);
  return *(_QWORD *)(a1 + 280);
}
