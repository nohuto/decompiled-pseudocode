/*
 * XREFs of ?CompareKeyframes@KeyframeSequence@@CAHPEBX0@Z @ 0x1800E1020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyframeSequence::CompareKeyframes(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
