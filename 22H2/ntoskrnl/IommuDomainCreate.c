/*
 * XREFs of IommuDomainCreate @ 0x140866800
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403B3818 (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreate(char a1, __int64 *a2)
{
  return HalpIommuAllocateDmaDomain(2LL, a1, a2);
}
