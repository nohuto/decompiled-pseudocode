__int16 __fastcall RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(int a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int16 v4; // r9
  __int16 v5; // ax
  int v6; // edx
  __int16 v7; // cx
  __int16 result; // ax

  v3 = a2 ^ a1;
  v4 = 0;
  if ( v3 )
  {
    if ( (v3 & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
        v4 = 1;
      else
        v4 = 2;
    }
    if ( (v3 & 2) != 0 )
    {
      if ( (a2 & 2) != 0 )
        v4 |= 4u;
      else
        v4 |= 8u;
    }
    if ( (v3 & 4) != 0 )
    {
      if ( (a2 & 4) != 0 )
        v4 |= 0x10u;
      else
        v4 |= 0x20u;
    }
    if ( (v3 & 8) != 0 )
    {
      if ( (a2 & 8) != 0 )
        v4 |= 0x40u;
      else
        v4 |= 0x80u;
    }
    if ( (v3 & 0x10) != 0 )
    {
      v5 = 256;
      if ( (a2 & 0x10) == 0 )
        v5 = 512;
      v4 |= v5;
    }
  }
  v6 = *(_DWORD *)(a3 + 12);
  v7 = v4 | 0x400;
  if ( (v6 & 0x800) == 0 )
    v7 = v4;
  result = v7 | 0x800;
  if ( (v6 & 0x1000) == 0 )
    return v7;
  return result;
}
