__int64 __fastcall PopPowerAggregatorHandleSuspendIntent(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  int v4; // r9d
  int v5; // r9d
  char v6; // al

  *(_DWORD *)a2 = 2;
  v2 = 0;
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 16);
  if ( !v3 )
    goto LABEL_11;
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( !*(_BYTE *)(a1 + 41) )
    {
      *(_BYTE *)(a2 + 28) = *(_BYTE *)(a1 + 40);
      return v2;
    }
    return (unsigned int)-1073741823;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_11:
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 48);
    return v2;
  }
  if ( v5 == 2 )
  {
    v6 = *(_BYTE *)(a1 + 40);
    if ( v6 )
    {
      *(_BYTE *)(a2 + 28) = v6;
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 48);
      return v2;
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)-1073700861;
}
