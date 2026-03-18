/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0351710
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0353A20 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0393580 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0016440 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x1C0025E64 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0025F2C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     Feature_1834517816__private_IsEnabledDeviceUsage @ 0x1C0026A04 (Feature_1834517816__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C0052B18 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5A68 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C02BAE24 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DE380 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C038E46C (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // r15
  PERESOURCE *Global; // rax
  UINT ObjectCount; // edx
  const void *Elements; // r12
  __int64 v9; // r13
  UINT v10; // r8d
  UINT v11; // eax
  DXGPUSHLOCK *v12; // rcx
  __int64 v13; // r14
  D3DKMT_HANDLE v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // r15
  int v17; // ecx
  __int64 v18; // r15
  struct DXGDEVICE *v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v25; // r9d
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _D3DDDICB_SIGNALFLAGS v32[2]; // [rsp+20h] [rbp-E0h]
  int v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  char v35; // [rsp+80h] [rbp-80h]
  _QWORD v36[4]; // [rsp+88h] [rbp-78h] BYREF
  char v37; // [rsp+A8h] [rbp-58h]
  __int64 v38[5]; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+D8h] [rbp-28h]
  __int64 v40[5]; // [rsp+E0h] [rbp-20h] BYREF
  int v41; // [rsp+108h] [rbp+8h]
  UINT v42; // [rsp+150h] [rbp+50h]
  volatile signed __int32 *v44; // [rsp+160h] [rbp+60h]

  v33 = -1;
  v4 = a2;
  v34 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2044);
  if ( (unsigned int)Feature_1834517816__private_IsEnabledDeviceUsage() )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
    {
      WdLogSingleEntry1(1LL, 5317LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
        5317LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 5323LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 5323LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a1->ObjectCount )
  {
    WdLogSingleEntry1(1LL, 5324LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSignalSyncObject->ObjectCount > 0",
      5324LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry1(1LL, 5325LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore() != NULL",
      5325LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ObjectCount = a1->ObjectCount;
  v40[0] = 0LL;
  v41 = 0;
  v38[0] = 0LL;
  v39 = 0;
  Elements = (const void *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v40, ObjectCount);
  if ( !Elements || (v9 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v38, a1->ObjectCount)) == 0 )
  {
    v20 = -1073741801;
    goto LABEL_54;
  }
  v10 = a1->ObjectCount;
  v11 = 0;
  v42 = 0;
  if ( !v10 )
  {
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v36,
      Elements,
      v10);
    if ( v37 )
    {
      if ( v36[0] )
      {
        WdLogSingleEntry1(2LL, 5412LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The same sync object handle is passed twice",
          5412LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_49:
        v20 = -1073741811;
        goto LABEL_52;
      }
      v20 = -1073741801;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1901) & 1) == 0 )
      {
        v21 = a1->ObjectCount;
        v22 = 0;
        if ( !(_DWORD)v21 )
        {
LABEL_44:
          v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 736LL)
                                                                                                + 8LL)
                                                                                    + 656LL))(
                  v21,
                  v9,
                  a1->Flags.Value,
                  a1->FenceValueArray);
          v28 = v26;
          if ( v26 < 0 )
          {
            WdLogSingleEntry1(2LL, v26);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VidSchSignalSyncObjectsFromCpu failed with return code 0x%I64x.",
              v28,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v32[0] = (struct _D3DDDICB_SIGNALFLAGS)a1->ObjectCount;
            McTemplateK0pqPR1XR1_EtwWriteTransfer(
              v32[0].Value,
              &EventSignalSynchronizationObjectFromCpu,
              v27,
              a3,
              *(_QWORD *)&v32[0].0,
              v9,
              a1->FenceValueArray);
          }
          v20 = v28;
          goto LABEL_52;
        }
        while ( 1 )
        {
          v23 = v22;
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *((DXGSYNCOBJECT **)Elements + v22),
                               *((struct ADAPTER_RENDER **)a3 + 2));
          *(_QWORD *)(v9 + 8 * v23) = VidSchSyncObject;
          if ( !VidSchSyncObject )
            break;
          v21 = a1->ObjectCount;
          v22 = v25 + 1;
          if ( v22 >= (unsigned int)v21 )
            goto LABEL_44;
        }
        WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v23]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object adapter state has been destroyed, and it cannot be signaled.",
          a1->ObjectHandleArray[v23],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_49;
      }
      v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4472LL),
              v4,
              a1->ObjectCount,
              a1->ObjectHandleArray,
              a1->Flags,
              0,
              0LL,
              a1->FenceValueArray,
              0LL,
              0LL,
              0,
              1,
              a3);
    }
LABEL_52:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v36);
    goto LABEL_54;
  }
  v12 = (struct DXGPROCESS *)((char *)v4 + 248);
  v44 = (volatile signed __int32 *)((char *)v4 + 248);
  while ( 1 )
  {
    v13 = v11;
    v14 = a1->ObjectHandleArray[v11];
    DXGPUSHLOCK::AcquireShared(v12);
    v15 = (v14 >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)v4 + 74) )
    {
      v16 = *((_QWORD *)v4 + 35);
      if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
        && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
      {
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
        if ( v17 )
        {
          if ( v17 == 11 )
          {
            v18 = *(_QWORD *)(v16 + 16LL * v15);
            goto LABEL_26;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
LABEL_26:
    _InterlockedDecrement(v44 + 4);
    ExReleasePushLockSharedEx(v44, 0LL);
    KeLeaveCriticalRegion();
    if ( !v18 )
      break;
    if ( (*(_DWORD *)(v18 + 72) & 0x10) != 0 )
    {
      WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v13]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x object is opened as wait only and thus cannot be signaled.",
        a1->ObjectHandleArray[v13],
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = -1073741790;
      goto LABEL_54;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry1(1LL, 5375LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetDevice()->GetRenderAdapter()->IsCoreResourceSharedOwner()",
        5375LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)Elements + v13) = *(_QWORD *)(v18 + 32);
    v19 = *(struct DXGDEVICE **)(v18 + 16);
    if ( v19 != a3 )
    {
      v20 = -1073741811;
      WdLogSingleEntry5(2LL, v19, v18, v13, a3, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGDEVICE 0x%I64x for DXGDEVICESYNCOBJECT 0x%I64x at index 0x%I64d does not match expected DXGDEVICE 0x"
                  "%I64x, returning 0x%I64x.",
        *(_QWORD *)(v18 + 16),
        v18,
        v13,
        (__int64)a3,
        -1073741811LL);
      goto LABEL_54;
    }
    v4 = a2;
    v11 = v42 + 1;
    v10 = a1->ObjectCount;
    v42 = v11;
    v12 = (struct DXGPROCESS *)((char *)a2 + 248);
    if ( v11 >= v10 )
      goto LABEL_32;
  }
  v20 = -1073741811;
  WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[v13], v13, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)a2,
    a1->ObjectHandleArray[v13],
    v13,
    -1073741811LL,
    0LL);
LABEL_54:
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v38);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v33);
  return v20;
}
