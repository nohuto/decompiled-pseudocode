__int64 __fastcall BgpTxtRegionSize(__int64 a1)
{
  __int64 v1; // r9
  unsigned int *v2; // rax
  unsigned int v3; // r10d
  int v4; // eax
  int v5; // r10d
  unsigned int *v6; // rax
  int v7; // eax
  int v8; // r10d

  v1 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v3 = 112;
  if ( v2 )
  {
    v4 = BgpGxReservePoolRectangleSize(*v2, v2[1], v2[2], a1);
    v3 = v4 + v5;
  }
  v6 = *(unsigned int **)(v1 + 32);
  if ( v6 )
  {
    v7 = BgpGxReservePoolRectangleSize(*v6, v6[1], v6[2], v1);
    return (unsigned int)(v7 + v8);
  }
  return v3;
}
