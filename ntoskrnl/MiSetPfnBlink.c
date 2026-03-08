/*
 * XREFs of MiSetPfnBlink @ 0x140289900
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x14028B490 (MiBuildMdlForMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x14028CE24 (MiGetHardFaultPages.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiReplenishPageSlist @ 0x14034E120 (MiReplenishPageSlist.c)
 *     MiUnlinkStandbyPage @ 0x140464E9A (MiUnlinkStandbyPage.c)
 *     MiAllocateEnclavePagesForMdl @ 0x140620C1C (MiAllocateEnclavePagesForMdl.c)
 *     MiPreInitializeSystemImagePage @ 0x14062A1BC (MiPreInitializeSystemImagePage.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiAllocateEnclavePages @ 0x1406447E4 (MiAllocateEnclavePages.c)
 *     MiGetPageForEnclave @ 0x140645A8C (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x140646394 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140646460 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14064BA18 (MiUnlinkPageFromBadList.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B96A34 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFFLL;
  if ( a3 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v5 & 0xFFFFFF0000000000uLL, v5);
    v7 = result;
    if ( v5 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
