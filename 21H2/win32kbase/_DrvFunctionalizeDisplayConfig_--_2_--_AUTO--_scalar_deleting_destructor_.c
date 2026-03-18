/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C016FBA0
 * Callers:
 *     <none>
 * Callees:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C016FAB0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

struct D3DKMT_GETPATHSMODALITY **__fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_(
        struct D3DKMT_GETPATHSMODALITY **a1,
        char a2)
{
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
    WdLogSingleEntry0(1LL);
  return a1;
}
