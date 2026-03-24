/*
 * XREFs of _ultow_s @ 0x1403D6600
 * Callers:
 *     LocalConvertAclToString @ 0x1406EC584 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140768848 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929264 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D6760 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
