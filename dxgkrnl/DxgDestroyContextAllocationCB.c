/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C01CBC50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rbx
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 239LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      239LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !*(_QWORD *)(DxgAdapter + 2928) )
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 760LL) + 8LL)
                                                  + 656LL))(
         *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 768LL),
         a2);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
  return v5;
}
