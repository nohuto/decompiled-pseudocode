/*
 * XREFs of HalpIommuIsInPermanentPassthrough @ 0x140515EB0
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x140515ED4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x140516044 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsInPermanentPassthrough(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 488LL) & 0x100) == 0;
}
