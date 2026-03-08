/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002DD90
 * Callers:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18002DD30 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1800A5A10 (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180030EC8 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180129C00 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 */

__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2 + a3;
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size();
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v8 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
    v9 = v8 + 8 * v7;
    if ( v6 == v7 )
      return detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(a1, -a3, v9);
  }
  if ( a2 && (!v8 || a2 < 0 || v7 < a2) )
    _invalid_parameter_noinfo_noreturn();
  v11[0] = v8;
  v11[1] = v7;
  v11[2] = a2;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, _QWORD *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
    v12,
    v8 + 8 * v6,
    v9,
    v11);
  return detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(a1, -a3, v9);
}
