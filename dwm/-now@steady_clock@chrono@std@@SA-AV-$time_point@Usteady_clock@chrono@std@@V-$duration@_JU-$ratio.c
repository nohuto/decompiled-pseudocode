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
