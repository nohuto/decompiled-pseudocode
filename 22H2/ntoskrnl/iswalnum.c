/*
 * XREFs of iswalnum @ 0x1403D9B10
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14096FFCC (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x1409D31A4 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x1409D48F8 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403DBCE4 (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
