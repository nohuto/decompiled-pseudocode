/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C018C970
 * Callers:
 *     <none>
 * Callees:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0027170 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

AUTO_TGO *__fastcall DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_(AUTO_TGO *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(a1, a2);
  if ( (v2 & 1) != 0 )
    WdLogSingleEntry0(1LL);
  return a1;
}
