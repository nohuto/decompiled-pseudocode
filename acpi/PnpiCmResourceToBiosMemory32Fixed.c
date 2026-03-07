__int64 __fastcall PnpiCmResourceToBiosMemory32Fixed(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  __int64 i; // r8
  char v6; // dl

  *(_BYTE *)(a1 + 3) = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 3; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    v6 = *(_BYTE *)(a1 + 3);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(i + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(i + 12) >> 8;
    if ( (*(_BYTE *)(i + 2) & 1) == 0 )
      v6 |= 1u;
    *(_BYTE *)(a1 + 3) = v6;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
