/*
 * XREFs of ?_Push_back_internal@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXAEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@Z @ 0x1803D5B54
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1803CEB00 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1803CF280 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAX_K@Z @ 0x1803D59E0 (-_Growmap@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingS.c)
 */

__int64 __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Push_back_internal(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  v6 = a1[1];
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
    v6 = a1[1];
  }
  result = *(_QWORD *)(v6 + 8 * v5);
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_OWORD *)(result + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(result + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(result + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(result + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(result + 80) = *(_QWORD *)(a2 + 80);
  ++a1[4];
  return result;
}
