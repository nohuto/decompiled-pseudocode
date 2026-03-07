bool __fastcall CVisual::GetEffectiveSize(CVisual *this, float *a2, float *a3)
{
  *a2 = *((float *)this + 35);
  *a3 = *((float *)this + 36);
  return *((float *)this + 35) != 0.0 && *((float *)this + 36) != 0.0;
}
