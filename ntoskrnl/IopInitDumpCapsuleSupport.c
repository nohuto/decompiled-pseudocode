/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1403AE334
 * Callers:
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14083643C (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1403AE388 (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized || (unsigned __int8)IopIsBitlockerOn() )
    return 0LL;
  CapsuleTriageDumpBlock = (PVOID)ExAllocatePool2(64LL, 268288LL, 1886209091LL);
  if ( CapsuleTriageDumpBlock )
  {
    CapsuleTriageDumpBlockInitialized = 1;
    return 0LL;
  }
  return 3221225626LL;
}
