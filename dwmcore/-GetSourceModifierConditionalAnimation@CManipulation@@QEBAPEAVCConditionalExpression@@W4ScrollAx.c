__int64 __fastcall CManipulation::GetSourceModifierConditionalAnimation(_QWORD *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[63];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[64];
  if ( v2 == 1 )
    return a1[65];
  return 0LL;
}
