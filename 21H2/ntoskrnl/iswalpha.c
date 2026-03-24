/*
 * XREFs of iswalpha @ 0x1403D280C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5DE4 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D496C (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
