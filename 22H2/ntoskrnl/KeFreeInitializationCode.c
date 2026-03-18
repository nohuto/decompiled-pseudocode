/*
 * XREFs of KeFreeInitializationCode @ 0x140B18BF4
 * Callers:
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140B373F0 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140B756B4 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B76E00 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__30 )
      return MmDiscardDriverSection(sub_140B131A0);
  }
  return result;
}
