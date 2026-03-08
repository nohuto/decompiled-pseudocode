/*
 * XREFs of ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x18009467C
 * Callers:
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180092BD0 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBitmapRenderStrategy::GetBitmap(const struct CSurfaceBrush *a1, struct IBitmapResource **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, struct IBitmapResource **); // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapResource **))*((_QWORD *)a1 + 13);
  v3 = 0LL;
  (**v2)(v2, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, a2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v3);
}
