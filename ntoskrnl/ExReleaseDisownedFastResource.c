/*
 * XREFs of ExReleaseDisownedFastResource @ 0x1403C5440
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExReleaseDisownedFastResource2 @ 0x14040E8BC (ExReleaseDisownedFastResource2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4 (ExpReleaseDisownedFastResourceExclusive.c)
 */

__int64 __fastcall ExReleaseDisownedFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v3; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8

  if ( FeatureFastResource2 )
    return ExReleaseDisownedFastResource2(BugCheckParameter2, a2);
  v3 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  if ( (v3 & 0x80u) == 0 )
    return ExpReleaseDisownedFastResourceShared(BugCheckParameter2, a2, CurrentThread);
  else
    return ExpReleaseDisownedFastResourceExclusive(BugCheckParameter2, a2, CurrentThread);
}
