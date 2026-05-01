/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F4580
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap_::_1_::dtor$0 @ 0x1800F590E (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromBitmap_--_1_--dtor$.c)
 * Callees:
 *     ImageList_Destroy @ 0x1801AED8C (ImageList_Destroy.c)
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>>(
        struct _IMAGELIST **a1)
{
  struct _IMAGELIST *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return ImageList_Destroy(v1);
  return result;
}
