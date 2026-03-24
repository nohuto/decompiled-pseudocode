/*
 * XREFs of ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ @ 0x1800C2570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CColorBrush::IsEmptyDrawing(CColorBrush *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 23) & _xmm) < 0.0000011920929;
}
