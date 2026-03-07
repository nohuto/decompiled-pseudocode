__int64 __fastcall RtlQueryElevationFlags(int *a1)
{
  int v1; // edx

  v1 = 0;
  *a1 = 0;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
  {
    v1 = 1;
    *a1 = 1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
  {
    v1 |= 2u;
    *a1 = v1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
    *a1 = v1 | 4;
  return 0LL;
}
