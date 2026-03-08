/*
 * XREFs of ExConvertFastResourceExclusiveToShared @ 0x140607790
 * Callers:
 *     <none>
 * Callees:
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403C5DA8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExConvertFastResourceExclusiveToShared2 @ 0x14040DE60 (ExConvertFastResourceExclusiveToShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExConvertFastResourceExclusiveToShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v5; // r9
  char v6; // al

  if ( FeatureFastResource2 )
    return ExConvertFastResourceExclusiveToShared2(BugCheckParameter2, a2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v5 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v5, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  v6 = *(_BYTE *)(a2 + 17);
  if ( (v6 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v6 & 4) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, ((unsigned __int64)(v6 & 4) << 14) | 1, 0LL);
  if ( !*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40 )
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  return ExpConvertFastResourceExclusiveToShared(BugCheckParameter2, a2);
}
