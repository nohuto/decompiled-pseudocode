/*
 * XREFs of ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01E5EA4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0009784 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A858 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B2C0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETTIMINGSFROMVIDPN *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rbx
  struct DXGTHREAD *Current; // rax
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 TimeIncrement; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 PathCount; // rcx
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v18; // edx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  KIRQL v23; // al
  __int64 v24; // rax
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v25; // edx
  int v26; // [rsp+50h] [rbp-89h] BYREF
  __int64 v27; // [rsp+58h] [rbp-81h]
  char v28; // [rsp+60h] [rbp-79h]
  _QWORD v29[5]; // [rsp+70h] [rbp-69h] BYREF
  int v30; // [rsp+98h] [rbp-41h]
  int v31; // [rsp+9Ch] [rbp-3Dh]
  int v32; // [rsp+A0h] [rbp-39h]
  UINT v33; // [rsp+A4h] [rbp-35h]
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v34; // [rsp+A8h] [rbp-31h]
  int v35; // [rsp+ACh] [rbp-2Dh]
  __int64 v36; // [rsp+B0h] [rbp-29h]
  _BYTE v37[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v26 = -1;
  memset(&v29[1], 0, 24);
  v31 = 0;
  v27 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5076);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 5076);
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
  v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETTIMINGSFROMVIDPN *))(*((_QWORD *)this + 2) + 1152LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v8 != KeGetCurrentIrql() )
  {
    v23 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v23);
  }
  if ( v9 && *((_DWORD *)v9 + 12) != v11 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v11, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v13 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v15 = *((_QWORD *)this + 2);
  v16 = v13 * TimeIncrement;
  if ( (int)v12 < 0 )
  {
    v24 = *(_QWORD *)(v15 + 404);
    v25 = a2->pResultsFlags->0;
    v29[3] = 0LL;
    PathCount = a2->PathCount;
    v33 = a2->PathCount;
    v32 = 96;
    v34 = v25;
    v35 = v12;
    v36 = v24;
  }
  else
  {
    PathCount = *(_QWORD *)(v15 + 404);
    v18 = a2->pResultsFlags->0;
    v29[3] = 0LL;
    v33 = a2->PathCount;
    v34 = v18;
    v32 = 87;
    v35 = (v16 - v6) / 0x2710uLL;
    v36 = PathCount;
  }
  v29[0] = 0x480000001ELL;
  v30 = 0;
  v29[4] = 0LL;
  *(_OWORD *)&v29[1] = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(PathCount);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, CurrentProcessSessionId);
  WdLogSingleEntry4(4LL, v12, a2->hFunctionalVidPn, *(_DWORD *)&a2->pResultsFlags->0, a2->PathCount);
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v26);
  return (unsigned int)v12;
}
