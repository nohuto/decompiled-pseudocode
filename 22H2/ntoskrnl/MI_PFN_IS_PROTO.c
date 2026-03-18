/*
 * XREFs of MI_PFN_IS_PROTO @ 0x1402A2D50
 * Callers:
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_PFN_IS_PROTO(__int64 a1)
{
  return *(__int64 *)(a1 + 40) < 0;
}
