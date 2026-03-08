/*
 * XREFs of DefaultSetInterval @ 0x14050A980
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerSetTimerBackedProfileInterval @ 0x1405085C0 (HalpTimerSetTimerBackedProfileInterval.c)
 */

__int64 __fastcall DefaultSetInterval(int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax

  if ( a1 )
    return 3221225659LL;
  v4 = (unsigned __int8)byte_140C08C9C;
  v5 = *a2;
  v6 = HIDWORD(DefaultProfileIntervalLimits[(unsigned __int8)byte_140C08C9C]);
  if ( *a2 < v6 )
  {
    *a2 = v6;
    v5 = v6;
  }
  v7 = DefaultProfileIntervalLimits[v4];
  if ( v5 > v7 )
  {
    *a2 = v7;
    v5 = v7;
  }
  v8 = HalpTimerSetTimerBackedProfileInterval(v5);
  *a2 = v8;
  dword_140C08C98 = v8;
  return 0LL;
}
