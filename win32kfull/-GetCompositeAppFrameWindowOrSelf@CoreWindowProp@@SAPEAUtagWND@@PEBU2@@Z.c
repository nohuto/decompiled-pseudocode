/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4
 * Callers:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000E6EC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     NtUserGetForegroundWindow @ 0x1C0035A50 (NtUserGetForegroundWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C0044C60 (PostIAMShellHookMessageEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 *     NtUserNavigateFocus @ 0x1C01D8BC0 (NtUserNavigateFocus.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E9E70 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035B2C (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1)
{
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *result; // rax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  result = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( !result )
    return a1;
  return result;
}
