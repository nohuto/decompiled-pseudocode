__int64 __fastcall ExReleaseFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v3; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v6; // r9

  if ( FeatureFastResource2 )
    return ExReleaseFastResource2(BugCheckParameter2, a2);
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
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v3 & 0x80u) != 0 )
    return ExpReleaseFastResourceExclusive(BugCheckParameter2);
  else
    return ExpReleaseFastResourceShared(BugCheckParameter2);
}
