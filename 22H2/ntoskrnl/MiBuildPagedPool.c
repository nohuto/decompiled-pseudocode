/*
 * XREFs of MiBuildPagedPool @ 0x140A4E614
 * Callers:
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x14030B7CC (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403B5924 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407866BC (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiBuildPagedPool()
{
  __int64 *v0; // rax
  __int64 v1; // rdx
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax

  v0 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v0, v1, 0x100000000000uLL) )
    return 0LL;
  qword_140C4EF38 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(
                        &MiSystemPartition,
                        (__int64)AnyMultiplexedVm,
                        3u,
                        (_DWORD *)0x100000000LL) )
    return 0LL;
  qword_140C4EF18 = 0LL;
  qword_140C4EF20 = qword_140C4EF38;
  result = 1LL;
  qword_140C4C8E8 = 7680LL;
  qword_140C4C8F0 = 15360LL;
  return result;
}
