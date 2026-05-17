/*
 * XREFs of iswprint @ 0x180090220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswprint(wint_t C)
{
  return iswctype(C, 0x157u);
}
