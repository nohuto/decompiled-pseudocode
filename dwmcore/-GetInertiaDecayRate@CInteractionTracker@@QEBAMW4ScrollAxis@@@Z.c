float __fastcall CInteractionTracker::GetInertiaDecayRate(float *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx

  result = 0.0;
  if ( !a2 )
    return a1[29];
  v3 = a2 - 1;
  if ( !v3 )
    return a1[30];
  if ( v3 == 1 )
    return a1[43];
  return result;
}
