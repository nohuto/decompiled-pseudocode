/*
 * XREFs of PiDevCfgMatchDriverConfigurationId @ 0x14055FBEC
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

bool __fastcall PiDevCfgMatchDriverConfigurationId(__int64 a1, const wchar_t *a2)
{
  size_t v4; // rsi
  char v5; // bl
  const wchar_t *v6; // rsi
  size_t v7; // rdi

  v4 = *(_WORD *)(a1 + 40) >> 1;
  v5 = 0;
  if ( !wcsnicmp(a2, *(const wchar_t **)(a1 + 48), v4) && a2[v4] == 58 )
  {
    v6 = &a2[v4];
    v7 = (unsigned __int64)*(unsigned __int16 *)(a1 + 72) >> 1;
    if ( !wcsnicmp(v6 + 1, *(const wchar_t **)(a1 + 80), v7) )
      return v6[v7 + 1] == 44;
  }
  return v5;
}
