/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140394AF4
 * Callers:
 *     IoConfigureCrashDump @ 0x14054FA04 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1408360EC (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
