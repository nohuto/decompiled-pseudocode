/*
 * XREFs of MiIsAddressGlobal @ 0x14029F1A0
 * Callers:
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C4E008);
  if ( byte_140C4F9C8[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 < qword_140C4FB38 || a1 > qword_140C4E368 )
      return (unsigned __int8)word_140C4E008;
    return HIBYTE(word_140C4E008);
  }
  return 0LL;
}
