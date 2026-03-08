/*
 * XREFs of HalpIommuInitializeDmar @ 0x1403A409C
 * Callers:
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403A43AC (HalpIommuAllocateDmaDomain.c)
 */

__int64 HalpIommuInitializeDmar()
{
  __int64 result; // rax
  int v1; // r8d
  unsigned int v2; // ecx
  ULONG_PTR i; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( HalpHvIommu )
    return 0LL;
  result = HalpIommuAllocateDmaDomain(1, 0, 0, 0, (__int64)&HalpIommuBypassDomain);
  v2 = result;
  if ( (int)result >= 0 )
  {
    for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 488) & 0x180) != 0 )
      {
        LOBYTE(v1) = 1;
        result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, i, v1, 0, 0, (__int64)&v4);
        v2 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v2;
  }
  return result;
}
