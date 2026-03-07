void __fastcall CSpringAccelerator::SetFinalValue(CSpringAccelerator *this, float a2)
{
  *((float *)this + 9) = a2;
}
