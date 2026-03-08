/*
 * XREFs of ACPIGetTableVersion @ 0x1C0031D50
 * Callers:
 *     ACPIInternalInterruptHonorBiosPolarities @ 0x1C002E828 (ACPIInternalInterruptHonorBiosPolarities.c)
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIGetTableVersion(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1 == 1346584902 )
  {
    *a2 = *(unsigned __int8 *)(*((_QWORD *)AcpiInformation + 1) + 8LL);
  }
  else if ( a1 == 1413763908 )
  {
    *a2 = *(unsigned __int8 *)(*((_QWORD *)AcpiInformation + 3) + 8LL);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
