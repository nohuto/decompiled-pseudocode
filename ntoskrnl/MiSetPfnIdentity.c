/*
 * XREFs of MiSetPfnIdentity @ 0x14034BE78
 * Callers:
 *     MiMarkPfnVerified @ 0x1402093BC (MiMarkPfnVerified.c)
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiInPageSingleKernelStack @ 0x1402A7A08 (MiInPageSingleKernelStack.c)
 *     MiInitializeMdlBatchPages @ 0x1402B4150 (MiInitializeMdlBatchPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14034A0A8 (MiUpdateSlabPagePlaceholderState.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiCreatePfnTemplate @ 0x1403708F4 (MiCreatePfnTemplate.c)
 *     MiMarkKernelStack @ 0x140371560 (MiMarkKernelStack.c)
 *     MiInitializeMdlPfn @ 0x1403870D0 (MiInitializeMdlPfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x140391BEC (MiFreeLargeInitializationCodePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140394B74 (MiAddExpansionNonPagedPool.c)
 *     MiSwapStackPageNoDpc @ 0x1403963DC (MiSwapStackPageNoDpc.c)
 *     MiFreeSlabEntry @ 0x1403B33B0 (MiFreeSlabEntry.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiCopyKstack @ 0x14062A6D0 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062B268 (MiSwitchKstackPages.c)
 *     MiClearFileOnlyPfn @ 0x140639DF4 (MiClearFileOnlyPfn.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiClearAweLargePageMetadata @ 0x14064703C (MiClearAweLargePageMetadata.c)
 *     MiFillUserPhysicalMdl @ 0x140647538 (MiFillUserPhysicalMdl.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiFreeSecureKernelPage @ 0x1406543B4 (MiFreeSecureKernelPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140666E94 (MiPrepareLargePageSubPageForFree.c)
 *     MiSwapHardFaultPage @ 0x14066A398 (MiSwapHardFaultPage.c)
 *     MxInsertEnclaveBootPages @ 0x140B96C30 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnIdentity(__int64 a1, char a2)
{
  signed __int64 v2; // r8
  unsigned __int64 v3; // r10
  signed __int64 result; // rax
  signed __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int64)(a2 & 7) << 60;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v3 | v2 & 0x8FFFFFFFFFFFFFFFuLL, v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 | result & 0x8FFFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
