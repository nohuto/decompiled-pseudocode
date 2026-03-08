/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C0027274
 * Callers:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0027170 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C018C804 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C018C8B0 (_DrvChangeDisplaySettings_--_2_--AUTO_KM--_scalar_deleting_destructor_.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C018C8F0 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((char *)this + 16);
}
