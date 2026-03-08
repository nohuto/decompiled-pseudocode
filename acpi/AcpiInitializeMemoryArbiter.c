/*
 * XREFs of AcpiInitializeMemoryArbiter @ 0x1C0088F2C
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C000B688 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1C00A1B94 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall AcpiInitializeMemoryArbiter(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)(a1 + 136);
  v3[15] = AcpiArblibUnpackRequirement;
  v3[16] = AcpiArblibPackResource;
  v3[17] = AcpiArblibUnpackResource;
  v3[18] = AcpiArblibScoreRequirement;
  v3[31] = AcpiMemarbFindSuitableRange;
  return ArbInitializeArbiterInstance(v3, *(_QWORD *)(a2 + 768), 3LL, a1);
}
