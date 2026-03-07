_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( (v2 || (*(_DWORD *)(a1 + 64) & 0x1000000) == 0) && (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
      return 1LL;
  }
  else if ( !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
  {
    return 1LL;
  }
  return (*(_DWORD *)(a1 + 48) & 0x70) == 64;
}
