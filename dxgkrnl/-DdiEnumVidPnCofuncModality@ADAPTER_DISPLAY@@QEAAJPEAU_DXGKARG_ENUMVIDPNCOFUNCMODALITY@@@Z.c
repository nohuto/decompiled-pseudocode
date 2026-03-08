/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A28BC
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A2430 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03B1870 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r14d
  struct DXGPROCESS *Current; // rax
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r12d
  KIRQL CurrentIrql; // al
  __int64 v13; // r13
  struct DXGTHREAD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // r9d
  KIRQL v26; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-49h] BYREF
  int v28; // [rsp+58h] [rbp-41h] BYREF
  __int64 v29; // [rsp+60h] [rbp-39h]
  char v30; // [rsp+68h] [rbp-31h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v31; // [rsp+70h] [rbp-29h]
  _BYTE v32[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v31 = a2;
  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 23, 1u);
  v28 = -1;
  v6 = 0;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 5026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5026);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 5026);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v8 = (char *)Current + 152;
    if ( Current != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)Current + 20) == KeGetCurrentThread() )
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
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *((_DWORD *)v8 + 6);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)"g", v10, v25);
      }
      ExAcquirePushLockExclusiveEx(v8, 0LL);
    }
    v11 = 2;
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
  }
  else
  {
    v8 = 0LL;
    v11 = 0;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v13 = CurrentIrql;
  v14 = 0LL;
  if ( CurrentIrql < 2u )
  {
    DxgThread = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
    {
      v14 = DxgThread;
      if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v14 = DxgThread) != 0LL) )
        v6 = *((_DWORD *)v14 + 12);
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 624LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v13 != KeGetCurrentIrql() )
  {
    v26 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v26);
  }
  if ( v14 )
  {
    v17 = *((int *)v14 + 12);
    if ( (_DWORD)v17 != v6 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v14 + 12), v6, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
  v20[3] = v15;
  v21 = v31;
  v20[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 280LL);
  v20[5] = v21->hConstrainingVidPn;
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    WdLogSingleEntry1(2LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v11 == 2 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v28);
  return (unsigned int)v15;
}
