/*
 * XREFs of iswalnum @ 0x1403D2960
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5F44 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x140927190 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x140927FA8 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
