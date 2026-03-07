__int64 __fastcall PpmInfoConfigComparer(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // cl

  v2 = a1[36];
  v3 = a2[36];
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
