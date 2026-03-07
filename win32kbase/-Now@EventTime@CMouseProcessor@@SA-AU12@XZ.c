LARGE_INTEGER *__fastcall CMouseProcessor::EventTime::Now(LARGE_INTEGER *a1)
{
  LONGLONG v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *result; // rax

  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  a1[1] = PerformanceCounter;
  a1[2] = PerformanceCounter;
  result = a1;
  a1->QuadPart = v2;
  return result;
}
