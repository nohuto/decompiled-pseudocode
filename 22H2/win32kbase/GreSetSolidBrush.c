/*
 * XREFs of GreSetSolidBrush @ 0x1C00D1630
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0060078 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrush(HBRUSH a1, int a2)
{
  return GreSetSolidBrushInternal(a1, a2, 0, 1);
}
