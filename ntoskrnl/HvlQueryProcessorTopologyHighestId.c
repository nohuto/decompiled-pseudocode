/*
 * XREFs of HvlQueryProcessorTopologyHighestId @ 0x14053E040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyHighestId(_DWORD *a1, _DWORD *a2)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = dword_140D18AD0;
  if ( a2 )
    *a2 = dword_140D18AD4;
  return 0LL;
}
