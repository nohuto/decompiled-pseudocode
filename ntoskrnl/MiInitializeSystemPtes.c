/*
 * XREFs of MiInitializeSystemPtes @ 0x140B391FC
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiObtainSystemVa @ 0x140210534 (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14021055C (MiSystemVaToDynamicBitmap.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiBuildDynamicRegion @ 0x1403715AC (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x140726074 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiInitializePteInfo @ 0x140B3B548 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // r14
  char *AnyMultiplexedVm; // rdi
  unsigned int v2; // ebx
  char *v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 *v6; // rax

  v0 = qword_140C6A198;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2 = 0;
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v3 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList((__int64)MiSystemPartition, (__int64)v3, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v4 = ((dword_140D1D1CC & 2) << 8) | 0x101;
  v5 = v0 + ((0x800000 - (v4 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140C66A28 = v5;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_140C695C0,
                        9,
                        (int)v5 + 0x100000,
                        4,
                        v0,
                        0x100000000000LL,
                        1,
                        qword_140C68028) )
    return 0LL;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_140D1D1CC & 2) != 0
    && !(unsigned int)MiInitializeDynamicBitmap(&qword_140C68018, v5 + 537919488, 0x200000000LL, 4) )
  {
    dword_140D1D1CC &= ~2u;
  }
  v6 = MiSystemVaToDynamicBitmap(9);
  if ( !(unsigned int)MiBuildDynamicRegion(v6, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v4, 0xDu);
  LODWORD(MiFlags) = MiFlags | 0x40000000;
  qword_140C68148 = 0LL;
  qword_140C68168 = MiReservePtes((__int64)&qword_140C695C0, 1u);
  LOBYTE(v2) = qword_140C68168 != 0;
  return v2;
}
