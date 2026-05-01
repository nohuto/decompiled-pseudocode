/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180132FC8
 * Callers:
 *     ?resize@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180146060 (-resize@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800EE4B8 (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIU.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  size_t v7; // rdi
  _QWORD *v8; // rsi
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>>>::_Xlength();
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v6 = v5 >> 1;
  if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  memset_0((char *)v8 + v4, 0, a2 - v4);
  memmove(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1));
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = (char *)v8 + a2;
  result = (char *)v8 + v7;
  *(_QWORD *)(a1 + 16) = (char *)v8 + v7;
  return result;
}
