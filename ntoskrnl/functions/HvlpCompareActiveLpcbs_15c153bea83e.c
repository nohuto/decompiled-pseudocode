__int64 __fastcall HvlpCompareActiveLpcbs(_BYTE *a1, _BYTE *a2)
{
  char v2; // al
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v2 = a1[112];
  if ( v2 != a2[112] )
    return v2 != 0 ? -1 : 1;
  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 >= v5 )
    return v4 > v5;
  else
    return 0xFFFFFFFFLL;
}
