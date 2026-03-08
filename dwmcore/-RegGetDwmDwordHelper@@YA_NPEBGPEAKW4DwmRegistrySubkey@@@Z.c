/*
 * XREFs of ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800AE198
 * Callers:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800ADEF8 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE168 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDwmDwordHelper(__int64 a1, __int64 a2, int a3)
{
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx
  int v8; // r8d

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = L"Software\\Microsoft\\Windows\\Dwm\\Scene";
LABEL_7:
      v6 = L"DWMSceneSwitches";
      return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
    }
    if ( a3 == 2 )
    {
      v5 = L"Software\\Microsoft\\Windows\\Dwm\\GpuAccelInkTiming";
    }
    else
    {
      v5 = 0LL;
      v8 = a3 - 1;
      if ( !v8 )
        goto LABEL_7;
      if ( v8 != 1 )
      {
        v6 = 0LL;
        return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
      }
    }
    v6 = L"SuperWetTiming";
    return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
  }
  v5 = L"Software\\Microsoft\\Windows\\Dwm";
  v6 = L"DWMSwitches";
  return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
}
