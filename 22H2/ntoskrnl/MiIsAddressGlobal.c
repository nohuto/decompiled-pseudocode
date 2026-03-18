/*
 * XREFs of MiIsAddressGlobal @ 0x140347638
 * Callers:
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C66DFC);
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 <= qword_140C67170 && a1 >= qword_140C6A658 )
    return HIBYTE(word_140C66DFC);
  return (unsigned __int8)word_140C66DFC;
}
