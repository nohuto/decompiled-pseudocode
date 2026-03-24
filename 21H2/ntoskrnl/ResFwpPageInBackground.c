/*
 * XREFs of ResFwpPageInBackground @ 0x1409F344C
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9

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
          BgpFwFreeMemory((__int64)Memory, v1, v2, v3);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C13538, (__int64)Memory);
      }
    }
  }
}
