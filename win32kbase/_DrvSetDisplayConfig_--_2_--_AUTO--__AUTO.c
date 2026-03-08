/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0027170
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C018C970 (_DrvSetDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00271E8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0027274 (--1AUTO_TGO@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this, __int64 a2)
{
  bool v2; // zf
  void *v4; // rcx
  __int64 DxgkWin32kInterface; // rax

  v2 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C0277EC8;
  if ( !v2 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(this, a2);
    if ( (*(int (**)(void))(DxgkWin32kInterface + 280))() < 0 )
      WdLogSingleEntry0(1LL);
  }
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    ObfDereferenceObject(v4);
  AUTO_TGO::~AUTO_TGO(this);
}
