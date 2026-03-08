/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x1C001CB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001CBA8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentIdleCB(DxgAdapter, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
