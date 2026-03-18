/*
 * XREFs of SymCryptIntCopyMixedSize @ 0x140400BA4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntCopyMixedSize @ 0x14040D19C (SymCryptFdefIntCopyMixedSize.c)
 */

__int64 SymCryptIntCopyMixedSize()
{
  return SymCryptFdefIntCopyMixedSize();
}
