/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1402E1630
 * Callers:
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x1402E15E4 (MiFinalizePageAttribute.c)
 *     MiGetPoolPages @ 0x1402E3304 (MiGetPoolPages.c)
 *     MiGetPageTablePages @ 0x1402E40B8 (MiGetPageTablePages.c)
 *     MiUpdatePageAttributeStamp @ 0x140334AD8 (MiUpdatePageAttributeStamp.c)
 *     MiCreatePfnTemplate @ 0x140375BA4 (MiCreatePfnTemplate.c)
 *     MiConvertLargePfnToSmall @ 0x14038E00C (MiConvertLargePfnToSmall.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B7D00 (MiConvertSmallPageRangeToLarge.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628FEC (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063EAE0 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14064DCDC (MiPerformFinalZeroing.c)
 *     MiDeleteSubsectionLargePages @ 0x14064EE18 (MiDeleteSubsectionLargePages.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     MiAllocateDummyPage @ 0x140B48578 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 7) << 59;
  if ( a3 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xC7FFFFFFFFFFFFFFuLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v4 | v7 & 0xC7FFFFFFFFFFFFFFuLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
