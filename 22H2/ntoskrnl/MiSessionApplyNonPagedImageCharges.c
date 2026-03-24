/*
 * XREFs of MiSessionApplyNonPagedImageCharges @ 0x1408DA9AC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140328A98 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionApplyNonPagedImageCharges(unsigned __int64 a1)
{
  *((_BYTE *)MiSessionLookupImage(a1) + 64) = 1;
  return 0LL;
}
