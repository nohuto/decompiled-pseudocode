/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C011CB0C
 * Callers:
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C011C450 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011C7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01432D0 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02DFB24 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02E00A8 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  D3DKMDT_HVIDPN hDesiredVidPn; // rbx
  D3DKMDT_HVIDPN v10; // rcx
  _QWORD *v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *v24; // rdi
  struct DXGTHREAD *v25; // rax
  int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 IsVidPnSupported; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v44; // rax
  int v45; // r9d
  _QWORD *v46; // rax
  unsigned __int8 v47; // cl
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // [rsp+24h] [rbp-5Ch]
  int v52; // [rsp+28h] [rbp-58h] BYREF
  __int64 v53; // [rsp+30h] [rbp-50h]
  char v54; // [rsp+38h] [rbp-48h]
  char v55[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 8);
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5025);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 5025LL);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( a2->hDesiredVidPn && *((_DWORD *)hDesiredVidPn + 16) == 1833172997 )
    v10 = a2->hDesiredVidPn;
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = v10 + 30;
    if ( (_QWORD *)*v11 == v11 )
    {
      v42 = WdLogNewEntry5_WdError(v11, v6);
      *(_QWORD *)(v42 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
      *(_QWORD *)(v42 + 32) = a2->hDesiredVidPn;
      WdLogEvent5_WdError(v42);
      v34 = 0;
      a2->IsVidPnSupported = 1;
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v11, v6, v7, v8);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v16 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
        || (Current = DXGTHREAD::GetCurrent(v15, v14)) == 0LL
        || (v17 = *((_QWORD *)Current + 1)) == 0 )
      {
        v17 = v16;
      }
      v51 = 0;
      v18 = (v17 + 112) & -(__int64)(v17 != 0);
      if ( v18 && *(struct _KTHREAD **)(((v17 + 112) & -(__int64)(v17 != 0)) + 8) == KeGetCurrentThread() )
      {
        v44 = WdLogNewEntry5_WdAssertion(v17 + 112, v14);
        *(_QWORD *)(v44 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( v17 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v17 + 112) & -(__int64)(v17 != 0), 0LL) )
        {
          if ( bTracingEnabled )
          {
            v45 = *(_DWORD *)(((v17 + 112) & -(__int64)(v17 != 0)) + 0x18);
            if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, &EventBlockThread, v20, v45);
          }
          ExAcquirePushLockExclusiveEx((v17 + 112) & -(__int64)(v17 != 0), 0LL);
        }
        *(_QWORD *)(((v17 + 112) & -(__int64)(v17 != 0)) + 8) = KeGetCurrentThread();
        v51 = 2;
      }
      DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
      CurrentIrql = KeGetCurrentIrql();
      v24 = 0LL;
      if ( CurrentIrql < 2u && (v25 = DXGTHREAD::GetCurrent(v22, v21), (v24 = v25) != 0LL) )
        v26 = *((_DWORD *)v25 + 8);
      else
        v26 = 0;
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v55,
        *((struct DXGADAPTER **)this + 2));
      v28 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 520LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
              a2);
      if ( v55[0] )
        KeUnstackDetachProcess(&ApcState);
      v29 = KeGetCurrentIrql();
      if ( CurrentIrql != (_BYTE)v29 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v27);
        v46[3] = 275LL;
        v46[4] = 16LL;
        v46[5] = this;
        v46[6] = CurrentIrql;
        v47 = KeGetCurrentIrql();
        v46[7] = v47;
        WdLogEvent5_WdCriticalError(v46);
      }
      if ( v24 && *((_DWORD *)v24 + 8) != v26 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v27);
        v48[3] = 275LL;
        v48[4] = 38LL;
        v49 = *((int *)v24 + 8);
        v48[7] = 0LL;
        v48[5] = v49;
        v48[6] = v26;
        WdLogEvent5_WdCriticalError(v48);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v27);
      v30[3] = v28;
      v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
      v30[4] = v31;
      v30[5] = a2->hDesiredVidPn;
      IsVidPnSupported = a2->IsVidPnSupported;
      v30[6] = IsVidPnSupported;
      if ( (_DWORD)v28 != -1073741801 && (_DWORD)v28 )
      {
        v50 = WdLogNewEntry5_WdError(IsVidPnSupported, v31);
        *(_QWORD *)(v50 + 24) = v28;
        WdLogEvent5_WdError(v50);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      v34 = v28;
      if ( v51 == 2 )
      {
        *(_QWORD *)(v18 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v18, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v38 + 24) = hDesiredVidPn;
    WdLogEvent5_WdError(v38);
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
    v34 = -1071774973;
    v41[3] = -1071774973LL;
    v41[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
    v41[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v41);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v33);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v52);
  return v34;
}
