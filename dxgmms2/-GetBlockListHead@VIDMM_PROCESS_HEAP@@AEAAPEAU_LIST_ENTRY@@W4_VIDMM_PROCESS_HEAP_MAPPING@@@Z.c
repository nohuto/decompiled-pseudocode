__int64 __fastcall VIDMM_PROCESS_HEAP::GetBlockListHead(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return a1 + 192;
  v3 = v2 - 1;
  if ( !v3 )
    return a1 + 208;
  v4 = v3 - 1;
  if ( !v4 )
    return a1 + 224;
  v5 = v4 - 1;
  if ( !v5 )
    return a1 + 240;
  v6 = v5 - 1;
  if ( !v6 )
    return a1 + 256;
  if ( v6 == 1 )
    return a1 + 272;
  return 0LL;
}
