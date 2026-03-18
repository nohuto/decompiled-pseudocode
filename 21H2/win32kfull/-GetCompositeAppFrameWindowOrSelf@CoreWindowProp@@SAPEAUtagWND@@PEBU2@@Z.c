/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038
 * Callers:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetForegroundWindow @ 0x1C0078AF0 (NtUserGetForegroundWindow.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0085304 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A5180 (PostIAMShellHookMessageEx.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00CE218 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 *     NtUserNavigateFocus @ 0x1C01FA6F0 (NtUserNavigateFocus.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C02092F0 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077064 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1)
{
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *result; // rax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  result = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
  if ( !result )
    return a1;
  return result;
}
