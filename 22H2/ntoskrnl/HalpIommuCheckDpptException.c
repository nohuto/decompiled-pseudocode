/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404C9030
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404C9DC0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140864A14 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
