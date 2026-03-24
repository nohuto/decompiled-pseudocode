/*
 * XREFs of iswalnum @ 0x1403D20F0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5E34 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x140927080 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x140927E98 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D426C (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
