__int64 __fastcall EtwpQueryProcessCommandLine(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  _WORD *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax
  __int64 Pool2; // rax
  __int64 v11; // rcx
  void *Src[2]; // [rsp+30h] [rbp-48h]
  __m128i v15; // [rsp+40h] [rbp-38h]

  *(_OWORD *)Src = 0LL;
  *(_WORD *)a2 = 0;
  v3 = (__int64 *)(a2 + 8);
  v4 = *(_WORD **)(a2 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 32LL);
  if ( v5 )
  {
    v15.m128i_i32[1] = 0;
    v6 = v5 + 112;
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v15.m128i_i32[0] = *(_DWORD *)v6;
    v7 = *(_QWORD *)(v6 + 8);
    v15.m128i_i64[1] = v7;
    Src[1] = (void *)v7;
    v8 = _mm_cvtsi128_si32(v15) & 0xFFFE;
    if ( v8 )
    {
      if ( v7 )
      {
        if ( (v7 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 + v7 > 0x7FFFFFFF0000LL || v8 + v7 < v7 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( v8 > 0x400u )
          v8 = 1024;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
  {
    v9 = *(_WORD *)(a2 + 2);
    if ( v9 )
    {
      if ( v8 >= v9 )
        v8 = *(_WORD *)(a2 + 2);
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, v8, 1350005829LL);
      v4 = (_WORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *v3 = Pool2;
      *(_WORD *)(a2 + 2) = v8;
    }
    memmove(v4, Src[1], v8);
    if ( v8 >> 1 )
    {
      v11 = v8 >> 1;
      do
      {
        if ( !*v4 )
          *v4 = 32;
        ++v4;
        --v11;
      }
      while ( v11 );
    }
    *(_WORD *)a2 = v8;
  }
  return 0;
}
