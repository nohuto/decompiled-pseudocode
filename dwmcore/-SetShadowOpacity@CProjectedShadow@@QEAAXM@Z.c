void __fastcall CProjectedShadow::SetShadowOpacity(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 25) - a2) & _xmm) > 0.0000011920929 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 25) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v2 + 72))(this, 5LL, this);
  }
}
