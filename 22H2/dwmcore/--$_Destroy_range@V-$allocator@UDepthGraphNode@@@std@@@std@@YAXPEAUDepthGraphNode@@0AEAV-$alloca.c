/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@0AEAV?$allocator@UDepthGraphNode@@@0@@Z @ 0x18020D4A0
 * Callers:
 *     ??$_Construct_n_copies_of_ty@U_Value_init_tag@std@@@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18020D3E4 (--$_Construct_n_copies_of_ty@U_Value_init_tag@std@@@-$vector@UDepthGraphNode@@V-$allocator@UDept.c)
 *     ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x18020D988 (-_Tidy@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<DepthGraphNode>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16,0>(v4, (*v3 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 7;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
