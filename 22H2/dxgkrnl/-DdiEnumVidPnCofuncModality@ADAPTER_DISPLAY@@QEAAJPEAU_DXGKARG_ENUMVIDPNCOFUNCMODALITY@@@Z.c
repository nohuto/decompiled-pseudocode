/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01B4198
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03B6130 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0009784 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A858 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B2C0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C03440A8 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r14d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r12d
  KIRQL CurrentIrql; // al
  __int64 v14; // r13
  struct DXGTHREAD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // r9d
  KIRQL v27; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-49h] BYREF
  int v29; // [rsp+58h] [rbp-41h] BYREF
  __int64 v30; // [rsp+60h] [rbp-39h]
  char v31; // [rsp+68h] [rbp-31h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v32; // [rsp+70h] [rbp-29h]
  _BYTE v33[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v32 = a2;
  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 23, 1u);
  v29 = -1;
  v6 = 0;
  v30 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5026);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5026);
  Current = DXGPROCESS::GetCurrent(v7);
  if ( Current )
  {
    v9 = (char *)Current + 152;
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
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *((_DWORD *)v9 + 6);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventBlockThread, v11, v26);
      }
      ExAcquirePushLockExclusiveEx(v9, 0LL);
    }
    v12 = 2;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
  }
  else
  {
    v9 = 0LL;
    v12 = 0;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  v15 = 0LL;
  if ( CurrentIrql < 2u )
  {
    DxgThread = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
    {
      v15 = DxgThread;
      if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v15 = DxgThread) != 0LL) )
        v6 = *((_DWORD *)v15 + 12);
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 624LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v14 != KeGetCurrentIrql() )
  {
    v27 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v14, v27);
  }
  if ( v15 )
  {
    v18 = *((int *)v15 + 12);
    if ( (_DWORD)v18 != v6 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v15 + 12), v6, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
  v21[3] = v16;
  v22 = v32;
  v21[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 280LL);
  v21[5] = v22->hConstrainingVidPn;
  if ( (_DWORD)v16 != -1073741801 && (_DWORD)v16 )
  {
    WdLogSingleEntry1(2LL, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v12 == 2 )
  {
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v29);
  return (unsigned int)v16;
}
