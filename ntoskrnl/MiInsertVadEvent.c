/*
 * XREFs of MiInsertVadEvent @ 0x14034C254
 * Callers:
 *     MiWaitForVadDeletion @ 0x14065E678 (MiWaitForVadDeletion.c)
 *     MiCreateVadEventBitmap @ 0x140756324 (MiCreateVadEventBitmap.c)
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiCreateRotateView @ 0x140A2E550 (MiCreateRotateView.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiCreateUserPhysicalView @ 0x140A3EB08 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x140A44FD0 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140A46988 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

void __fastcall MiInsertVadEvent(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v5; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // dl

  if ( a3 )
  {
    v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v5);
    v7 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v8 = v7;
  }
  else
  {
    v8 = 17;
    v5 = 0LL;
  }
  *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)(a1 + 56) = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
  if ( v8 != 17 )
    MiUnlockWorkingSetExclusive((__int64)v5, v8);
}
