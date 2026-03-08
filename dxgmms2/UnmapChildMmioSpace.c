/*
 * XREFs of UnmapChildMmioSpace @ 0x1C002D0F4
 * Callers:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00EFA38 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 UnmapChildMmioSpace()
{
  return ((__int64 (*)(void))DxgCoreInterface[76])();
}
