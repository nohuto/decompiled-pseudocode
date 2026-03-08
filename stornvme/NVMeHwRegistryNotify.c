/*
 * XREFs of NVMeHwRegistryNotify @ 0x1C00085A0
 * Callers:
 *     <none>
 * Callees:
 *     GetDynamicRegistrySettings @ 0x1C0025C98 (GetDynamicRegistrySettings.c)
 */

__int64 __fastcall NVMeHwRegistryNotify(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x8008) == 0 )
    return GetDynamicRegistrySettings();
  return result;
}
