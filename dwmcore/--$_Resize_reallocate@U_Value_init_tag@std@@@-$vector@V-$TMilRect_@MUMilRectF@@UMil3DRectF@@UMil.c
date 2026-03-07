void __fastcall std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
        __int128 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  SIZE_T size_of; // rax
  __int64 v7; // r10
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdx
  __int128 *v10; // rdx
  _OWORD *v11; // rcx
  __int128 *i; // rax
  __int128 v13; // xmm0

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = a1[1] - *a1;
  v5 = std::vector<tagRECT>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<16>(v5);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = (_QWORD *)(v7 + 16 * v4);
  v9 = a2 - v4;
  if ( a2 != v4 )
  {
    do
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = a1[1];
  v11 = (_OWORD *)v7;
  for ( i = *a1; i != v10; ++i )
  {
    v13 = *i;
    *v11++ = v13;
  }
  std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Change_array(
    (__int64)a1,
    v7,
    a2,
    v5);
}
