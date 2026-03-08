/*
 * XREFs of HUBHSM_AcquiringWdfPowerReferenceOnInterrupt @ 0x1C0008410
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_AcquireWdfPowerReference @ 0x1C000E064 (HUBFDO_AcquireWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_AcquiringWdfPowerReferenceOnInterrupt(__int64 a1)
{
  HUBFDO_AcquireWdfPowerReference(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
