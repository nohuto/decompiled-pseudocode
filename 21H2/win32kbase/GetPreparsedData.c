/*
 * XREFs of GetPreparsedData @ 0x1C018ECC0
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C01918C0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0193110 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 784), 19);
  v10 = v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 456);
    if ( !*(_QWORD *)(v11 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v11 = *(_QWORD *)(v10 + 456);
    }
    v12 = *(_QWORD *)(v11 + 16);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 928);
    if ( !v12 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v12 = *(_QWORD *)(a1 + 928);
    }
  }
  *a2 = v12;
  LOBYTE(v3) = v12 != 0;
  return v3;
}
