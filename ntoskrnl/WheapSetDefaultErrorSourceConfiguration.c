/*
 * XREFs of WheapSetDefaultErrorSourceConfiguration @ 0x140B496CC
 * Callers:
 *     WheaInitializeServices @ 0x140B495D4 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

__int64 WheapSetDefaultErrorSourceConfiguration()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = 0LL;
  v1 = 19LL;
  do
  {
    *(_QWORD *)((char *)&WheapSourceConfiguration + result * 8) = 0LL;
    WheapSourceConfigOverride[result] = 0LL;
    *(_QWORD *)((char *)&unk_140D16A00 + result * 8) = PdcCreateWatchdogAroundClientCall;
    qword_140D16A08[result] = (__int64 (__fastcall *)(_QWORD, int *, _QWORD))xHalPciEarlyRestore;
    qword_140D16A08[result + 1] = (__int64 (__fastcall *)(_QWORD, int *, _QWORD))WheapDefaultErrSrcCreateRecord;
    qword_140D16A08[result + 2] = (__int64 (__fastcall *)(_QWORD, int *, _QWORD))PdcCreateWatchdogAroundClientCall;
    qword_140D16A08[result + 3] = (__int64 (__fastcall *)(_QWORD, int *, _QWORD))xHalTimerWatchdogStop;
    qword_140D16A08[result + 4] = 0LL;
    WheapSourceConfigOverride[result + 2] = (unsigned __int64)PdcCreateWatchdogAroundClientCall;
    WheapSourceConfigOverride[result + 3] = (unsigned __int64)xHalPciEarlyRestore;
    WheapSourceConfigOverride[result + 4] = (unsigned __int64)WheapDefaultErrSrcCreateRecord;
    WheapSourceConfigOverride[result + 5] = (unsigned __int64)PdcCreateWatchdogAroundClientCall;
    WheapSourceConfigOverride[result + 6] = (unsigned __int64)xHalTimerWatchdogStop;
    WheapSourceConfigOverride[result + 7] = 0LL;
    result += 8LL;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  return result * 8;
}
