/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x140561E68
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140879CB4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F2B8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x1403D93F0 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_140A79450; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 7 )
      return v1;
  }
  return *((unsigned int *)&off_140A79450 + 4 * v2 + 2);
}
