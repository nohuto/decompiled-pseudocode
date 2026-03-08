/*
 * XREFs of HUBPSM30_PoweredOffDisconnected @ 0x1C00122D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_PoweredOffDisconnected(__int64 a1)
{
  *(_WORD *)(*(_QWORD *)(a1 + 960) + 192LL) = 0;
  return 1000LL;
}
