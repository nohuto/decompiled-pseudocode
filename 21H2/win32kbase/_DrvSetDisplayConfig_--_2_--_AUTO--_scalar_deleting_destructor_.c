/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C016FBE0
 * Callers:
 *     <none>
 * Callees:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0065BD4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

AUTO_TGO *__fastcall DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_(AUTO_TGO *a1, char a2)
{
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
    WdLogSingleEntry0(1LL);
  return a1;
}
