/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x1801810FC
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801812BC (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004B24F (memcmp_0.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801811B4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@_ea_1801811B4.c)
 */

__int64 __fastcall std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
        __int64 *a1,
        __int64 a2,
        const void *a3,
        int a4)
{
  __int64 *v4; // rsi
  int v7; // r15d
  __int64 *v8; // r14
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  const void *v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = (__int64 *)*a1;
  v7 = (int)a1;
  v8 = (__int64 *)*a1;
  v9 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( memcmp_0(v9 + 4, a3, 0x10uLL) >= 0 )
    {
      v4 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( v4 == v8 || memcmp_0(a3, v4 + 4, 0x10uLL) < 0 )
  {
    v12 = a3;
    v10 = (_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
                      v7,
                      (unsigned int)&v13,
                      (_DWORD)v4,
                      a4,
                      (__int64)&v12);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v10;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
