/*
 * XREFs of EtwpFixBootSystemTime @ 0x140B942D0
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140205310 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeQueryBootTimeValues @ 0x1402E3FEC (KeQueryBootTimeValues.c)
 *     RtlGetMultiTimePrecise @ 0x1402F9390 (RtlGetMultiTimePrecise.c)
 */

__int64 EtwpFixBootSystemTime()
{
  int MultiTimePrecise; // edi
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 SystemTimePrecise; // r8
  LONGLONG v3; // rbx
  unsigned __int128 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-10h]
  int v8; // [rsp+60h] [rbp+20h] BYREF
  LARGE_INTEGER v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v9.QuadPart = 0LL;
  v10 = 0LL;
  v8 = 0;
  v6 = 0LL;
  v7 = 0LL;
  KeQueryBootTimeValues(&EtwpRefTimeSystem, &v9, &v10);
  EtwpBootTime = v9.QuadPart - v10;
  MultiTimePrecise = RtlGetMultiTimePrecise((LARGE_INTEGER *)&v6, 5, &v8);
  if ( MultiTimePrecise >= 0 && (v8 & 1) != 0 )
  {
    PerformanceCounter.QuadPart = v6;
  }
  else
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MultiTimePrecise < 0 )
      goto LABEL_7;
  }
  if ( (v8 & 4) != 0 )
  {
    SystemTimePrecise = v7;
    goto LABEL_8;
  }
LABEL_7:
  SystemTimePrecise = RtlGetSystemTimePrecise();
LABEL_8:
  v3 = PerformanceCounter.QuadPart - EtwpRefTimePerfCounter;
  if ( MEMORY[0xFFFFF78000000369] )
    v3 <<= MEMORY[0xFFFFF78000000369];
  v4 = (unsigned __int64)v3 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
  EtwpRefTimeSystem = SystemTimePrecise - *((_QWORD *)&v4 + 1);
  return v4;
}
