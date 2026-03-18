/*
 * XREFs of HalpPowerStateCallback @ 0x1403B0040
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpTscCheckDisposition @ 0x14050A194 (HalpTscCheckDisposition.c)
 *     HalpMcUpdateLock @ 0x14051BD2C (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x14051BD84 (HalpMcUpdateUnlock.c)
 *     MmLockPagableSectionByHandle @ 0x1406F5800 (MmLockPagableSectionByHandle.c)
 *     HalpFreeNvsBuffers @ 0x140A96F44 (HalpFreeNvsBuffers.c)
 *     HalpMapNvsArea @ 0x140A96FC0 (HalpMapNvsArea.c)
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
