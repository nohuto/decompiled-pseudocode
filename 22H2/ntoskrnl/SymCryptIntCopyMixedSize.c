/*
 * XREFs of SymCryptIntCopyMixedSize @ 0x1403F8CD0
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F6F68 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntCopyMixedSize @ 0x140405170 (SymCryptFdefIntCopyMixedSize.c)
 */

__int64 SymCryptIntCopyMixedSize()
{
  return SymCryptFdefIntCopyMixedSize();
}
