/*
 * XREFs of _ultow_s @ 0x1403DE190
 * Callers:
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140880440 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5CCC (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403DE2FC (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
