__int64 __fastcall NVMeControllerValidateFirmwareActivateCapability(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  *(_DWORD *)(a1 + 64) = ((unsigned int)GetRegistrySettingsForSpecificKey() != 0 ? 0x20 : 0) | *(_DWORD *)(a1 + 64) & 0xFFFFFFDF;
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
