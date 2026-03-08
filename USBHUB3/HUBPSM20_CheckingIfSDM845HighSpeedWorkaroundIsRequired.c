/*
 * XREFs of HUBPSM20_CheckingIfSDM845HighSpeedWorkaroundIsRequired @ 0x1C0011BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_CheckingIfSDM845HighSpeedWorkaroundIsRequired(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 960);
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 4) == 0 )
    return 3005LL;
  result = 3089LL;
  if ( v1[52] != 512 )
    return 3005LL;
  return result;
}
