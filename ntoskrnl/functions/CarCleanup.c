unsigned __int64 CarCleanup()
{
  unsigned __int64 result; // rax

  result = (unsigned int)CarInitialized;
  if ( CarInitialized )
  {
    CarLoggingExit();
    KeDeregisterBugCheckReasonCallback(&CarBugCheckCallback);
    CarBugCheckCallback.CallbackRoutine = 0LL;
    result = (unsigned __int64)memset(&CarViolationSnapshot, 0, 0x80uLL);
    _InterlockedExchange(&CarInitialized, 0);
  }
  return result;
}
