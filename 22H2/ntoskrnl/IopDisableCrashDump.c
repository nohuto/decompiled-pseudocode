/*
 * XREFs of IopDisableCrashDump @ 0x1403BFCB0
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BFA60 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140C50CA8 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_140C50CA8)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
