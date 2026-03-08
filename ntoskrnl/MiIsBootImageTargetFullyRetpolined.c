/*
 * XREFs of MiIsBootImageTargetFullyRetpolined @ 0x140B96790
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402F4538 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsBootImageTargetFullyRetpolined(unsigned __int64 a1)
{
  __int64 *v2; // rcx
  __int64 *i; // rdx
  unsigned __int64 v4; // r8

  v2 = 0LL;
  for ( i = *(__int64 **)(KeLoaderBlock_0 + 16); i != (__int64 *)(KeLoaderBlock_0 + 16); i = (__int64 *)*i )
  {
    v4 = i[6];
    if ( a1 >= v4 && a1 < v4 + *((unsigned int *)i + 16) )
    {
      v2 = i;
      return RtlIsImageFullyRetpolined(v2[6]);
    }
  }
  return RtlIsImageFullyRetpolined(v2[6]);
}
