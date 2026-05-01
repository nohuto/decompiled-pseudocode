/*
 * XREFs of ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1804D08B8
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180100DDC (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180100EB4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D4EB4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEBAX.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D4FA4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 * Callees:
 *     CoGetObjectContext_0 @ 0x1800952F1 (CoGetObjectContext_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

LPVOID *__fastcall winrt::capture<winrt::impl::IContextCallback,int (*)(winrt::guid const &,void * *),>(LPVOID *a1)
{
  HRESULT ObjectContext_0; // eax
  LPVOID ppv; // [rsp+38h] [rbp+10h] BYREF

  ppv = 0LL;
  ObjectContext_0 = CoGetObjectContext_0(&winrt::impl::guid_storage<winrt::impl::IContextCallback>::value, &ppv);
  if ( ObjectContext_0 < 0 )
    winrt::throw_hresult(ObjectContext_0);
  *a1 = ppv;
  return a1;
}
