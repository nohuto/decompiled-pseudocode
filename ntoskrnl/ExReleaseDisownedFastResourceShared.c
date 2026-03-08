/*
 * XREFs of ExReleaseDisownedFastResourceShared @ 0x140607AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExReleaseDisownedFastResourceShared2 @ 0x14040EAB4 (ExReleaseDisownedFastResourceShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4 (ExpReleaseDisownedFastResourceExclusive.c)
 */

__int64 __fastcall ExReleaseDisownedFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v3; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v6; // al
  __int64 v7; // r8

  if ( FeatureFastResource2 )
    return ExReleaseDisownedFastResourceShared2(BugCheckParameter2, a2);
  v3 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_BYTE *)(a2 + 17);
  if ( (v6 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v6 & 4) << 14, 0LL);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (v6 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  if ( (v3 & 0x80u) == 0 )
    return ExpReleaseDisownedFastResourceShared(BugCheckParameter2, (__int64 *)a2);
  else
    return ExpReleaseDisownedFastResourceExclusive(BugCheckParameter2, a2, v7);
}
