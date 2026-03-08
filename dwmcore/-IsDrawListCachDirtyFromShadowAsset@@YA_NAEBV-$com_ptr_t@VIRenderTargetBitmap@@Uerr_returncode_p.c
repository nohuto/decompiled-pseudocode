/*
 * XREFs of ?IsDrawListCachDirtyFromShadowAsset@@YA_NAEBV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180247A4C
 * Callers:
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180247AF0 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall IsDrawListCachDirtyFromShadowAsset(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v3; // bl
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0;
  v7 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL));
  if ( (**v5)(v5, &GUID_93cf258b_6b62_4f00_89f1_7bf8602fdadb, &v7) >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) > a2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
  return v3;
}
