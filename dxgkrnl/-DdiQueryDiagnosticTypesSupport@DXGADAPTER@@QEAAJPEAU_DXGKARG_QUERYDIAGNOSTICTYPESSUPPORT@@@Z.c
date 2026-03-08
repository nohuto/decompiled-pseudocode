/*
 * XREFs of ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1C02C4B70
 * Callers:
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C02B5CF8 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00099DC (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryDiagnosticTypesSupport(
        DXGADAPTER *this,
        struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rsi
  struct DXGTHREAD *v10; // rax
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  KIRQL v17; // al
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+58h] [rbp-31h]
  char v24; // [rsp+60h] [rbp-29h]
  _BYTE v25[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5128);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5128);
  Current = DXGPROCESS::GetCurrent(v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v25, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1153);
  CurrentIrql = KeGetCurrentIrql();
  v8 = CurrentIrql;
  v9 = 0LL;
  if ( CurrentIrql < 2u && (v10 = DXGTHREAD::GetCurrent(), (v9 = v10) != 0LL) )
    v11 = *((_DWORD *)v10 + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26, this);
  v12 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT *))this + 165))(
          *((_QWORD *)this + 35),
          a2);
  if ( v26[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v8 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v17);
  }
  if ( v9 )
  {
    v14 = *((int *)v9 + 12);
    if ( (_DWORD)v14 != v11 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v11, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1153);
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v18[3] = v12;
  v18[4] = *((_QWORD *)this + 35);
  v18[5] = a2->DiagnosticCategory.Value;
  v18[6] = a2->NoninvasiveTypes.Notifications.Value;
  v18[7] = a2->InvasiveTypes.Notifications.Value;
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 != -1073741637 && (_DWORD)v12 )
  {
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v12;
}
