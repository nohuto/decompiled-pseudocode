void *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(size_t a1)
{
  if ( a1 >= 0x1000 )
    return (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
  if ( a1 )
    return operator new(a1);
  return 0LL;
}
