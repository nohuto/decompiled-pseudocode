/*
 * XREFs of HalpPowerStateCallback @ 0x1403AB2F0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpTscCheckDisposition @ 0x1405080B4 (HalpTscCheckDisposition.c)
 *     HalpMcUpdateLock @ 0x1405197FC (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x140519854 (HalpMcUpdateUnlock.c)
 *     MmLockPagableSectionByHandle @ 0x1406A7BD0 (MmLockPagableSectionByHandle.c)
 *     HalpFreeNvsBuffers @ 0x140A93E04 (HalpFreeNvsBuffers.c)
 *     HalpMapNvsArea @ 0x140A93E80 (HalpMapNvsArea.c)
 */

void __fastcall HalpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        MiLockPagableImageSection((ULONG_PTR)HalpSleepPageLock, 0LL);
        HalpFreeNvsBuffers();
        HalpMcUpdateUnlock();
        SystemPowerPhase = 0;
        HalpTscCheckDisposition();
      }
    }
    else
    {
      SystemPowerPhase = 1;
      ((void (__fastcall *)(_QWORD))off_140C01D58[0])(0LL);
      MmLockPagableSectionByHandle(HalpSleepPageLock);
      HalpMapNvsArea();
      HalpMcUpdateLock();
    }
  }
}
