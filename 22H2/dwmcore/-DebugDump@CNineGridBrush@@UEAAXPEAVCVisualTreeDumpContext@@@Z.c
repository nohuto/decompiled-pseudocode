/*
 * XREFs of ?DebugDump@CNineGridBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801DA610
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8DEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E666C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E66A8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180155510 (-DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ??$AddLinkInternal@VCBrush@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCBrush@@_N@Z @ 0x1801B6F88 (--$AddLinkInternal@VCBrush@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D@s.c)
 */

void __fastcall CNineGridBrush::DebugDump(CNineGridBrush *this, void **a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  _QWORD v6[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-38h] BYREF

  CBrush::DebugDump(this, a2);
  std::string::string(v6, (__int64)"CNineGridBrush");
  if ( a2 != v6 )
  {
    v4 = v6;
    if ( v6[3] >= 0x10uLL )
      v4 = (_QWORD *)v6[0];
    std::string::assign(a2, v4, v6[2]);
  }
  std::string::_Tidy_deallocate((__int64)v6);
  v5 = *((_QWORD *)this + 10);
  std::string::string(v7, (__int64)"Source");
  CVisualTreeDumpContext::AddLinkInternal<CBrush>((__int64 *)a2, (__int64)v7, v5);
  std::string::_Tidy_deallocate((__int64)v7);
}
