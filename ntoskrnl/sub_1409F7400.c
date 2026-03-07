__int64 __fastcall sub_1409F7400(__int64 a1, _DWORD *a2, _OWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v6; // r10d

  v6 = 0;
  *a6 = 1;
  *a5 = 16;
  if ( a4 >= 0x10 )
  {
    if ( a2 )
      *a2 = 3;
    if ( a3 )
      *a3 = *(_OWORD *)(a1 + 46993);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v6;
}
