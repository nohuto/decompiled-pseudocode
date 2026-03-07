void __fastcall CInteractionTracker::GetScrollRange(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // edx

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v4 = a1[35];
        v5 = a1[36];
      }
    }
    else
    {
      v4 = a1[24];
      v5 = a1[27];
    }
  }
  else
  {
    v4 = a1[23];
    v5 = a1[26];
  }
  *a3 = v4;
  *a4 = v5;
}
