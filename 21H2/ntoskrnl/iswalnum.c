/*
 * XREFs of iswalnum @ 0x1403D27F0
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5DE4 (PiDrvDbFindSystemFilePathToken.c)
 *     GetAttributeName @ 0x140927030 (GetAttributeName.c)
 *     IsEncodedAttributeChar @ 0x140927E48 (IsEncodedAttributeChar.c)
 * Callees:
 *     iswctype @ 0x1403D496C (iswctype.c)
 */

int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}
