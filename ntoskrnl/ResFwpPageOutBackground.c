/*
 * XREFs of ResFwpPageOutBackground @ 0x140AEBBF0
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 *     ResFwBackgroundTransition @ 0x140AEBAF8 (ResFwBackgroundTransition.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  void *Pool2; // rax
  void *v2; // rdi

  if ( (dword_140C0E3B0 & 0xC00) != 0xC00 )
  {
    v0 = qword_140C0E3F8;
    if ( qword_140C0E3F8 )
    {
      if ( !qword_140C0E400 )
      {
        BgpFwReleaseLock();
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 0x4B494742u);
        v2 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, qword_140C0E3F8, (unsigned int)Size);
          BgpFwAcquireLock();
          if ( !qword_140C0E400 )
          {
            _InterlockedExchange64((volatile __int64 *)&qword_140C0E400, (__int64)v2);
            goto LABEL_7;
          }
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
        }
        BgpFwAcquireLock();
        return;
      }
LABEL_7:
      _InterlockedExchange64((volatile __int64 *)&qword_140C0E3F8, 0LL);
      BgpFwFreeMemory((__int64)v0);
    }
  }
}
