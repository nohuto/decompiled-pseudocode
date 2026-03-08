/*
 * XREFs of WmipValidateWmiRegInfoString @ 0x1408680AC
 * Callers:
 *     WmipBuildInstanceSet @ 0x140867C6C (WmipBuildInstanceSet.c)
 *     WmipProcessWmiRegInfo @ 0x140867FA4 (WmipProcessWmiRegInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipValidateWmiRegInfoString(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int16 *v4; // r10

  if ( a3 > a2 )
    return 3221225485LL;
  if ( (a3 & 1) != 0 )
    return 3221225485LL;
  v4 = 0LL;
  if ( a3 )
  {
    v4 = (unsigned __int16 *)(a1 + a3);
    if ( a3 + *v4 > a2 )
      return 3221225485LL;
  }
  *a4 = v4;
  return 0LL;
}
