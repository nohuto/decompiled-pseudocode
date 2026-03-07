float __fastcall CDropShadow::GetRadius(CDropShadow *this)
{
  float v1; // xmm2_4

  v1 = *((float *)this + 22);
  if ( COERCE_FLOAT(LODWORD(v1) & _xmm) < 0.0000011920929 )
    return 0.0;
  return v1;
}
