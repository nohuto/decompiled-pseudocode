/*
 * XREFs of SmKmAllocateMdlForLock @ 0x14037DCC8
 * Callers:
 *     SmFpAllocate @ 0x14037DA00 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x1403D735C (SmFpPreAllocate.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall SmKmAllocateMdlForLock(unsigned __int64 a1)
{
  _WORD *v2; // rbx
  unsigned __int64 v3; // rdi
  _WORD *PoolWithTag; // rax

  v2 = 0LL;
  if ( (unsigned int)SmAcquireReleaseCharges(a1, 3, 0) )
  {
    v3 = (a1 + 4095) >> 12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v3 + 48, 0x4C506D73u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[4] = 8 * (v3 + 6);
      PoolWithTag[5] = 0;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      *((_DWORD *)PoolWithTag + 10) = a1;
    }
    else
    {
      SmAcquireReleaseCharges(a1, 3, 1);
      return 0LL;
    }
  }
  return v2;
}
