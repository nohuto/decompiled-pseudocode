unsigned __int64 __fastcall Xp10ComputeCrc64(unsigned __int8 **a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rdx
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // al
  unsigned __int64 v7; // rcx

  v1 = *((_DWORD *)a1 + 3);
  v2 = -1LL;
  if ( v1 )
  {
    v3 = *a1;
    v4 = v1;
    do
    {
      v5 = 8LL;
      v2 ^= *v3;
      do
      {
        v6 = v2;
        v7 = v2 >> 1;
        v2 = (v2 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
        if ( (v6 & 1) == 0 )
          v2 = v7;
        --v5;
      }
      while ( v5 );
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return ~v2;
}
