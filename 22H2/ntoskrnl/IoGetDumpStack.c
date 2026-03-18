/*
 * XREFs of IoGetDumpStack @ 0x140943ADC
 * Callers:
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 * Callees:
 *     IopLoadCrashdumpDriver @ 0x1403946F0 (IopLoadCrashdumpDriver.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140552F38 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140553048 (IopDumpTraceLoadDumpStackFailure.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int CrashdumpDriver; // eax
  unsigned int v7; // ebx
  int v8; // eax

  CrashdumpDriver = IopLoadCrashdumpDriver();
  v7 = CrashdumpDriver;
  if ( CrashdumpDriver >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64, _QWORD, _QWORD))qword_140C6AD30)(
           L"hiber_",
           a2,
           2LL,
           a4,
           0LL);
    v7 = v8;
    if ( v8 < 0 )
      IopDumpTraceLoadDumpStackFailure(v8);
  }
  else
  {
    IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  }
  return v7;
}
