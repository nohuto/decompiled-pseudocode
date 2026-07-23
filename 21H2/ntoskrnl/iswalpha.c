/*
 * XREFs of iswalpha @ 0x1403D297C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5F44 (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
