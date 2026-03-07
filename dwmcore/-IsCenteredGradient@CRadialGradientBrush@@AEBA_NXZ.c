bool __fastcall CRadialGradientBrush::IsCenteredGradient(CRadialGradientBrush *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 64) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 65) & _xmm) < 0.0000011920929;
}
