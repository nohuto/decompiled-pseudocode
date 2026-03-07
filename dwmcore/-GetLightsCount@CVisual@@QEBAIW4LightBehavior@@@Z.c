__int64 __fastcall CVisual::GetLightsCount(_QWORD *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
    v2 = a1[39] - a1[38];
  else
    v2 = a1[36] - a1[35];
  return v2 >> 4;
}
