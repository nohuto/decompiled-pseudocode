/*
 * XREFs of ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x14000D984
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000D5D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::steady_clock::now(_QWORD *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // r9
  _QWORD *result; // rax

  perf_frequency = _Query_perf_frequency();
  perf_counter = _Query_perf_counter();
  result = a1;
  *a1 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return result;
}
