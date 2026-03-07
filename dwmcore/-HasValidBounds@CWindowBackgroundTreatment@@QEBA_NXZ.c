bool __fastcall CWindowBackgroundTreatment::HasValidBounds(CWindowBackgroundTreatment *this)
{
  float v1; // xmm0_4
  int v2; // edx
  unsigned int v3; // eax

  v1 = *((float *)this + 27);
  v2 = (v1 <= *((float *)this + 26)) + 1;
  if ( *((float *)this + 24) > *((float *)this + 22) )
    v2 = v1 <= *((float *)this + 26);
  v3 = v2 + 1;
  if ( *((float *)this + 25) > *((float *)this + 23) )
    v3 = v2;
  return v3 <= 1;
}
