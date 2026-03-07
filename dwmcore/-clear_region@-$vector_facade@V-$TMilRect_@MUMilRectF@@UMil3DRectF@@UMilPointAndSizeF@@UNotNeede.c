void __fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  char v9[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a3;
  v5 = *a1;
  v6 = (a1[1] - v5) >> 4;
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = 16 * v4;
  if ( v4 != v6 )
  {
    v8[2] = 0LL;
    v8[0] = v5;
    v8[1] = v6;
    std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      (__int64)v9,
      (const void *)(v7 + v5),
      v5 + 16 * v6,
      v8);
  }
  a1[1] -= v7;
}
