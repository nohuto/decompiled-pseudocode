/*
 * XREFs of ResFwpPageInBackground @ 0x1409F344C
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14039BE84 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140413540 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140C134F0 & 0xC00) != 0xC00 && (dword_140C134F0 & 0x100000) == 0 )
  {
    if ( qword_140C13540 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140C13540, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140C13538 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C13538, (__int64)Memory);
      }
    }
  }
}
