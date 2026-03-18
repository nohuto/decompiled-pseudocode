/*
 * XREFs of ResFwpPageInBackground @ 0x140AADC00
 * Callers:
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140C0DF90 & 0xC00) != 0xC00 && (dword_140C0DF90 & 0x100000) == 0 )
  {
    if ( qword_140C0DFE0 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)dword_140C0DFE8);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140C0DFE0, (unsigned int)dword_140C0DFE8);
        BgpFwAcquireLock();
        if ( qword_140C0DFD8 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C0DFD8, (__int64)Memory);
      }
    }
  }
}
