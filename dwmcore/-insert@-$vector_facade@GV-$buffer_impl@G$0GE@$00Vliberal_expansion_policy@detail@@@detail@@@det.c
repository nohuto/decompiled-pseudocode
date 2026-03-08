/*
 * XREFs of ?insert@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@G@2@V?$basic_iterator@$$CBG@2@_KAEBG@Z @ 0x1800B2D3C
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x1800B2E68 (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 */

_QWORD *__fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int16 *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int16 *v11; // r8
  __int16 v12; // r11
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rdx
  __int16 *v17; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v19; // rbx

  v6 = (__int64)(*a3 - *a1) >> 1;
  v9 = detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v6,
         a4);
  v10 = 0LL;
  v11 = (__int16 *)v9;
  if ( a4 )
  {
    if ( a4 < 8 )
      goto LABEL_11;
    v13 = v9 + 2 * (a4 - 1);
    if ( v11 <= a5 && v13 >= (unsigned __int64)a5 )
      goto LABEL_11;
    v14 = a4 & 0xFFFFFFFFFFFFFFF8uLL;
    do
    {
      v10 += 8LL;
      v15 = v10;
    }
    while ( v10 < v14 );
    v16 = 2 * v14;
    v17 = v11;
    v12 = *a5;
    for ( i = v16 >> 1; i; --i )
      *v17++ = v12;
    v11 = (__int16 *)((char *)v11 + v16);
    v10 = v15;
    if ( v15 < a4 )
    {
LABEL_11:
      v19 = a4 - v10;
      do
      {
        *v11++ = *a5;
        --v19;
      }
      while ( v19 );
    }
  }
  *a2 = *a1 + 2 * v6;
  return a2;
}
