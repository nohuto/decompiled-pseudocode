__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3456);
  v5 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 784), 19);
  v6 = v5;
  if ( v5 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 456) + 16LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3460);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 456) + 16LL);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 928) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3465);
    v7 = *(_QWORD *)(a1 + 928);
  }
  *a2 = v7;
  LOBYTE(v2) = v7 != 0;
  return v2;
}
