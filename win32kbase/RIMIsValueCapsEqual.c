__int64 __fastcall RIMIsValueCapsEqual(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // r10d
  unsigned __int16 i; // r11

  v3 = 1;
  for ( i = 0; i < a3; ++i )
  {
    if ( !v3 )
      break;
    if ( *(_WORD *)(a1 + 72LL * i) != *(_WORD *)(a2 + 72LL * i)
      || *(_BYTE *)(a1 + 72LL * i + 2) != *(_BYTE *)(a2 + 72LL * i + 2)
      || *(_BYTE *)(a1 + 72LL * i + 15) != *(_BYTE *)(a2 + 72LL * i + 15)
      || *(_BYTE *)(a1 + 72LL * i + 16) != *(_BYTE *)(a2 + 72LL * i + 16)
      || *(_WORD *)(a1 + 72LL * i + 18) != *(_WORD *)(a2 + 72LL * i + 18)
      || *(_WORD *)(a1 + 72LL * i + 20) != *(_WORD *)(a2 + 72LL * i + 20)
      || *(_DWORD *)(a1 + 72LL * i + 36) != *(_DWORD *)(a2 + 72LL * i + 36)
      || *(_DWORD *)(a1 + 72LL * i + 32) != *(_DWORD *)(a2 + 72LL * i + 32)
      || *(_DWORD *)(a1 + 72LL * i + 40) != *(_DWORD *)(a2 + 72LL * i + 40)
      || *(_DWORD *)(a1 + 72LL * i + 44) != *(_DWORD *)(a2 + 72LL * i + 44)
      || *(_DWORD *)(a1 + 72LL * i + 48) != *(_DWORD *)(a2 + 72LL * i + 48)
      || *(_DWORD *)(a1 + 72LL * i + 52) != *(_DWORD *)(a2 + 72LL * i + 52)
      || *(_WORD *)(a1 + 72LL * i + 56) != *(_WORD *)(a2 + 72LL * i + 56) )
    {
      v3 = 0;
    }
  }
  return v3;
}
