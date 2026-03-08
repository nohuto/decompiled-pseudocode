/*
 * XREFs of IommuDomainDelete @ 0x140932760
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x140515CC0 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1)
{
  return HalpIommuFreeDmaDomain(a1);
}
