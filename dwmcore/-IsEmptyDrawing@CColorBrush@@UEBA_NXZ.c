bool __fastcall CColorBrush::IsEmptyDrawing(CColorBrush *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 25) & _xmm) < 0.0000011920929;
}
