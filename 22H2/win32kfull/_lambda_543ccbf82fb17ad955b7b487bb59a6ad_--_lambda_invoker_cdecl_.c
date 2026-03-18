/*
 * XREFs of _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E8D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFF84 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B56B0 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C021CF88 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 */

char __fastcall lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_(unsigned __int64 a1, __int64 a2)
{
  char result; // al
  const struct tagWND *v5; // rcx
  struct tagTHREADINFO **CompositeAppFrameWindowOrSelf; // rax

  result = gpqForeground;
  if ( gpqForeground )
  {
    v5 = *(const struct tagWND **)(gpqForeground + 128LL);
    if ( v5 )
    {
      CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v5);
      if ( (dword_1C030F20C[10 * (unsigned int)(a1 - 16)] & 1) != 0 )
        return PostEventMessageWindow(CompositeAppFrameWindowOrSelf, 0x11u, a1, 0LL);
      else
        return NotifyShell::ArrangementHotKey(0LL, a2);
    }
  }
  return result;
}
