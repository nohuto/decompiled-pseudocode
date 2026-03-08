/*
 * XREFs of ?DdiDestroyPeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DESTROYPERIODICFRAMENOTIFICATION@@@Z @ 0x1C02C20D0
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_DESTROYPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0047A10 (-ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_DESTR.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiDestroyPeriodicFrameNotification(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  KIRQL v15; // al
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-21h]
  char v22; // [rsp+60h] [rbp-19h]
  _BYTE v23[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 5075;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5075);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 5075);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  a2->hAdapter = *(HANDLE *)(*((_QWORD *)this + 2) + 280LL);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION *))(*((_QWORD *)this + 2) + 1144LL))(a2);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v15 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v15);
  }
  if ( v7 )
  {
    v12 = *((int *)v7 + 12);
    if ( (_DWORD)v12 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v16 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  *(_QWORD *)(v16 + 24) = v10;
  *(_QWORD *)(v16 + 32) = a2->hNotification;
  if ( (_DWORD)v10 != -1073741811 && (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  return (unsigned int)v10;
}
