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
