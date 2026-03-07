__int64 __fastcall RIMShouldVirtualDeviceBeClosed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    return 0;
  v1 = *(_DWORD *)(a1 + 188);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
