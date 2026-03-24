/*
 * XREFs of GetPreparsedData @ 0x1C015B0AC
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C015D200 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C015E1E0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3446);
  v5 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 736), 19);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 464);
    if ( !*(_QWORD *)(v7 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3450);
      v7 = *(_QWORD *)(v6 + 464);
    }
    v8 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 880);
    if ( !v8 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3455);
      v8 = *(_QWORD *)(a1 + 880);
    }
  }
  *a2 = v8;
  LOBYTE(v2) = v8 != 0;
  return v2;
}
