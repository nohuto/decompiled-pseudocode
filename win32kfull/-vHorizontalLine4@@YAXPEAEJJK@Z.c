void __fastcall vHorizontalLine4(unsigned __int8 *a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v5; // esi
  unsigned __int8 *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rbx

  v5 = a3 - a2;
  if ( a3 != a2 )
  {
    v6 = &a1[(__int64)a2 >> 1];
    if ( (a2 & 1) != 0 )
    {
      --v5;
      *v6 ^= (*v6 ^ a4) & 0xF;
      ++v6;
    }
    v7 = v5 >> 1;
    if ( v5 >> 1 )
    {
      v8 = v7;
      memset_0(v6, a4, v7);
      v6 += v8;
      v5 &= 1u;
    }
    if ( v5 )
      *v6 = a4 ^ (*v6 ^ a4) & 0xF;
  }
}
