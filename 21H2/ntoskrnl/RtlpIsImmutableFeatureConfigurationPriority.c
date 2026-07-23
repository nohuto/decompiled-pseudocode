/*
 * XREFs of RtlpIsImmutableFeatureConfigurationPriority @ 0x1403F88B8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140919DD8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsImmutableFeatureConfigurationPriority(unsigned int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 <= 0xF )
  {
    v1 = 33281;
    if ( _bittest(&v1, a1) )
      return 1;
  }
  return result;
}
