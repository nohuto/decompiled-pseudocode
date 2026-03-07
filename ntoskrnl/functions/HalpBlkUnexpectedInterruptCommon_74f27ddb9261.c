void HalpBlkUnexpectedInterruptCommon()
{
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+E0h]

  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 8LL * (unsigned __int8)retaddr + 168));
  HalpBlkApicEndOfInterrupt();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
