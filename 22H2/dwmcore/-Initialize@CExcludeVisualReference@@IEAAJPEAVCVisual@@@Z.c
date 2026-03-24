/*
 * XREFs of ?Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z @ 0x1800E07D8
 * Callers:
 *     ?Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E0744 (-Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E4D4C (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DAE8C (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Initialize(CExcludeVisualReference *this, struct CVisual *a2)
{
  struct CWeakResourceReference **v2; // rbx

  v2 = (struct CWeakResourceReference **)((char *)this + 8);
  wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  return CWeakReference<CVisual>::Create(a2, v2);
}
