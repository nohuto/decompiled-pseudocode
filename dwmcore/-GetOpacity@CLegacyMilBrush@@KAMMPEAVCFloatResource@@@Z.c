float __fastcall CLegacyMilBrush::GetOpacity(float a1, struct CFloatResource *a2)
{
  if ( a2 )
    a1 = *((float *)a2 + 16);
  return fminf(1.0, fmaxf(a1, 0.0));
}
