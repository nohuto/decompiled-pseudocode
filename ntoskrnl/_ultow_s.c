/*
 * XREFs of _ultow_s @ 0x1403D8C70
 * Callers:
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087B610 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D2E2C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D8DDC (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
