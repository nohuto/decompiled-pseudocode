/*
 * XREFs of iswalnum @ 0x1403E1BB0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14095BE9C (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1409D0588 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1409D1C58 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
