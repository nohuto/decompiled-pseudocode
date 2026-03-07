__int64 __fastcall CRadialGradientEffect::GetConstantBufferSize(CRadialGradientEffect *this)
{
  return *((_BYTE *)this + 44) != 0 ? 8 : 32;
}
