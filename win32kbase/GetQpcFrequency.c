__int64 GetQpcFrequency()
{
  __int64 result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result = qword_1C02D86A0;
  if ( !qword_1C02D86A0 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedCompareExchange64(&qword_1C02D86A0, PerformanceFrequency.QuadPart, 0LL);
    return qword_1C02D86A0;
  }
  return result;
}
