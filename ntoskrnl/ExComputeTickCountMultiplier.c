__int64 ExComputeTickCountMultiplier()
{
  unsigned int v0; // r8d
  int v1; // r9d
  __int64 v2; // r10
  int v3; // eax
  unsigned int v4; // ecx

  v0 = KeMaximumIncrement % 0x2710u;
  v1 = 0;
  v2 = 24LL;
  do
  {
    v3 = 2 * v1;
    v4 = 2 * v0;
    v1 = (2 * v1) | 1;
    v0 = 2 * v0 - 10000;
    if ( v4 < 0x2710 )
    {
      v1 = v3;
      v0 = v4;
    }
    --v2;
  }
  while ( v2 );
  return v1 | ((KeMaximumIncrement / 0x2710u) << 24);
}
