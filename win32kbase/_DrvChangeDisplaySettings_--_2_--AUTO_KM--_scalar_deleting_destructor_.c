/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C018C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0027274 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_(AUTO_TGO *a1, char a2)
{
  AUTO_TGO::~AUTO_TGO(a1);
  if ( (a2 & 1) != 0 )
    WdLogSingleEntry0(1LL);
  return a1;
}
