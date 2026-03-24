/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C0042750
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C00380C4 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  KSPIN_LOCK *DxgAdapter; // rax
  __int64 v6; // r8
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (KSPIN_LOCK *)DpiGetDxgAdapter(a1, v4);
  DXGADAPTER::NotifyVSync(DxgAdapter, a2, v6);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
}
