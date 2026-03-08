/*
 * XREFs of ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C02C8930
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::_DdiCollectDbgInfoNoLocks(
        DXGADAPTER *this,
        const struct _DXGKARG_COLLECTDBGINFO *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v7; // r12
  struct DXGTHREAD *v8; // rsi
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rdi
  KIRQL v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+50h] [rbp-29h] BYREF
  __int64 v17; // [rsp+58h] [rbp-21h]
  char v18; // [rsp+60h] [rbp-19h]
  _BYTE v19[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  if ( !*((_QWORD *)this + 74) )
    return 3221225474LL;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5023);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 5023);
  _InterlockedIncrement((volatile signed __int32 *)this + 1153);
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19, this);
  v11 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_COLLECTDBGINFO *))this + 74))(*((_QWORD *)this + 35), a2);
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v12 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v12);
  }
  if ( v8 )
  {
    v13 = *((int *)v8 + 12);
    if ( (_DWORD)v13 != v10 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v10, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1153);
  WdLogSingleEntry5(4LL, v11, *((_QWORD *)this + 35), a2->Reason, a2->pBuffer, a2->BufferSize);
  if ( (_DWORD)v11 != -1073741823 && (_DWORD)v11 != -1073741801 && (_DWORD)v11 )
  {
    WdLogSingleEntry1(2LL, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v16);
  }
  return (unsigned int)v11;
}
