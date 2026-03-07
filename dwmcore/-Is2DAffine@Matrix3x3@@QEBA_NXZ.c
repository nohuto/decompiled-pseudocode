bool __fastcall Matrix3x3::Is2DAffine(Matrix3x3 *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 2) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) < 0.0000011920929;
}
