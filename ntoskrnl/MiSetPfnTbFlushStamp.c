/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x14028A3A0
 * Callers:
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiGetPageTablePages @ 0x140348AF8 (MiGetPageTablePages.c)
 *     MiGetPoolPages @ 0x14036413C (MiGetPoolPages.c)
 *     MiUpdatePageAttributeStamp @ 0x14036A854 (MiUpdatePageAttributeStamp.c)
 *     MiCreatePfnTemplate @ 0x1403708F4 (MiCreatePfnTemplate.c)
 *     MiConvertLargePfnToSmall @ 0x14038BB4C (MiConvertLargePfnToSmall.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140626B50 (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063C678 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14064B6C0 (MiPerformFinalZeroing.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     MiAllocateDummyPage @ 0x140B39E68 (MiAllocateDummyPage.c)
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
