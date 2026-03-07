__int64 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax
  int v2; // r8d
  unsigned int v4; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) == 0 )
    return !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000;
  v4 = 0;
  if ( !v2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
    return 0LL;
  LOBYTE(v4) = (*(_DWORD *)(a1 + 48) & 0x70) == 32;
  return v4;
}
