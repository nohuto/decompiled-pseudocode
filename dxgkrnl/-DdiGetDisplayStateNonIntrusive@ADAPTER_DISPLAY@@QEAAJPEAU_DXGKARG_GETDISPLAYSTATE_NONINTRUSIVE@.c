/*
 * XREFs of ?DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@@@Z @ 0x1C02C3724
 * Callers:
 *     ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F2CB4 (-CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiGetDisplayStateNonIntrusive(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // r14d
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE *); // rax
  int v12; // edi
  KIRQL v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+50h] [rbp-29h] BYREF
  __int64 v18; // [rsp+58h] [rbp-21h]
  char v19; // [rsp+60h] [rbp-19h]
  _BYTE v20[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5147;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5147);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 5147);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v20,
    *((struct DXGADAPTER **)this + 2));
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 1440LL);
  if ( v10
    && (v11 = *(__int64 (__fastcall **)(_QWORD, struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE *))(v10 + 32)) != 0LL )
  {
    v12 = v11(*(_QWORD *)(v10 + 8), a2);
  }
  else
  {
    v12 = -1073741637;
  }
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v13);
  }
  if ( v7 && *((_DWORD *)v7 + 12) != v9 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v9, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  if ( v12 == -1073741811
    || v12 == -1073741801
    || v12 == -1073741637
    || v12
    && (WdLogSingleEntry1(2LL, v12),
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v12,
          0LL,
          0LL,
          0LL,
          0LL),
        v12 < 0) )
  {
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The driver failed DxgkDdiGetDisplayStateNonIntrusive. Status: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  return (unsigned int)v12;
}
