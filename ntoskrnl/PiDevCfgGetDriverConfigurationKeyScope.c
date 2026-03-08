/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x14055F9C8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408766D8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_140A76740; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 7 )
      return v1;
  }
  return *((unsigned int *)&off_140A76740 + 4 * v2 + 2);
}
