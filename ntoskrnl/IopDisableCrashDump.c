__int64 IopDisableCrashDump()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( CrashdmpImageEntry && qword_140C6A8C8 && CrashdmpInitialized )
  {
    v1 = qword_140C6A8C8();
    v0 = v1;
    if ( v1 >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
      IopDumpTraceCrashDumpDisabled();
    }
    else
    {
      IopDumpTraceDisableCrashDumpFailure((unsigned int)v1);
    }
  }
  return v0;
}
