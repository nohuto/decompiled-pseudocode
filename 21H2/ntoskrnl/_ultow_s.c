/*
 * XREFs of _ultow_s @ 0x1403D6E70
 * Callers:
 *     LocalConvertAclToString @ 0x1406689C4 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407693E8 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14078335C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14078419C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929374 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D6FD0 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
