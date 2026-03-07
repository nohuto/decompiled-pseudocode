int __fastcall IopGetModeInformation(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // edx
  int v3; // ecx
  int result; // eax

  v1 = *(_DWORD *)(a1 + 80);
  v2 = (v1 >> 3) & 2 | 4;
  if ( (v1 & 0x20) == 0 )
    v2 = (v1 >> 3) & 2;
  v3 = v2 | 8;
  if ( (v1 & 8) == 0 )
    v3 = v2;
  if ( (v1 & 2) != 0 )
  {
    if ( (v1 & 4) != 0 )
      v3 |= 0x10u;
    else
      v3 |= 0x20u;
  }
  result = v3 | 0x1000;
  if ( (v1 & 0x10000) == 0 )
    return v3;
  return result;
}
