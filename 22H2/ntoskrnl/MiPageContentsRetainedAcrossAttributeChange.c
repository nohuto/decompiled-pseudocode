/*
 * XREFs of MiPageContentsRetainedAcrossAttributeChange @ 0x14021AF4C
 * Callers:
 *     MiPfnZeroingNeeded @ 0x14021AF14 (MiPfnZeroingNeeded.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageContentsRetainedAcrossAttributeChange(int a1, int a2)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( a1 != a2 )
    return ((unsigned __int8)((1 << a1) | (1 << a2)) & (unsigned __int8)byte_140C65C98) == 0;
  return result;
}
