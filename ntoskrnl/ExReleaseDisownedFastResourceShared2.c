/*
 * XREFs of ExReleaseDisownedFastResourceShared2 @ 0x14040EAB4
 * Callers:
 *     ExReleaseDisownedFastResourceShared @ 0x140607AC0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseDisownedFastResourceShared2(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v4; // al

  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    a2 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_BYTE *)(a2 + 37);
  if ( (v4 & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v4 & 2) << 15, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    return ExpReleaseDisownedFastResourceExclusive2(BugCheckParameter2, a2, CurrentThread);
  else
    return ExpReleaseDisownedFastResourceShared2(BugCheckParameter2, a2, CurrentThread);
}
