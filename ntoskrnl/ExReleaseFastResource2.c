/*
 * XREFs of ExReleaseFastResource2 @ 0x14040EBEC
 * Callers:
 *     ExReleaseFastResource @ 0x1403C5940 (ExReleaseFastResource.c)
 *     ExpFastResourceLegacyRelease2 @ 0x1404103B8 (ExpFastResourceLegacyRelease2.c)
 * Callees:
 *     ExpReleaseFastResourceExclusive2 @ 0x140410E88 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResource2(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int16 v2; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  __int64 v5; // r11
  __int64 v6; // rax
  ULONG_PTR v8; // r8
  unsigned __int8 v9; // al
  struct _KTHREAD *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rax

  v2 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
  {
    if ( v2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
      {
        v5 = *(_QWORD *)(a2 + 16);
        if ( (struct _KTHREAD *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
          KeBugCheckEx(0x1C6u, 9uLL, a2, v5 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
        if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
        {
          v6 = *(_QWORD *)(a2 + 24);
          if ( v6 != BugCheckParameter2 )
          {
            if ( v6 )
              KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
          }
        }
        if ( (v5 & 1) != 0 )
          KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
        return ExpReleaseFastResourceShared2(BugCheckParameter2);
      }
LABEL_30:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_28:
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v8 = BugCheckParameter2 + 64;
  if ( !v2 )
    goto LABEL_28;
  v9 = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( v9 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v9, 2uLL, 0LL);
  if ( !v9 && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    goto LABEL_30;
  v11 = *(_QWORD *)(BugCheckParameter2 + 80);
  if ( (struct _KTHREAD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, v8, v11 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    v12 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v12 != BugCheckParameter2 )
    {
      if ( v12 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v11 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v8, 0LL, 0LL);
  return ExpReleaseFastResourceExclusive2(BugCheckParameter2);
}
