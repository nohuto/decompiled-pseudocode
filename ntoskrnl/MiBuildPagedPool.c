/*
 * XREFs of MiBuildPagedPool @ 0x140B38784
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x14021055C (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403715AC (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x140726074 (MiInitializeSystemWorkingSetList.c)
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
  qword_140C695B8 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(
                        (__int64)MiSystemPartition,
                        (__int64)AnyMultiplexedVm,
                        3,
                        0x100000000LL) )
    return 0LL;
  qword_140C69598 = 0LL;
  qword_140C695A0 = qword_140C695B8;
  result = 1LL;
  qword_140C65120 = 7680LL;
  qword_140C65128 = 15360LL;
  return result;
}
