/*
 * XREFs of DxgkMapContextAllocationCB @ 0x1C01CBEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkMapContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = DpiGetDxgAdapter(a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 760LL) + 8LL)
                                                  + 832LL))(
         *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 768LL),
         a2);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
  return v5;
}
