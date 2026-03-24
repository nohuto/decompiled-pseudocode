/*
 * XREFs of iswalpha @ 0x1403D210C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5E34 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D426C (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
