__int64 __fastcall PnpiCmResourceToBiosIoPort(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // r9d
  __int64 i; // rcx
  __int16 v6; // ax
  char v7; // al

  *(_BYTE *)(a1 + 1) = 0;
  v3 = 0;
  *(_DWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 6) = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 1; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    v6 = *(_WORD *)(i + 4);
    *(_WORD *)(a1 + 2) = v6;
    *(_WORD *)(a1 + 4) = v6;
    *(_BYTE *)(a1 + 6) = 1;
    *(_BYTE *)(a1 + 7) = *(_BYTE *)(i + 12);
    v7 = *(_BYTE *)(a1 + 1);
    if ( (*(_BYTE *)(i + 2) & 0x10) != 0 )
      v7 = 1;
    *(_BYTE *)(a1 + 1) = v7;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
