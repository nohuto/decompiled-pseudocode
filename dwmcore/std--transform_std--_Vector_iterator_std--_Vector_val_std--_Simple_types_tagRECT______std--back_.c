__int64 **__fastcall std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_6991071fcff892ffb13e08e0d7abc234___(
        __int64 **a1,
        int *a2,
        int *a3,
        __int64 *a4,
        __int64 a5)
{
  int *v8; // rsi
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  _BYTE *v12; // rdx
  float v14[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 != a3 )
  {
    v8 = a2 + 2;
    do
    {
      v9 = (float)*(v8 - 1);
      v10 = (float)*v8;
      v11 = (float)v8[1];
      v14[0] = (float)*(v8 - 2);
      v14[1] = v9;
      v14[2] = v10;
      v14[3] = v11;
      v15 = 0LL;
      CDrawingContext::CalcWorldSpaceClippedBounds(a5, (__int64)v14, (float *)&v15);
      PixelAlign((int *)&v16, (float *)&v15);
      v12 = (_BYTE *)a4[1];
      if ( v12 == (_BYTE *)a4[2] )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a4, v12, &v16);
      }
      else
      {
        *(_OWORD *)v12 = v16;
        a4[1] += 16LL;
      }
      v8 += 4;
    }
    while ( v8 - 2 != a3 );
  }
  *a1 = a4;
  return a1;
}
