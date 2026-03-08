/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801302E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsAdvancedDirectFlipCompatible(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  bool v3; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 26);
  if ( !v1 )
    return 0;
  v2 = *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
  v5 = 0LL;
  v3 = (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v1 + 8 + v2))(
         v1 + 8 + v2,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v5) >= 0;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
  return v3;
}
