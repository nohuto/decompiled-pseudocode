/*
 * XREFs of ResFwpPageOutBackground @ 0x140AAB7D4
 * Callers:
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  void *Pool2; // rax
  void *v2; // rdi

  if ( (dword_140C0DF90 & 0xC00) != 0xC00 )
  {
    v0 = qword_140C0DFD8;
    if ( qword_140C0DFD8 )
    {
      if ( !qword_140C0DFE0 )
      {
        BgpFwReleaseLock();
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)dword_140C0DFE8, 0x4B494742u);
        v2 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, qword_140C0DFD8, (unsigned int)dword_140C0DFE8);
          BgpFwAcquireLock();
          if ( !qword_140C0DFE0 )
          {
            _InterlockedExchange64((volatile __int64 *)&qword_140C0DFE0, (__int64)v2);
            goto LABEL_7;
          }
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
        }
        BgpFwAcquireLock();
        return;
      }
LABEL_7:
      _InterlockedExchange64((volatile __int64 *)&qword_140C0DFD8, 0LL);
      BgpFwFreeMemory((__int64)v0);
    }
  }
}
