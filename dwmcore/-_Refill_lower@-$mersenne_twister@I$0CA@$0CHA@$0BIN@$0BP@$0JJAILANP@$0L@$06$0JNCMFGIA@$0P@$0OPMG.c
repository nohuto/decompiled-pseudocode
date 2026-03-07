char __fastcall std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::_Refill_lower(
        _DWORD *a1)
{
  _DWORD *v1; // r10
  int v3; // eax
  __int64 v4; // r11
  unsigned int v5; // edx
  _DWORD *v6; // r10
  __int64 v7; // r11
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  char result; // al
  int v12; // ecx

  v1 = a1 + 625;
  v3 = a1[625];
  v4 = 227LL;
  do
  {
    v5 = v3 ^ (v3 ^ v1[1]) & 0x7FFFFFFF;
    v3 = v1[1];
    *(v1 - 624) = (v5 >> 1) ^ v1[397] ^ ((v1[1] & 1) != 0 ? 0x9908B0DF : 0);
    ++v1;
    --v4;
  }
  while ( v4 );
  v6 = a1 + 852;
  v7 = 396LL;
  v8 = a1[852];
  do
  {
    v9 = v8 ^ (v8 ^ v6[1]) & 0x7FFFFFFF;
    v8 = v6[1];
    *(v6 - 624) = (v9 >> 1) ^ *(v6 - 851) ^ ((v6[1] & 1) != 0 ? 0x9908B0DF : 0);
    ++v6;
    --v7;
  }
  while ( v7 );
  v10 = a1[1248] ^ (a1[1] ^ a1[1248]) & 0x7FFFFFFF;
  result = -(a1[1] & 1);
  v12 = -((a1[1] & 1) != 0);
  *a1 = 0;
  a1[624] = (v10 >> 1) ^ a1[397] ^ v12 & 0x9908B0DF;
  return result;
}
