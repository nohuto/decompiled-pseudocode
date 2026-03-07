void __fastcall CProjectedShadow::SetBlurRadius(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - *((float *)this + 24)) & _xmm) > 0.5 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 24) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(v2 + 72))(this, 0LL, this);
  }
}
