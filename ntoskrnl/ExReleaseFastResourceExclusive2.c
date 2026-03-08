/*
 * XREFs of ExReleaseFastResourceExclusive2 @ 0x14040EDFC
 * Callers:
 *     ExReleaseFastResourceExclusive @ 0x140607BF0 (ExReleaseFastResourceExclusive.c)
 * Callees:
 *     ExpReleaseFastResourceExclusive2 @ 0x140410E88 (ExpReleaseFastResourceExclusive2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResourceExclusive2(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // r11
  __int64 v5; // rax

  v1 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_QWORD *)(BugCheckParameter2 + 80);
  if ( (struct _KTHREAD *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, v1, v4 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v5 != BugCheckParameter2 )
    {
      if ( v5 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v4 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v1, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, v1, ((unsigned __int64)(*(_BYTE *)(BugCheckParameter2 + 101) & 2) << 15) | 1, 0LL);
  return ExpReleaseFastResourceExclusive2(BugCheckParameter2);
}
