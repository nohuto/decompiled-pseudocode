/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C01CBD10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(unsigned int *a1)
{
  __int64 DxgAdapter; // rax
  __int64 v3; // r13
  __int64 v4; // rbx
  _QWORD *v5; // r9
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+88h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 172LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(*((_QWORD *)a1 + 1));
  v3 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_19;
  if ( !*(_QWORD *)(DxgAdapter + 2928) )
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 136))
      && *(struct _KTHREAD **)(v4 + 152) != KeGetCurrentThread()
      && *(int *)(v4 + 160) <= 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v4, 0LL, 0LL);
    }
    v5 = (_QWORD *)*((_QWORD *)a1 + 3);
    if ( v5 )
    {
      if ( *(int *)(v3 + 2552) >= 9472 )
        v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = 0LL;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 2928) + 760LL) + 8LL) + 648LL))(
           *(_QWORD *)(*(_QWORD *)(v3 + 2928) + 768LL),
           a1[20],
           *a1,
           v4,
           v5,
           *((_QWORD *)a1 + 4),
           *((_QWORD *)a1 + 5),
           a1[12],
           a1[13],
           a1[14],
           a1[15],
           a1[16],
           a1[17],
           a1 + 18);
  }
  else
  {
LABEL_19:
    v6 = -1073741811;
  }
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
  return v6;
}
