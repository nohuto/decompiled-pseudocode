/*
 * XREFs of PfSnAltProfileTreeCompareByScenarioId @ 0x14097C698
 * Callers:
 *     PfSnAltProfileFindByScenarioId @ 0x1407E50B0 (PfSnAltProfileFindByScenarioId.c)
 *     PfSnSetAltPrefetchParam @ 0x14097C9F8 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByScenarioId(wchar_t *Str2, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a2 + 92);
  if ( v2 <= *((_DWORD *)Str2 + 15) )
  {
    if ( v2 < *((_DWORD *)Str2 + 15) )
      return -1;
    v3 = *(_DWORD *)(a2 + 96);
    if ( v3 <= *((_DWORD *)Str2 + 16) )
    {
      if ( v3 >= *((_DWORD *)Str2 + 16) )
        return wcsncmp((const wchar_t *)(a2 + 32), Str2, 0x1EuLL);
      return -1;
    }
  }
  return 1;
}
