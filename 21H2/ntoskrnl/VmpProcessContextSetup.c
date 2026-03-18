/*
 * XREFs of VmpProcessContextSetup @ 0x1409DA570
 * Callers:
 *     VmCreateMemoryRange @ 0x1409D9340 (VmCreateMemoryRange.c)
 *     VmPreallocateForRangeCreate @ 0x1409D9860 (VmPreallocateForRangeCreate.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VmpProcessContextCleanup @ 0x1409DA55C (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VmpProcessContextSetup(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _KPROCESS *Process; // rsi
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  PVOID v6; // rcx

  v1 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[2].Affinity.StaticBitmap[5] )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x63506D56u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      v5[9].Count = a1;
      v5[2].Count = 0LL;
      v5[3].Count = 0LL;
      v5[4].Count = 0LL;
      v5[6].Count = 0LL;
      v5[7].Count = 0LL;
      ExInitializePushLock(v5 + 12);
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&Process[2].Affinity.StaticBitmap[5],
             (signed __int64)v5,
             0LL) )
      {
        VmpProcessContextCleanup((__int64)v5);
        ExFreePoolWithTag(v6, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
