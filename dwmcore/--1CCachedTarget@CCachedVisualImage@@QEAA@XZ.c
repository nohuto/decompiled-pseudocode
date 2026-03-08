/*
 * XREFs of ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1800F3B7C
 * Callers:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003A7C0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x1800F3E58 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::CCachedTarget::~CCachedTarget(CCachedVisualImage::CCachedTarget *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)this + 88LL;
  v4 = (_QWORD *)(*(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL) + *((_QWORD *)this + 1) + 8LL);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*v4 + 48LL))(v4, v3 & -(__int64)(v2 != 0), *v4, -v2);
  (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 248LL))(
    *(_QWORD *)this,
    this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 8);
}
