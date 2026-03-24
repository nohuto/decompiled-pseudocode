/*
 * XREFs of MiFreePageChain @ 0x1402E1E74
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1405398E0 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551EB4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
      result = MiReleaseFreshPage(a1);
      if ( v1 == 0xFFFFFFFFFLL )
        break;
      result = 0xFFFFFA8000000000uLL;
      a1 = 48 * v1 - 0x58000000000LL;
    }
    while ( 48 * v1 != 0x58000000000LL );
  }
  return result;
}
