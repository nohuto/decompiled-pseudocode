__int64 __fastcall FxVerifierCheckIrqlLevel(_FX_DRIVER_GLOBALS *FxDriverGlobals, unsigned __int8 Irql)
{
  int _a2; // edi
  KIRQL CurrentIrql; // al

  _a2 = Irql;
  if ( !FxDriverGlobals->FxVerifierOn )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= (unsigned __int8)_a2 )
    return 0LL;
  WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, _a2);
  FxVerifierDbgBreakPoint(FxDriverGlobals);
  return 3221225488LL;
}
