__int64 __fastcall std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::operator()(
        unsigned int *a1)
{
  __int64 v1; // r9
  _DWORD *v3; // r8
  int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // edx

  v1 = 624LL;
  if ( *a1 == 624 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = *v3 ^ *(v3 - 1);
      ++v3;
      v3[622] = ((*(v3 - 2) ^ v4 & 0x7FFFFFFFu) >> 1) ^ v3[395] ^ (((*((_BYTE *)v3 - 8) ^ (unsigned __int8)v4) & 1) != 0
                                                                 ? 0x9908B0DF
                                                                 : 0);
      --v1;
    }
    while ( v1 );
  }
  else if ( *a1 >= 0x4E0 )
  {
    std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::_Refill_lower();
  }
  v5 = *a1;
  v6 = a1[v5 + 1];
  *a1 = v5 + 1;
  v7 = ((((v6 >> 11) & a1[1249] ^ v6) & 0xFF3A58AD) << 7) ^ (v6 >> 11) & a1[1249] ^ v6;
  return ((v7 & 0xFFFFDF8C) << 15) ^ v7 ^ ((((v7 & 0xFFFFDF8C) << 15) ^ v7) >> 18);
}
