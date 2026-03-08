/*
 * XREFs of MiUserPdeOrAbove @ 0x1402D39A0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  int v3; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  v3 = 1;
  while ( a1 > v2 || a1 < v1 )
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (unsigned int)++v3 >= 4 )
      return 0LL;
  }
  return 1LL;
}
