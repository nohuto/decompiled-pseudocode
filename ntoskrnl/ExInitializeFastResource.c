/*
 * XREFs of ExInitializeFastResource @ 0x1403BEFD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpInitializeResource @ 0x1403BF090 (ExpInitializeResource.c)
 *     ExpAddResourceToSystemResourceList @ 0x1403BF104 (ExpAddResourceToSystemResourceList.c)
 *     ExInitializeFastResource2 @ 0x14040E2C0 (ExInitializeFastResource2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExInitializeFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  char v3; // di
  unsigned __int8 CurrentIrql; // al
  __int16 v6; // ax

  v3 = BugCheckParameter3;
  if ( FeatureFastResource2 )
    return ExInitializeFastResource2(BugCheckParameter2, (unsigned int)BugCheckParameter3);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (BugCheckParameter3 & 0xFFFFFFF0) != 0 )
    KeBugCheckEx(0x1C6u, 0x10uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  ExpInitializeResource(BugCheckParameter2);
  v6 = *(_WORD *)(BugCheckParameter2 + 26) | 1;
  *(_WORD *)(BugCheckParameter2 + 26) = v6;
  if ( (v3 & 1) != 0 )
    *(_WORD *)(BugCheckParameter2 + 26) = v6 | 0x40;
  *(_QWORD *)(BugCheckParameter2 + 56) = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 48;
  return ExpAddResourceToSystemResourceList(BugCheckParameter2);
}
