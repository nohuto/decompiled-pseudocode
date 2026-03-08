/*
 * XREFs of DxgkHardwareContentProtectionTeardownCB @ 0x1C0048260
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C003F040 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkHardwareContentProtectionTeardownCB(__int64 a1, int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::NotifyHardwareContentProtectionTeardown(DxgAdapter, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
