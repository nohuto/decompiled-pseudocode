/*
 * XREFs of ACPIInternalInterruptHonorBiosPolarities @ 0x1C002E828
 * Callers:
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 * Callees:
 *     ACPIGetTableVersion @ 0x1C0031D50 (ACPIGetTableVersion.c)
 */

bool ACPIInternalInterruptHonorBiosPolarities()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (AcpiOverrideAttributes & 0x20000) == 0 )
  {
    if ( (AcpiOverrideAttributes & 0x40000) != 0 )
      return 1;
    if ( (int)ACPIGetTableVersion(1346584902LL, &v1) >= 0 )
      return v1 >= 5;
  }
  return 0;
}
