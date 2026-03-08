/*
 * XREFs of AslRegWildcardFindNext @ 0x140A53734
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140A4DAFC (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x140A53674 (AslRegWildcardFindFirst.c)
 * Callees:
 *     AslpProcessMatchRegNode @ 0x140A53E9C (AslpProcessMatchRegNode.c)
 */

__int64 __fastcall AslRegWildcardFindNext(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int matched; // ecx

  v2 = (_QWORD *)a2[2];
  if ( !a2 || !v2 )
    return 2147483674LL;
LABEL_8:
  if ( v2 == a2 )
  {
    matched = -2147483622;
    v2 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      matched = AslpProcessMatchRegNode(v2, a2);
      if ( matched < 0 )
      {
        v2 = (_QWORD *)v2[1];
        goto LABEL_8;
      }
      if ( (_QWORD *)*v2 == a2 )
        break;
      v2 = (_QWORD *)*v2;
    }
    *a1 = v2[4];
  }
  a2[2] = v2;
  return (unsigned int)matched;
}
