/*
 * XREFs of ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x1802AD220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmapRealization::SetMargins(CColorKeyBitmapRealization *this, const struct _MARGINS *a2)
{
  __int64 v3; // rbx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    &v7,
    *(_QWORD *)(*((_QWORD *)this + 3) + 32LL));
  v3 = v7;
  if ( v7 )
  {
    v6 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v6);
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v3 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL) + 8LL);
    if ( (**v4)(v4, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v6) >= 0 )
      (**(void (__fastcall ***)(__int64, const struct _MARGINS *))v6)(v6, a2);
    if ( v6 )
    {
      v5 = *(int *)(*(_QWORD *)(v6 + 8) + 4LL) + v6 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
}
