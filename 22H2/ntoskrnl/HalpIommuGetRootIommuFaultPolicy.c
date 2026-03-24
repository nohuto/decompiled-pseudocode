/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x14032D2FC
 * Callers:
 *     HalpIommuInitSystem @ 0x14099EB40 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3564LL);
}
