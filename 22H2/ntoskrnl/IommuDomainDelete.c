/*
 * XREFs of IommuDomainDelete @ 0x140935770
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x1405181F0 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1)
{
  return HalpIommuFreeDmaDomain(a1);
}
