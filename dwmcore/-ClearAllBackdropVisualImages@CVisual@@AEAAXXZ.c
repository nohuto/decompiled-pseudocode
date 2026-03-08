/*
 * XREFs of ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x1800A42DC
 * Callers:
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18004AA74 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051B00 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800A4A3C (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800ED5EC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CVisual::ClearAllBackdropVisualImages(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *i; // rbx

  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  v3 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != v3; i = i->Flink )
    {
      if ( ((char *)i[-12].Blink - (char *)i[-12].Flink) >> 3 )
        detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
          &i[-12],
          0LL);
    }
  }
  if ( (__int64)(*((_QWORD *)this + 64) - *((_QWORD *)this + 63)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 504,
      0LL);
}
