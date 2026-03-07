bool __fastcall CheckOneBitValidFlag(int a1, int a2)
{
  int v2; // ecx

  if ( (~a2 & a1) != 0 )
    return 0;
  v2 = a2 & a1;
  if ( !v2 )
    return 0;
  while ( (v2 & 1) == 0 )
    v2 >>= 1;
  return v2 <= 1;
}
