/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C0065CBC
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0065BD4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C016FAB0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C016FB20 (_DrvChangeDisplaySettings_--_2_--AUTO_KM--_scalar_deleting_destructor_.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C016FB60 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((_QWORD *)this + 2);
}
