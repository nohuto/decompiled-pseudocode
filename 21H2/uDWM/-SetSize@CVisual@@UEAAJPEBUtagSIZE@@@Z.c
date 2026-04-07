/*
 * XREFs of ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B580
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180044F00 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004520C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800482AC (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180048500 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18008B044 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18009B77C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x18009C15C (-Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18009C32C (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800A1C10 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x1800A2160 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A2620 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5C90 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A63C4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6AE8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800A6E70 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800A7040 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800A74B0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800ADAD0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetSize(CVisual *this, const struct tagSIZE *a2)
{
  bool v3; // zf

  if ( *((_DWORD *)this + 30) != a2->cx || *((_DWORD *)this + 31) != a2->cy )
  {
    v3 = (*((_BYTE *)this + 84) & 1) == 0;
    *((struct tagSIZE *)this + 15) = *a2;
    if ( !v3 )
      (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
  }
  return 0LL;
}
