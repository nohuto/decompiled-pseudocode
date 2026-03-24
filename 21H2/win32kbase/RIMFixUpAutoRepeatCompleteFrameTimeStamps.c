/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C01717E0
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0174214 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LARGE_INTEGER __fastcall RIMFixUpAutoRepeatCompleteFrameTimeStamps(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx

  v3 = 0LL;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1296);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1297);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1298);
  result = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( *(_DWORD *)(a3 + 24) )
  {
    do
    {
      v9 = 192 * v3;
      v3 = (unsigned int)(v3 + 1);
      *(_DWORD *)(*(_QWORD *)(a3 + 120) + v9 + 80) = v8;
      *(LARGE_INTEGER *)(*(_QWORD *)(a3 + 120) + v9 + 96) = result;
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a3 + 24) );
  }
  return result;
}
