/*
 * XREFs of HvlpPreallocatePageListResources @ 0x14093E770
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1407FC7F4 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 */

__int64 HvlpPreallocatePageListResources()
{
  unsigned int v0; // ebx
  void *IndependentPages; // rax

  v0 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(0x1000uLL, -1, 0LL, 0);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
