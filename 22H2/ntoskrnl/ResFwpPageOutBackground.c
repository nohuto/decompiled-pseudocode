/*
 * XREFs of ResFwpPageOutBackground @ 0x140AF0490
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     ResFwBackgroundTransition @ 0x140AF0428 (ResFwBackgroundTransition.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  void *Pool2; // rax
  void *v2; // rdi

  if ( (dword_140C0E4B0 & 0xC00) != 0xC00 )
  {
    v0 = qword_140C0E4F8;
    if ( qword_140C0E4F8 )
    {
      if ( !qword_140C0E500 )
      {
        BgpFwReleaseLock();
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 0x4B494742u);
        v2 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, qword_140C0E4F8, (unsigned int)Size);
          BgpFwAcquireLock();
          if ( !qword_140C0E500 )
          {
            _InterlockedExchange64((volatile __int64 *)&qword_140C0E500, (__int64)v2);
            goto LABEL_7;
          }
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
        }
        BgpFwAcquireLock();
        return;
      }
LABEL_7:
      _InterlockedExchange64((volatile __int64 *)&qword_140C0E4F8, 0LL);
      BgpFwFreeMemory((__int64)v0);
    }
  }
}
