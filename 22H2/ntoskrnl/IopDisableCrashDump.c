/*
 * XREFs of IopDisableCrashDump @ 0x1405525DC
 * Callers:
 *     IoConfigureCrashDump @ 0x14054FA04 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x14055290C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140552AF8 (IopDumpTraceDisableCrashDumpFailure.c)
 */

__int64 IopDisableCrashDump()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( CrashdmpImageEntry && qword_140C6AD48 && CrashdmpInitialized )
  {
    v1 = qword_140C6AD48();
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
