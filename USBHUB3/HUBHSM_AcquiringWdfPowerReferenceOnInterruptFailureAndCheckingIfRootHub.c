/*
 * XREFs of HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub @ 0x1C0008440
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_AcquireWdfPowerReference @ 0x1C000E064 (HUBFDO_AcquireWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_AcquireWdfPowerReference(v1);
  return *(_BYTE *)(v1 + 240) != 0 ? 2041 : 2057;
}
