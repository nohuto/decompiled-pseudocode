/*
 * XREFs of EditionInitInputHangInfo @ 0x1C00CCD90
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F5AA4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EditionInitInputHangInfo(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax

  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v2 = SGDGetUserSessionState(v1), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  EtwTraceMessageCheckDelay(gptiCurrent);
  v6 = -1;
  if ( (_DWORD)v5 )
    v6 = v5;
  *(_DWORD *)(gptiCurrent + 1216LL) = v6;
  if ( *(int *)(gptiCurrent + 488LL) < 0 )
    xxxHandleHealthyThread(gptiCurrent);
  *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
  EtwTraceProcessWindowInfo(gptiCurrent);
  result = PsGetCurrentThreadWin32Thread(v7);
  --*(_DWORD *)(result + 48);
  return result;
}
