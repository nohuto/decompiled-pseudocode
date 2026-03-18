/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00CE218
 * Callers:
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00CD884 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_ @ 0x1C00CD9C0 (_lambda_18e42bef8aab6193ee3628fe412f6142_--_lambda_invoker_cdecl_.c)
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C00CDCFC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00CE070 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     _lambda_b12a9ee524689ad3f22c234f981ca7cb_::_lambda_invoker_cdecl_ @ 0x1C00CE100 (_lambda_b12a9ee524689ad3f22c234f981ca7cb_--_lambda_invoker_cdecl_.c)
 *     _lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_ @ 0x1C00CE180 (_lambda_dc07bf9eeab06415d9a9c521953e95b1_--_lambda_invoker_cdecl_.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C006D450 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  bool result; // al
  char v2; // dl
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx

  result = 0;
  if ( a1 )
  {
    v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v2 & 0x10) != 0 && (v2 & 8) == 0 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
      if ( (unsigned int)IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf)
        || !(unsigned int)GetWindowCloakState(CompositeAppFrameWindowOrSelf) )
      {
        return 1;
      }
    }
  }
  return result;
}
