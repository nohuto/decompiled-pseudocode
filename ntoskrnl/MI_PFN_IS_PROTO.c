/*
 * XREFs of MI_PFN_IS_PROTO @ 0x140344B30
 * Callers:
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_PFN_IS_PROTO(__int64 a1)
{
  return *(__int64 *)(a1 + 40) < 0;
}
