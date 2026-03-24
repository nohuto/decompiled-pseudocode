/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C011B5D4
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0122BE0 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C012A4E4 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C016D5E8 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C0228AB8 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023FD80 (-VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACK.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C02482B4 (-VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PE.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        __int64 a3)
{
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  struct DXGPROCESS *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rdi
  char *v14; // rbx
  int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v21; // rdi
  struct DXGTHREAD *v22; // rax
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v35; // rax
  int v36; // r9d
  _QWORD *v37; // rax
  unsigned __int8 v38; // cl
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-60h] BYREF
  __int64 v43; // [rsp+28h] [rbp-58h]
  char v44; // [rsp+30h] [rbp-50h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v45; // [rsp+38h] [rbp-48h]
  _BYTE v46[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v42 = -1;
  v3 = a2;
  v43 = 0LL;
  v45 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 5004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5004);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 5004LL);
  v9 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v9 + 209) )
  {
    Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
    LODWORD(v3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 4240),
                    Current,
                    v3);
  }
  else
  {
    v10 = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
    v13 = v10;
    if ( v10 )
      v14 = (char *)v10 + 112;
    else
      v14 = 0LL;
    v15 = 0;
    if ( v14 && *((struct _KTHREAD **)v14 + 1) == KeGetCurrentThread() )
    {
      v35 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v35 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v13 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v36 = *((_DWORD *)v14 + 6);
          if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v36);
        }
        ExAcquirePushLockExclusiveEx(v14, 0LL);
      }
      v15 = 2;
      *((_QWORD *)v14 + 1) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v21 = 0LL;
    if ( CurrentIrql < 2u && (v22 = DXGTHREAD::GetCurrent(v19, v18), (v21 = v22) != 0LL) )
      v23 = *((_DWORD *)v22 + 8);
    else
      v23 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v46,
      *((struct DXGADAPTER **)this + 2));
    v3 = (struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *)(*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2) + 400LL))(
                                                              *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
                                                              v3);
    if ( v46[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
      v37[3] = 275LL;
      v37[4] = 16LL;
      v37[5] = this;
      v37[6] = CurrentIrql;
      v38 = KeGetCurrentIrql();
      v37[7] = v38;
      WdLogEvent5_WdCriticalError(v37);
    }
    if ( v21 && *((_DWORD *)v21 + 8) != v23 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
      v39[3] = 275LL;
      v39[4] = 38LL;
      v40 = *((int *)v21 + 8);
      v39[7] = 0LL;
      v39[5] = v40;
      v39[6] = v23;
      WdLogEvent5_WdCriticalError(v39);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
    v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24);
    v27 = v45;
    v26[3] = v3;
    v26[4] = v27->AllocationPrivateDriverDataSize;
    v26[5] = v27->ResourcePrivateDriverDataSize;
    WdLogEvent5_WdEvent(v26);
    if ( (_DWORD)v3 != -1073741801 && (_DWORD)v3 )
    {
      v41 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v41 + 24) = v3;
      WdLogEvent5_WdError(v41);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    if ( v15 == 2 )
    {
      *((_QWORD *)v14 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v30);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v42);
  return (unsigned int)v3;
}
