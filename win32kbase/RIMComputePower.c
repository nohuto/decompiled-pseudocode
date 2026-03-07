__int64 __fastcall RIMComputePower(__int16 a1)
{
  int v1; // r8d
  unsigned int v2; // r9d
  __int16 i; // ax

  v1 = 10;
  v2 = 1;
  for ( i = abs16(a1); i; i >>= 1 )
  {
    if ( (i & 1) != 0 )
      v2 *= v1;
    v1 *= v1;
  }
  return v2;
}
