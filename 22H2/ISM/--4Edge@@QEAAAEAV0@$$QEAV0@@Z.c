/*
 * XREFs of ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x180178BC8
 * Callers:
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180179EC0 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003641C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A3B0 (--4-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180178B84 (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Edge::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _OWORD *v3; // rbp

  v2 = a2 + 8;
  v3 = (_OWORD *)(a1 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( a1 + 8 != a2 + 8 )
  {
    std::wstring::_Tidy_deallocate(a1 + 8);
    *v3 = *(_OWORD *)v2;
    v3[1] = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 7LL;
    *(_WORD *)v2 = 0;
  }
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=((__int64 *)(a1 + 40), (__int64 *)(a2 + 40));
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 52) = *(_OWORD *)(a2 + 52);
  *(_OWORD *)(a1 + 68) = *(_OWORD *)(a2 + 68);
  *(_QWORD *)(a1 + 84) = *(_QWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::operator=(
    (__int64 *)(a1 + 104),
    (__int64 *)(a2 + 104));
  return a1;
}
