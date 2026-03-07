__int64 __fastcall CmpSplitParentKeyName(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 result; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int v8; // edx
  __int16 v9; // cx
  bool v10; // zf
  __m128i v11; // [rsp+0h] [rbp-28h]
  __m128i i; // [rsp+10h] [rbp-18h]

  if ( a1->m128i_i16[0] )
  {
    v7 = *a1;
    result = (unsigned int)_mm_cvtsi128_si32(*a1);
    v11 = *a1;
    v8 = ((unsigned __int16)result >> 1) - 1;
    for ( i = *a1; v8 >= 0; --v8 )
    {
      result = v8;
      if ( *(_WORD *)(i.m128i_i64[1] + 2LL * v8) == 92 )
        break;
    }
    if ( v8 < 0 )
    {
      v6 = 0LL;
      goto LABEL_14;
    }
    v9 = 2 * v8;
    if ( 2 * (_WORD)v8 )
    {
      i.m128i_i16[1] = 2 * v8;
      i.m128i_i16[0] = 2 * v8;
      v6 = i;
    }
    else
    {
      v6 = 0LL;
    }
    v10 = -2 - v9 + v11.m128i_i16[0] == 0;
    v11.m128i_i16[0] += -2 - v9;
    v11.m128i_i16[1] = v11.m128i_i16[0];
    result = a1->m128i_i64[1];
    if ( !v10 )
    {
      v11.m128i_i64[1] = result + 2LL * (v8 + 1);
      v7 = v11;
      goto LABEL_14;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = 0LL;
LABEL_14:
  *a2 = v6;
  *a3 = v7;
  return result;
}
