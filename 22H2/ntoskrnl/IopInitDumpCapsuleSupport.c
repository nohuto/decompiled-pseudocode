/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1403B30F4
 * Callers:
 *     IoConfigureCrashDump @ 0x14054FA04 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1408360EC (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1403B3148 (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
