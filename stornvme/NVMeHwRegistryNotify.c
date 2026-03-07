__int64 __fastcall NVMeHwRegistryNotify(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x8008) == 0 )
    return GetDynamicRegistrySettings();
  return result;
}
