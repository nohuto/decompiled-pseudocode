/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A20B0
 * Callers:
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A1980 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A2430 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebp
  D3DKMDT_HVIDPN hDesiredVidPn; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rdi
  struct DXGPROCESS *v11; // rsi
  char *v12; // rbx
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGTHREAD *v16; // rsi
  int v17; // r13d
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v29; // r9d
  KIRQL v30; // al
  KIRQL CurrentIrql; // [rsp+50h] [rbp-A8h]
  struct DXGTHREAD *DxgThread; // [rsp+58h] [rbp-A0h] BYREF
  int v33; // [rsp+60h] [rbp-98h] BYREF
  __int64 v34; // [rsp+68h] [rbp-90h]
  char v35; // [rsp+70h] [rbp-88h]
  _BYTE v36[8]; // [rsp+78h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 22);
  v6 = 0;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5025);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( !a2->hDesiredVidPn || *((_DWORD *)hDesiredVidPn + 16) != 1833172997 )
  {
    WdLogSingleEntry1(2LL, a2->hDesiredVidPn);
    WdLogSingleEntry3(2LL, -1071774973LL, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), a2->hDesiredVidPn);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Call to DmmIsNullVidPn failed with status = 0x%I64x (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
      -1071774973LL,
      *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
      (__int64)a2->hDesiredVidPn,
      0LL,
      0LL);
    v6 = -1071774973;
    goto LABEL_50;
  }
  if ( *((D3DKMDT_HVIDPN *)hDesiredVidPn + 15) == hDesiredVidPn + 30 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), a2->hDesiredVidPn);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Call to DmmIsNullVidPn with Null VidPn caught (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
      *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
      (__int64)a2->hDesiredVidPn,
      0LL,
      0LL,
      0LL);
    a2->IsVidPnSupported = 1;
LABEL_50:
    LODWORD(v18) = v6;
    goto LABEL_31;
  }
  CurrentProcess = PsGetCurrentProcess(hDesiredVidPn);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v11 )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( !v11 )
      {
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_8;
      }
    }
LABEL_9:
    v12 = (char *)v11 + 152;
    v13 = 0;
    if ( v11 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v11 + 20) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1453LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v11 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 152, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v29 = *((_DWORD *)v11 + 44);
          if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, (const EVENT_DESCRIPTOR *)"g", v15, v29);
        }
        ExAcquirePushLockExclusiveEx((char *)v11 + 152, 0LL);
      }
      v13 = 2;
      *((_QWORD *)v11 + 20) = KeGetCurrentThread();
    }
    goto LABEL_15;
  }
LABEL_8:
  v11 = v10;
  if ( v10 )
    goto LABEL_9;
  v12 = 0LL;
  v13 = 0;
LABEL_15:
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v16 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v16 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v16 = DxgThread) != 0LL)) )
  {
    v17 = *((_DWORD *)v16 + 12);
  }
  else
  {
    v17 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v18 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 608LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v30 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v30);
  }
  if ( v16 )
  {
    v20 = *((int *)v16 + 12);
    if ( (_DWORD)v20 != v17 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v16 + 12), v17, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
  v23[3] = v18;
  v23[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 280LL);
  v23[5] = a2->hDesiredVidPn;
  v23[6] = a2->IsVidPnSupported;
  if ( (_DWORD)v18 != -1073741801 && (_DWORD)v18 )
  {
    WdLogSingleEntry1(2LL, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v13 == 2 )
  {
    *((_QWORD *)v12 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v24, v33);
  return (unsigned int)v18;
}
