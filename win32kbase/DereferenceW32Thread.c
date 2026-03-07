__int64 __fastcall DereferenceW32Thread(volatile signed __int32 *a1)
{
  void *v1; // rbp
  unsigned __int32 v3; // edi
  void *ThreadWin32Thread; // rbx

  v1 = *(void **)a1;
  v3 = _InterlockedDecrement(a1 + 2);
  if ( !v3 )
  {
    if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && qword_1C02D5FD0 && (unsigned int)qword_1C02D5FD0() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*(_QWORD *)a1, 0LL, ThreadWin32Thread);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)a1);
      ExFreePoolWithTag(ThreadWin32Thread, 0);
    }
    else
    {
      UserDeleteW32Thread((void *)a1);
    }
  }
  ObfDereferenceObject(v1);
  return v3;
}
