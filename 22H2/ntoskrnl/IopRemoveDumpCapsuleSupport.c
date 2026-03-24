/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403BFB40
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BFA60 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407B7F14 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
