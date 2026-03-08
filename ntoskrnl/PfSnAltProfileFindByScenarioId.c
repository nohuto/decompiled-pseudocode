/*
 * XREFs of PfSnAltProfileFindByScenarioId @ 0x1407E50B0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1407E6D34 (PfSnBeginAppLaunch.c)
 *     PfSnSetAltPrefetchParam @ 0x14097C9F8 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x14097C698 (PfSnAltProfileTreeCompareByScenarioId.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByScenarioId(wchar_t *Str2)
{
  unsigned __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax

  v2 = *((_QWORD *)&xmmword_140C6A3A0 + 1);
  if ( (qword_140C6A3B0 & 1) != 0 && *((_QWORD *)&xmmword_140C6A3A0 + 1) )
    v2 = ((unsigned __int64)&xmmword_140C6A3A0 + 8) ^ *((_QWORD *)&xmmword_140C6A3A0 + 1);
  v3 = qword_140C6A3B0 & 1;
  while ( v2 )
  {
    v4 = PfSnAltProfileTreeCompareByScenarioId(Str2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        break;
      v5 = *(_QWORD *)(v2 + 8);
    }
    else
    {
      v5 = *(_QWORD *)v2;
    }
    if ( v3 && v5 )
      v2 ^= v5;
    else
      v2 = v5;
  }
  if ( v2 )
    return v2 - 24;
  else
    return 0LL;
}
