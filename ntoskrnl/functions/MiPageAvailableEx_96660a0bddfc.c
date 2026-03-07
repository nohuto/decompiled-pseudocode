__int64 __fastcall MiPageAvailableEx(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  int v4; // r9d

  if ( a2 >= 0x9F )
    return 1LL;
  if ( (a3 & 0x2000) != 0 )
    return 1LL;
  v4 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v4 & 0xC) == 8 )
    return 1LL;
  if ( a2 < 0x20 && (_UNKNOWN *)a1 == &MiSystemPartition )
    return 0LL;
  if ( (a3 & 4) != 0 || (v4 & 2) != 0 && a2 >= 0x21 )
    return 1LL;
  return (*(_DWORD *)(a1 + 4) >> 4) & 1;
}
