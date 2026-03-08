/*
 * XREFs of GreSetSolidBrush @ 0x1C017E600
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrush(HBRUSH a1, int a2)
{
  return GreSetSolidBrushInternal(a1, a2, 0, 1);
}
