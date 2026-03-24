/*
 * XREFs of MiInsertVadEvent @ 0x14025B21C
 * Callers:
 *     MiWaitForVadDeletion @ 0x14055BD50 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x14061FBE0 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x140683D8C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406A06B0 (MiCreateRotateView.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BF8 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8328 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x1408D9FB4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiInsertVadEvent(__int64 a1, _QWORD *a2, int a3)
{
  LONG *v5; // rdi
  _KPROCESS *Process; // rbx
  char v7; // al
  __int64 v8; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // dl

  if ( a3 == 1 )
  {
    v5 = &dword_140C4F780;
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = Process[1].IdealProcessorPadding[10];
    v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
    if ( (v7 & 7) != 2 )
      v5 = (LONG *)(v8 + 192);
    v9 = ExAcquireSpinLockExclusive(v5);
    v5[1] = 0;
    v10 = v9;
  }
  else
  {
    v10 = 17;
    v8 = 0LL;
  }
  *a2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = a2;
  if ( v10 != 17 )
    MiUnlockWorkingSetExclusive(v8, v10);
}
