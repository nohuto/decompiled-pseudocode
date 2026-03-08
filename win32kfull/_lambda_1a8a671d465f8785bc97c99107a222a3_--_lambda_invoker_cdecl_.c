/*
 * XREFs of _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00C8930
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035B2C (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     IsForegroundWindow @ 0x1C00C8988 (IsForegroundWindow.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  const struct tagWND *v3; // rcx
  struct tagWND *TopLevelHostForComponent; // rax
  const struct tagWND *TopLevelWindow; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  if ( (unsigned __int8)IsForegroundWindow() )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v3);
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
    if ( IsWindowActivateable(TopLevelWindow) )
    {
      *(_QWORD *)&v7 = TopLevelWindow;
      *((_QWORD *)&v7 + 1) = 6LL;
      *a2 = v7;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
