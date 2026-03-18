/*
 * XREFs of IommuDomainCreateEx @ 0x140851AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403A91BC (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreateEx(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, _QWORD *a5)
{
  return HalpIommuAllocateDmaDomain(a1, a2, a3, a4, a5);
}
