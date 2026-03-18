/*
 * XREFs of DxgkMultiPlaneOverlayDisabledCB @ 0x1C000B3C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000B430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000B474 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C000B9F4 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 */

void __fastcall DxgkMultiPlaneOverlayDisabledCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::NotifyMultiPlaneOverlayDisable(DxgAdapter, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
