/*
 * XREFs of iswalpha @ 0x1403D460C
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x14096CFAC (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     iswctype @ 0x1403D67C4 (iswctype.c)
 */

int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}
