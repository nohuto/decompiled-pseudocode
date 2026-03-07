struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // r8

  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    v4 = 51LL;
  }
  else
  {
    if ( !*((_QWORD *)a1 + 13) )
      return 0LL;
    if ( !*((_QWORD *)a1 + 12) )
      return 0LL;
    if ( a2 < 0 )
      return 0LL;
    if ( a2 >= *((_DWORD *)a1 + 23) )
      return 0LL;
    _mm_lfence();
    v2 = *(int *)(*((_QWORD *)a1 + 13) + 4LL * a2);
    if ( (int)v2 < 0 || (int)v2 >= *((_DWORD *)a1 + 22) )
      return 0LL;
    _mm_lfence();
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8 * v2) + 80LL) & 8) == 0 )
      return *(struct tagCURSOR **)(*((_QWORD *)a1 + 12) + 8 * v2);
    v4 = 75LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v4);
  return 0LL;
}
