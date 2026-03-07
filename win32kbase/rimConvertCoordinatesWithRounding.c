__int64 __fastcall rimConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int *v15; // rdx

  v6 = 0;
  v7 = a3;
  if ( a1 >= a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 63);
  if ( (int)v7 >= a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 64);
  v11 = a2 - a1;
  v12 = (a4 - (int)v7) * (__int64)(a5 - a1);
  v13 = 2 * v12;
  if ( v12 <= 0 )
    v14 = v13 - v11;
  else
    v14 = v11 + v13;
  if ( !LongLongToLong(v7 + v14 / (2LL * v11), plResult) )
  {
    if ( *v15 >= a4 )
      *v15 = a4 - 1;
    return 1;
  }
  return v6;
}
