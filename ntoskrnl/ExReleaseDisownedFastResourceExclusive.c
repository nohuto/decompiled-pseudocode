__int64 __fastcall ExReleaseDisownedFastResourceExclusive(_BYTE *BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v5; // al
  _BYTE *v6; // r8

  if ( FeatureFastResource2 )
    return ExReleaseDisownedFastResourceExclusive2(BugCheckParameter2);
  if ( (BugCheckParameter2[26] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_BYTE *)(a2 + 17);
  if ( (v5 & 4) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, ((unsigned __int64)(v5 & 4) << 14) | 1, 0LL);
  v6 = *(_BYTE **)(a2 + 24);
  if ( v6 != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, (ULONG_PTR)BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, a2, 0LL, 0LL);
  return ExpReleaseDisownedFastResourceExclusive(BugCheckParameter2, a2, v6);
}
