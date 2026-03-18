/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0065BD4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C016FBE0 (_DrvSetDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0065CBC (--1AUTO_TGO@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  void *v3; // rcx

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C0243A80;
  if ( !v1 && (int)((__int64 (*)(void))qword_1C0296778)() < 0 )
    WdLogSingleEntry0(1LL);
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
    ObfDereferenceObject(v3);
  AUTO_TGO::~AUTO_TGO(this);
}
