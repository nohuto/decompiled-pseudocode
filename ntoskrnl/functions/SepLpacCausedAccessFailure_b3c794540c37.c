bool __fastcall SepLpacCausedAccessFailure(__int64 a1, int a2)
{
  int v3; // r8d

  if ( !*(_BYTE *)(a1 + 24) )
    return 0;
  v3 = a2 & ~(*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8) | 0x2000000);
  return (v3 & *(_DWORD *)(a1 + 16)) == v3;
}
