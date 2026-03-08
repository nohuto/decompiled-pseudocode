/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801FA470
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B750 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18007B894 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180129C00 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1801FA590 (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::size();
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
  v7 = v6 + 8 * v5;
  if ( a3 != v5 )
  {
    v9[2] = 0LL;
    v9[0] = v6;
    v9[1] = v5;
    std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>(
      (__int64)v10,
      (const void *)(v6 + 8 * a3),
      v7,
      v9);
  }
  return detail::pointer_buffer_impl<CDrawListEntry *>::consume(a1, -(__int64)a3, v7);
}
