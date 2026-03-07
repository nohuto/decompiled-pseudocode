__int64 *__fastcall ListTableBegin(__int64 *a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 48);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 49);
  v5[0] = a2;
  v5[1] = 0LL;
  v5[2] = *(_QWORD *)a2;
  ListTableIteratorNext(a1, (__int64)v5);
  return a1;
}
