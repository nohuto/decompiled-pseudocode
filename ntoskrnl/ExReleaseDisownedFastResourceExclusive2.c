/*
 * XREFs of ExReleaseDisownedFastResourceExclusive2 @ 0x14040E9C0
 * Callers:
 *     ExReleaseDisownedFastResourceExclusive @ 0x1406079A0 (ExReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseDisownedFastResourceExclusive2(_BYTE *BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v3; // al

  if ( (BugCheckParameter2[26] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v3 = BugCheckParameter2[101];
  if ( (v3 & 2) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, (ULONG_PTR)(BugCheckParameter2 + 64), ((unsigned __int64)(v3 & 2) << 15) | 1, 0LL);
  if ( (BugCheckParameter2[80] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, (ULONG_PTR)(BugCheckParameter2 + 64), 0LL, 0LL);
  return ExpReleaseDisownedFastResourceExclusive2(BugCheckParameter2, BugCheckParameter2 + 64, CurrentThread);
}
