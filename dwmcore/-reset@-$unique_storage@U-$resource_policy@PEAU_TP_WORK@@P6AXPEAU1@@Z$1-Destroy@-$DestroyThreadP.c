/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18028B910
 * Callers:
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x180288ED0 (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAU_TP_WORK@@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZPEAU1@@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18028B8B4 (-close_reset@-$close_invoke_helper@$00P6AXPEAU_TP_WORK@@@Z$1-Destroy@-$DestroyThreadPoolWork@$0A.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
        struct _TP_WORK **a1,
        struct _TP_WORK *a2)
{
  struct _TP_WORK *v4; // rcx

  v4 = *a1;
  if ( v4 )
    wil::details::close_invoke_helper<1,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),_TP_WORK *>::close_reset(v4);
  *a1 = a2;
}
