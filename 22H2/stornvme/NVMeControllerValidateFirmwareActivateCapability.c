/*
 * XREFs of NVMeControllerValidateFirmwareActivateCapability @ 0x1C0014220
 * Callers:
 *     <none>
 * Callees:
 *     GetRegistrySettingsForSpecificKey @ 0x1C001E008 (GetRegistrySettingsForSpecificKey.c)
 */

__int64 __fastcall NVMeControllerValidateFirmwareActivateCapability(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  *(_DWORD *)(a1 + 140) = GetRegistrySettingsForSpecificKey();
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
