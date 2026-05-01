/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803DD590
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1803DD510 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x1803DD17C (--$_Insert_hint@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tree_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<HMONITOR__ * const &>,std::tuple<>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v9[4] = **a5;
  *(_OWORD *)(v9 + 5) = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
    a1,
    a2,
    a3,
    v9 + 4,
    v9);
  return a2;
}
