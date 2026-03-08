/*
 * XREFs of iswalnum @ 0x1403D45F0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14096CFAC (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1409D0304 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1409D1A58 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D67C4 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
