/*
 * XREFs of MiFreePageChain @ 0x1404646F2
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14063008C (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 */

unsigned __int64 __fastcall MiFreePageChain(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
      MiReleaseFreshPage(a1);
      result = 0x3FFFFFFFFFLL;
      if ( v1 == 0x3FFFFFFFFFLL )
        break;
      result = 0xFFFFDE0000000000uLL;
      a1 = 48 * v1 - 0x220000000000LL;
    }
    while ( 48 * v1 != 0x220000000000LL );
  }
  return result;
}
