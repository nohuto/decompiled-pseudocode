__int64 __fastcall ExConvertFastResourceExclusiveToShared2(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v5; // r11
  __int64 v6; // rax

  v2 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v5 = *(_QWORD *)(BugCheckParameter2 + 80);
  if ( (struct _KTHREAD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, v2, v5 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v6 != BugCheckParameter2 )
    {
      if ( v6 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v5 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, v2, ((unsigned __int64)(*(_BYTE *)(BugCheckParameter2 + 101) & 2) << 15) | 1, 0LL);
  if ( *(int *)(BugCheckParameter2 + 96) > 1 )
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  return ExpConvertFastResourceExclusiveToShared2(BugCheckParameter2, a2, v2);
}
