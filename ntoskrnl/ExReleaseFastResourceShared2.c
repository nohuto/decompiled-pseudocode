/*
 * XREFs of ExReleaseFastResourceShared2 @ 0x14040EF54
 * Callers:
 *     ExReleaseFastResourceShared @ 0x140607D40 (ExReleaseFastResourceShared.c)
 * Callees:
 *     ExpReleaseFastResourceExclusive2 @ 0x140410E88 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResourceShared2(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // r11
  __int64 v5; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_QWORD *)(a2 + 16);
  if ( (struct _KTHREAD *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v4 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 != BugCheckParameter2 )
    {
      if ( v5 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (v4 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(*(_BYTE *)(a2 + 37) & 2) << 15, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    return ExpReleaseFastResourceExclusive2(BugCheckParameter2);
  else
    return ExpReleaseFastResourceShared2(BugCheckParameter2);
}
