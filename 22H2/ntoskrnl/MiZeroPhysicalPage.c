/*
 * XREFs of MiZeroPhysicalPage @ 0x1403578E0
 * Callers:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiZeroAndConvertPage @ 0x14030E7F0 (MiZeroAndConvertPage.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiZeroWithSystemPtes @ 0x1403F48B8 (MiZeroWithSystemPtes.c)
 *     MiPerformFinalZeroing @ 0x14054F288 (MiPerformFinalZeroing.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B32C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1403579D0 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x140402430 (KeZeroPages.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, _DWORD *a4)
{
  int v4; // r12d
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // esi
  ULONG_PTR v10; // r14
  char v11; // cl
  char result; // al
  _DWORD *v13; // r9
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v17; // r8

  v4 = a3;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = *(unsigned __int8 *)(v7 + 34) >> 6;
  v9 = *(unsigned __int8 *)(v7 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v9 = dword_140C4DF98[4 * v8 + (int)a3];
    if ( v9 != (_DWORD)v8 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v9, 0LL, a4);
  }
  v10 = 0LL;
  v11 = -2;
  if ( !KeGetCurrentPrcb()->HyperPte )
    v11 = a2;
  if ( (v11 & 1) != 0 )
  {
    v10 = MiReservePtes((__int64)&qword_140C4EF40, 1u, a3, (unsigned __int64)a4);
    if ( v10 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v7);
      ValidPte = MiMakeValidPte(v10, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000, v15);
      if ( MiPteInShadowRange(v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *(_QWORD *)v10 = ValidPte;
          MiWritePteShadow(v10, ValidPte, v17);
          goto LABEL_25;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = ValidPte;
LABEL_25:
      KeZeroPages((__int64)(v10 << 25) >> 16, 4096LL, v17);
      result = MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v10, 1u);
      goto LABEL_10;
    }
  }
  if ( KeGetCurrentPrcb()->HyperPte )
    v10 = 1LL;
  result = MiFillPhysicalPages(BugCheckParameter2);
LABEL_10:
  if ( v9 != (_DWORD)v8 && v9 != v4 )
  {
    if ( v10 )
      return MiChangePageAttribute(v7, (unsigned int)v8, 0LL, v13);
  }
  return result;
}
