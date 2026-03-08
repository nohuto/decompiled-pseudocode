/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C02BF910
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C03A767C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
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
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_COMMITVIDPN *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rbx
  struct DXGTHREAD *Current; // rax
  int v11; // r14d
  __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+50h] [rbp-89h] BYREF
  __int64 v25; // [rsp+58h] [rbp-81h]
  char v26; // [rsp+60h] [rbp-79h]
  _DWORD v27[2]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v28[24]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v29; // [rsp+90h] [rbp-49h]
  int v30; // [rsp+98h] [rbp-41h]
  int v31; // [rsp+9Ch] [rbp-3Dh]
  int v32; // [rsp+A0h] [rbp-39h]
  DXGKARG_COMMITVIDPN_FLAGS Flags; // [rsp+A4h] [rbp-35h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID AffectedVidPnSourceId; // [rsp+A8h] [rbp-31h]
  int v35; // [rsp+ACh] [rbp-2Dh]
  __int64 v36; // [rsp+B0h] [rbp-29h]
  _BYTE v37[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v24 = -1;
  memset(v28, 0, sizeof(v28));
  v31 = 0;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5009);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v5 = MEMORY[0xFFFFF78000000320];
  v6 = v5 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = CurrentIrql;
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v37,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 648LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v8 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v13);
  }
  if ( v9 && *((_DWORD *)v9 + 12) != v11 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v11, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v14 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v12 < 0 )
    v18 = (unsigned int)v12;
  else
    v18 = (v14 * (unsigned __int64)TimeIncrement - v6) / 0x2710;
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 404LL);
  Flags = a2->Flags;
  AffectedVidPnSourceId = a2->AffectedVidPnSourceId;
  v27[0] = 30;
  v27[1] = 72;
  v30 = 0;
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  v32 = 86;
  v35 = v18;
  v36 = v19;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(AffectedVidPnSourceId, v18, v16, v17);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27, CurrentProcessSessionId);
  WdLogSingleEntry5(
    4LL,
    v12,
    a2->hFunctionalVidPn,
    a2->AffectedVidPnSourceId,
    a2->MonitorConnectivityChecks,
    a2->hPrimaryAllocation);
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 != -1071774920 && (_DWORD)v12 )
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
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v12;
}
