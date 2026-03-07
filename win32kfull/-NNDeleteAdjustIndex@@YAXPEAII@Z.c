void __fastcall NNDeleteAdjustIndex(unsigned int *a1, int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = -1;
  }
  else if ( v2 > a2 )
  {
    *a1 = v2 - 1;
  }
}
