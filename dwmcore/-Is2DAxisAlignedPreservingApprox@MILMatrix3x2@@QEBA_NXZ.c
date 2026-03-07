bool __fastcall MILMatrix3x2::Is2DAxisAlignedPreservingApprox(MILMatrix3x2 *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 1) & _xmm) < 0.0000081380213
      && COERCE_FLOAT(*((_DWORD *)this + 2) & _xmm) < 0.0000081380213
      || COERCE_FLOAT(*(_DWORD *)this & _xmm) < 0.0000081380213
      && COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) < 0.0000081380213;
}
