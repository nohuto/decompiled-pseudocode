/*
 * XREFs of HalpIommuCheckDpptException @ 0x14038F974
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140518860 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x14082AB98 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 5 || HalpIommuSecurityPolicy != 1;
}
