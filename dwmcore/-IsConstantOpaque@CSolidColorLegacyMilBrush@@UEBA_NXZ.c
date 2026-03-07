bool __fastcall CSolidColorLegacyMilBrush::IsConstantOpaque(CSolidColorLegacyMilBrush *this)
{
  return !*((_QWORD *)this + 9) && *((float *)this + 16) == 1.0 && *((float *)this + 27) == 1.0;
}
