/*
 * XREFs of XilRegister_GetContextSize @ 0x1C003F324
 * Callers:
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetContextSize(__int64 a1)
{
  return (*(_DWORD *)(a1 + 104) >> 2) & 1;
}
