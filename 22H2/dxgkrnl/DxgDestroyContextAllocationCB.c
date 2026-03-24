/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C0157920
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DxgAdapter; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v14);
  if ( KeGetCurrentIrql() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v12 + 24) = 223LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DxgAdapter = DpiGetDxgAdapter(a1, v4);
  v9 = *(_QWORD *)(DxgAdapter + 2704);
  if ( !v9 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    v13[3] = 275LL;
    v13[4] = 7LL;
    WdLogEvent5_WdCriticalError(v13);
    v9 = *(_QWORD *)(DxgAdapter + 2704);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v9 + 640) + 8LL) + 664LL))(
          *(_QWORD *)(v9 + 648),
          a2);
  if ( v14[0] )
    KeUnstackDetachProcess(&ApcState);
  return v10;
}
