/*
 * XREFs of ?DebugDump@CBackdropBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B67E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8DEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E666C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E66A8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180155510 (-DebugDump@CBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 */

void __fastcall CBackdropBrush::DebugDump(CBackdropBrush *this, void **a2)
{
  _QWORD *v3; // rdx
  _QWORD v4[4]; // [rsp+20h] [rbp-38h] BYREF

  CBrush::DebugDump(this, a2);
  std::string::string(v4, (__int64)"CBackdropBrush");
  if ( a2 != v4 )
  {
    v3 = v4;
    if ( v4[3] >= 0x10uLL )
      v3 = (_QWORD *)v4[0];
    std::string::assign(a2, v3, v4[2]);
  }
  std::string::_Tidy_deallocate((__int64)v4);
}
