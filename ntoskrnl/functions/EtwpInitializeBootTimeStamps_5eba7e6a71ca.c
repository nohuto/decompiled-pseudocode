LARGE_INTEGER __fastcall EtwpInitializeBootTimeStamps(char a1)
{
  int v1; // edi
  __int64 SystemTimePrecise; // rax
  __int128 v4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]
  int v6; // [rsp+50h] [rbp+10h] BYREF
  LARGE_INTEGER v7; // [rsp+58h] [rbp+18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF

  v7.QuadPart = 0LL;
  v6 = 0;
  v8 = 0LL;
  v5 = 0LL;
  v1 = 3;
  v4 = 0LL;
  if ( !a1 )
  {
    KeQueryBootTimeValues(&EtwpRefTimeSystem, &v7, &v8);
    v1 = 7;
    EtwpBootTime = v7.QuadPart - v8;
  }
  RtlGetMultiTimePrecise((LARGE_INTEGER *)&v4, v1, &v6);
  EtwpRefQpcDelta = 0LL;
  if ( (v6 & 1) != 0 )
  {
    EtwpRefTimePerfCounter = v4;
    if ( (v6 & 2) != 0 )
      EtwpRefQpcDelta = *((_QWORD *)&v4 + 1) - v4;
  }
  else
  {
    EtwpRefTimePerfCounter = KeQueryPerformanceCounter(0LL).QuadPart;
  }
  EtwpRefTimeCycle = __rdtsc();
  if ( (v1 & 4) != 0 )
  {
    if ( (v6 & 4) != 0 )
      SystemTimePrecise = v5;
    else
      SystemTimePrecise = RtlGetSystemTimePrecise();
    EtwpRefTimeSystem = SystemTimePrecise;
  }
  return KeQueryPerformanceCounter(&EtwPerfFreq);
}
