/*
 * XREFs of ResFwpPageOutBackground @ 0x1409F1470
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall ResFwpPageOutBackground(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  void *v4; // rsi
  PVOID PoolWithTag; // rax
  void *v6; // rdi

  if ( (dword_140C134F0 & 0xC00) != 0xC00 )
  {
    v4 = qword_140C13538;
    if ( qword_140C13538 )
    {
      if ( qword_140C13540 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&qword_140C13538, 0LL);
        BgpFwFreeMemory((__int64)v4, a2, a3, a4);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, qword_140C13538, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v6 )
      {
        if ( qword_140C13540 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v6, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_140C13540, (__int64)v6);
        goto LABEL_9;
      }
    }
  }
}
