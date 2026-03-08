/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140392E74
 * Callers:
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14083643C (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
