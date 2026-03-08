/*
 * XREFs of ExCreatePoolTagTable @ 0x14080AC00
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 */

void *__fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  void *v4; // rbx

  v2 = a1;
  if ( (unsigned __int64)PoolTrackTableSize >= 0x333333333333332LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(80 * (PoolTrackTableSize + 1), a2, 0LL, 0LL);
  v4 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, 80 * PoolTrackTableSize);
    *(&ExPoolTagTables + v2) = v4;
  }
  return v4;
}
