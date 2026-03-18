/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x14036EB54
 * Callers:
 *     HalpIommuInitSystem @ 0x140A8A420 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3596LL);
}
