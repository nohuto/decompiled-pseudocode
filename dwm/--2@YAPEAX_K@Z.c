/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x140005FC4
 * Callers:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14000594C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000C41C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x14000C43C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x140006174 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x14000619C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x14000627C (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x140006360 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0(i) )
    {
      if ( i != -1LL )
        __scrt_throw_std_bad_alloc();
      __scrt_throw_std_bad_array_new_length();
    }
  }
  return result;
}
