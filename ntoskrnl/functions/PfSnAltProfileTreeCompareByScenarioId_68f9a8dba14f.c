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
