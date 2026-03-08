/*
 * XREFs of unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00A0B80
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00A0450 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00A0A28 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C00EAAC4 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01B94A8 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PIMEWND(_QWORD *a1)
{
  __int64 v2; // r8
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(a1[5] + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 871LL);
  v2 = a1[5];
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2A9 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return a1[35];
  return *(_QWORD *)(v2 + 296);
}
