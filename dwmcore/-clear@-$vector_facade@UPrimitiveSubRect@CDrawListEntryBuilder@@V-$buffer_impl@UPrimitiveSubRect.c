__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8

  result = 0xAAAAAAAAAAAAAAABuLL;
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v3 )
    return detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             a2,
             v3);
  return result;
}
