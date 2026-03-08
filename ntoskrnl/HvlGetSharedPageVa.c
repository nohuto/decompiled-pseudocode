/*
 * XREFs of HvlGetSharedPageVa @ 0x1402F9564
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402F9390 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140B68D24 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C01E10();
  return result;
}
