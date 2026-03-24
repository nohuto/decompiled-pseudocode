/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C02927EC
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAF90 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FDF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0294620 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0008B34 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C001C588 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_2505606457__private_IsEnabledDeviceUsage @ 0x1C0026740 (Feature_2505606457__private_IsEnabledDeviceUsage.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C00279E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C00471AC (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0127938 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0210D78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022CDB8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024C724 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE *Global; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  UINT ObjectCount; // edx
  PVOID Elements; // r12
  _QWORD *v15; // r13
  UINT v16; // r8d
  UINT v17; // r14d
  DXGPUSHLOCK *v18; // rcx
  D3DKMT_HANDLE v19; // esi
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  _QWORD *v34; // rax
  __int64 v35; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r9d
  __int64 v40; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r9d
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  char v56; // [rsp+80h] [rbp-80h]
  _QWORD v57[4]; // [rsp+88h] [rbp-78h] BYREF
  char v58; // [rsp+A8h] [rbp-58h]
  _QWORD v59[5]; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+D8h] [rbp-28h]
  _QWORD v61[5]; // [rsp+E0h] [rbp-20h] BYREF
  int v62; // [rsp+108h] [rbp+8h]
  DXGPUSHLOCK *v63; // [rsp+150h] [rbp+50h]

  v54 = -1;
  v4 = a2;
  v55 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 2044LL);
  if ( (unsigned int)Feature_2505606457__private_IsEnabledDeviceUsage() )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v7, v6);
    if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v9 + 24) = 5203LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 5209LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a1->ObjectCount )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 5210LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v12 + 24) = 5211LL;
    WdLogEvent5_WdAssertion(v12);
  }
  ObjectCount = a1->ObjectCount;
  v61[0] = 0LL;
  v62 = 0;
  v59[0] = 0LL;
  v60 = 0;
  Elements = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(v61, ObjectCount);
  if ( !Elements || (v15 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v59, a1->ObjectCount)) == 0LL )
  {
    v33 = -1073741801;
    goto LABEL_56;
  }
  v16 = a1->ObjectCount;
  v17 = 0;
  if ( !v16 )
  {
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v57,
      Elements,
      v16);
    if ( v58 )
    {
      if ( !v57[0] )
      {
        v33 = -1073741801;
LABEL_54:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v57,
          v31);
        goto LABEL_56;
      }
      v37 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v37 + 24) = 5298LL;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1869) & 1) != 0 )
      {
        v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4240LL),
                v4,
                a1->ObjectCount,
                a1->ObjectHandleArray,
                a1->Flags,
                0,
                0LL,
                (unsigned __int64 *)a1->FenceValueArray,
                0LL,
                0LL,
                0,
                1,
                a3);
        goto LABEL_54;
      }
      v38 = a1->ObjectCount;
      v39 = 0;
      if ( !(_DWORD)v38 )
      {
LABEL_46:
        v45 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 616LL)
                                                                                               + 8LL)
                                                                                   + 656LL))(
                v38,
                v15,
                a1->Flags.Value,
                a1->FenceValueArray);
        v48 = v45;
        if ( v45 < 0 )
        {
          v49 = WdLogNewEntry5_WdError(v46, v31);
          *(_QWORD *)(v49 + 24) = v48;
          WdLogEvent5_WdError(v49);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            a1->ObjectCount,
            &EventSignalSynchronizationObjectFromCpu,
            v47,
            a3,
            a1->ObjectCount,
            v15,
            a1->FenceValueArray);
        }
        v33 = v48;
        goto LABEL_54;
      }
      while ( 1 )
      {
        v40 = v39;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)Elements + v39),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v15[v40] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v38 = a1->ObjectCount;
        v39 = v44 + 1;
        if ( v39 >= (unsigned int)v38 )
          goto LABEL_46;
      }
      v37 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v37 + 24) = a1->ObjectHandleArray[v40];
    }
    WdLogEvent5_WdError(v37);
    v33 = -1073741811;
    goto LABEL_54;
  }
  v18 = (struct DXGPROCESS *)((char *)v4 + 208);
  v63 = (struct DXGPROCESS *)((char *)v4 + 208);
  while ( 1 )
  {
    v19 = a1->ObjectHandleArray[v17];
    DXGPUSHLOCK::AcquireShared(v18);
    v20 = (v19 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 >= *((_DWORD *)a2 + 64) )
      goto LABEL_24;
    v21 = *((_QWORD *)a2 + 30);
    v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
    if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
      goto LABEL_24;
    v23 = v22 & 0x1F;
    if ( (_BYTE)v23 != 11 )
    {
      v24 = WdLogNewEntry5_WdError(v23, 2LL * (unsigned int)v20);
      *(_QWORD *)(v24 + 24) = 316LL;
      WdLogEvent5_WdError(v24);
LABEL_24:
      v25 = 0LL;
      goto LABEL_25;
    }
    v25 = *(_QWORD *)(v21 + 16LL * (unsigned int)v20);
LABEL_25:
    ExReleasePushLockSharedEx(v63, 0LL);
    KeLeaveCriticalRegion();
    if ( !v25 )
      break;
    if ( (*(_DWORD *)(v25 + 72) & 0x10) != 0 )
    {
      v35 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v35 + 24) = a1->ObjectHandleArray[v17];
      WdLogEvent5_WdError(v35);
      v33 = -1073741790;
      goto LABEL_56;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 16LL)) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v30 + 24) = 5261LL;
      WdLogEvent5_WdAssertion(v30);
    }
    *((_QWORD *)Elements + v17) = *(_QWORD *)(v25 + 32);
    if ( *(struct DXGDEVICE **)(v25 + 16) != a3 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v33 = -1073741811;
      v34[3] = *(_QWORD *)(v25 + 16);
      v34[4] = v25;
      v34[6] = a3;
      v34[7] = -1073741811LL;
      goto LABEL_39;
    }
    v16 = a1->ObjectCount;
    ++v17;
    v18 = v63;
    if ( v17 >= v16 )
    {
      v4 = a2;
      goto LABEL_32;
    }
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
  v34[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v33 = -1073741811;
  v34[4] = ObjectHandleArray[v17];
  v34[6] = -1073741811LL;
LABEL_39:
  v34[5] = v17;
  WdLogEvent5_WdError(v34);
LABEL_56:
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v59);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v61);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v50);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v54);
  return v33;
}
