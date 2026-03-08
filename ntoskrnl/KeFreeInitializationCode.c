/*
 * XREFs of KeFreeInitializationCode @ 0x140B14BF4
 * Callers:
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140B65038 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140B71424 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B72910 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__30 )
      return MmDiscardDriverSection(sub_140B0F1A0);
  }
  return result;
}
