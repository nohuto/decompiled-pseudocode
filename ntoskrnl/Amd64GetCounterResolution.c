/*
 * XREFs of Amd64GetCounterResolution @ 0x140526F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64GetCounterResolution(unsigned int a1, int *a2)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = 0;
  v3 = 0;
  if ( a1 == -1073741591 || a1 < Amd64NumberCounters )
    v2 = 48;
  else
    v3 = -1073741811;
  *a2 = v2;
  return v3;
}
