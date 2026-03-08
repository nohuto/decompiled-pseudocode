/*
 * XREFs of HalpIommuCheckDpptException @ 0x14038D4B4
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140516330 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 5 || HalpIommuSecurityPolicy != 1;
}
