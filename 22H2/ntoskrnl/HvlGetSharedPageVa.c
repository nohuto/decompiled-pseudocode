/*
 * XREFs of HvlGetSharedPageVa @ 0x14035FBB0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x14035F9E0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C00A00();
  return result;
}
