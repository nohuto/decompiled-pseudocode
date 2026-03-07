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
