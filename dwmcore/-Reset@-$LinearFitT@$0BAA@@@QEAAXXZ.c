/*
 * XREFs of ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x18004C6C8
 * Callers:
 *     ?Update@?$LinearFitT@$0BAA@@@QEAA_N_J0@Z @ 0x18004D8A4 (-Update@-$LinearFitT@$0BAA@@@QEAA_N_J0@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004E430 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800AEEF4 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800D5DAC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800D5F58 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1801CEABC (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LinearFitT<256>::Reset(__int64 a1)
{
  __int64 result; // rax

  (**(void (__fastcall ***)(__int64))a1)(a1);
  result = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
