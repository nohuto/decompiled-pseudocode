/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x140578D40
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  void *Pool2; // rax

  if ( KiPristineTriageDumpSize )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)KiPristineTriageDumpSize, 1919115851LL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64(&KiPristineTriageDump, (signed __int64)Pool2, 0LL) )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
}
