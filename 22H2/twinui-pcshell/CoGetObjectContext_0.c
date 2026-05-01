/*
 * XREFs of CoGetObjectContext_0 @ 0x1800952F1
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180145008 (-await_suspend@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fo.c)
 *     ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1804D08B8 (--$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA-AU-$com_ptr@UICon.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoGetObjectContext_0(const IID *const riid, LPVOID *ppv)
{
  return CoGetObjectContext(riid, ppv);
}
