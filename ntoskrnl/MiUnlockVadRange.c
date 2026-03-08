/*
 * XREFs of MiUnlockVadRange @ 0x1407D73E8
 * Callers:
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1407000C4 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiGetFirstVad @ 0x1402A5B0C (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiGetNextVad @ 0x140350908 (MiGetNextVad.c)
 */

char __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *FirstVad; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int64 NextVad; // r14
  ULONG_PTR v13; // rbp

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
    FirstVad = MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(a2);
  v9 = (unsigned __int64)FirstVad;
  if ( a3 )
  {
    while ( 1 )
    {
      NextVad = MiGetNextVad(v9);
      if ( a3 == 1 )
        break;
      v13 = v10 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
      KeAbPostRelease(v13);
      v9 = NextVad;
      if ( !--a3 )
        goto LABEL_6;
    }
    MiUnlockVad((__int64)CurrentThread, v10);
  }
LABEL_6:
  if ( a4 )
    return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  else
    return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
