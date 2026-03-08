/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C00242D0 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01C4FB0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01EA4F4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F3380 (DpiFdoInitializeGpuVirtualization.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02031F0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0205154 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C02147C4 (DpiGetMonitorColorimetryOverride.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C02192A4 (DpiQueryDisplayIDDescriptor.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C0220044 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C02B2A24 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02CC178 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0377EA0 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C039806C (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C039828C (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00099DC (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0009AA8 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0383224 (-VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2, __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // r14
  struct DXGTHREAD *v10; // rax
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  KIRQL v17; // al
  int v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+58h] [rbp-31h]
  char v20; // [rsp+60h] [rbp-29h]
  _BYTE v21[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5000);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 5000);
  if ( *((_BYTE *)this + 209) )
  {
    LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo((DXGADAPTER *)((char *)this + 4472), a2);
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v5);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v21, Current);
    if ( (a2->Flags.Value & 1) == 0 && Current )
      a2->Flags.Value ^= (a2->Flags.Value ^ (unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(Current, this)) & 1;
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 1153, 1u);
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (v10 = DXGTHREAD::GetCurrent(), (v9 = v10) != 0LL) )
      v11 = *((_DWORD *)v10 + 12);
    else
      v11 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22, this);
    v12 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 56))(*((_QWORD *)this + 35), a2);
    if ( v22[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v17 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v17);
    }
    if ( v9 )
    {
      v13 = *((int *)v9 + 12);
      if ( (_DWORD)v13 != v11 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v11, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1153);
    WdLogSingleEntry4(4LL, v12, a2->Type, a2->InputDataSize, a2->OutputDataSize);
    if ( (_DWORD)v12 != -1073741811 && (_DWORD)v12 != -1073741822 && (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
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
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  return (unsigned int)v12;
}
