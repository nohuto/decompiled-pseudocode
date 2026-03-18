/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C015FC44
 * Callers:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C015FD70 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0167244 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0015818 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00158A4 (--1AUTO_TGO@@MEAA@XZ.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2)
{
  struct D3DKMT_GETPATHSMODALITY *v3; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0243008;
  FreePathsModality(this[6], a2);
  v3 = this[7];
  if ( v3 )
    ObfDereferenceObject(v3);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
