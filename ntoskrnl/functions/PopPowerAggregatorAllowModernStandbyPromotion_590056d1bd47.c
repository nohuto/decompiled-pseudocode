char __fastcall PopPowerAggregatorAllowModernStandbyPromotion(__int64 a1, __int64 a2)
{
  char result; // al
  char v4; // cl
  int v5; // ecx

  result = 1;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v4 = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(a1 + 40) )
    {
      if ( !v4 )
        return result;
    }
    else if ( v4 )
    {
      return 0;
    }
    v5 = *(_DWORD *)(a2 + 8);
    if ( v5 == 4 )
    {
      if ( !dword_140C3D3CC )
        return 0;
    }
    else if ( v5 != 43 && v5 != 46 && (v5 != 45 || *(_DWORD *)(a1 + 24) == 45) )
    {
      return 0;
    }
  }
  return result;
}
