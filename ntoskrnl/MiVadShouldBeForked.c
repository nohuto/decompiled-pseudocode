__int64 __fastcall MiVadShouldBeForked(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0xA00000) != 0xA00000 )
  {
    if ( (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000) )
      return 1LL;
    v2 = v1 & 0x70;
    if ( ((v1 & 0x70) == 0 || v2 == 32 || v2 == 80) && (v1 & 0x6200000) != 0x4200000 )
    {
      if ( (v1 & 0x200000) == 0 )
        return (*(_DWORD *)(a1 + 64) >> 26) & 1;
      return 1LL;
    }
  }
  return 0LL;
}
