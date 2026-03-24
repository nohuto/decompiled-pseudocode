/*
 * XREFs of _ultow_s @ 0x1403D6D00
 * Callers:
 *     LocalConvertAclToString @ 0x140673794 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140769228 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929214 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D6E60 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
