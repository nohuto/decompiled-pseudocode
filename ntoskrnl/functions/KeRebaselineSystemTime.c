LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = result;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
