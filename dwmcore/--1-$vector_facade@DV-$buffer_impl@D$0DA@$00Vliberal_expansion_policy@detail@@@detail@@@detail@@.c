/*
 * XREFs of ??1?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180207A4C
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1800FE21C (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800FE4CC (-clear_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail.c)
 */

void __fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::~vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8
  void *v3; // rcx
  bool v4; // zf

  v2 = a1[1] - *a1;
  if ( v2 )
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  v3 = (void *)*a1;
  v4 = *a1 == (_QWORD)(a1 + 3);
  *a1 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
