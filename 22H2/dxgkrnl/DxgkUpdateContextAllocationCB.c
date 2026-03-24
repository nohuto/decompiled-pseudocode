/*
 * XREFs of DxgkUpdateContextAllocationCB @ 0x1C02523D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkUpdateContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 DxgAdapter; // rax
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = DpiGetDxgAdapter(a1, v4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2704) + 640LL) + 8LL)
                                                  + 848LL))(
         *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2704) + 648LL),
         a2);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
  return v6;
}
