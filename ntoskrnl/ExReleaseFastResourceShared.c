/*
 * XREFs of ExReleaseFastResourceShared @ 0x140607D40
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastResourceShared @ 0x1403C5A70 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403C5EA4 (ExpReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared2 @ 0x14040EF54 (ExReleaseFastResourceShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v3; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v6; // r9
  char v7; // al

  if ( FeatureFastResource2 )
    return ExReleaseFastResourceShared2(BugCheckParameter2, a2);
  v3 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v6, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  v7 = *(_BYTE *)(a2 + 17);
  if ( (v7 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v7 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v7 & 4) << 14, 0LL);
  if ( (v3 & 0x80u) != 0 )
    return ExpReleaseFastResourceExclusive(BugCheckParameter2, a2);
  else
    return ExpReleaseFastResourceShared(BugCheckParameter2, (__int64 *)a2);
}
