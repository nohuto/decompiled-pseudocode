__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  UINT ObjectCount; // edx
  const void *Elements; // r12
  __int64 v8; // r15
  UINT v9; // r8d
  UINT v10; // eax
  DXGPUSHLOCK *v11; // rcx
  __int64 v12; // r14
  D3DKMT_HANDLE v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r15
  struct DXGDEVICE *v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _D3DDDICB_SIGNALFLAGS v31[2]; // [rsp+20h] [rbp-E0h]
  int v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h]
  char v34; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  char v36; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+B0h] [rbp-50h]
  PVOID v38; // [rsp+B8h] [rbp-48h] BYREF
  char v39; // [rsp+C0h] [rbp-40h] BYREF
  int v40; // [rsp+E0h] [rbp-20h]
  _QWORD v41[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v42; // [rsp+108h] [rbp+8h]
  UINT v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+160h] [rbp+60h]

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2044);
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 5263LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 5263LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a1->ObjectCount )
  {
    WdLogSingleEntry1(1LL, 5264LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSignalSyncObject->ObjectCount > 0",
      5264LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry1(1LL, 5265LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore() != NULL",
      5265LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ObjectCount = a1->ObjectCount;
  v38 = 0LL;
  v40 = 0;
  P = 0LL;
  v37 = 0;
  Elements = (const void *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&v38, ObjectCount);
  if ( !Elements
    || (v44 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&P, a1->ObjectCount),
        (v8 = v44) == 0) )
  {
    v19 = -1073741801;
    goto LABEL_52;
  }
  v9 = a1->ObjectCount;
  v10 = 0;
  v43 = 0;
  if ( !v9 )
  {
LABEL_30:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v41,
      Elements,
      v9);
    if ( v42 )
    {
      if ( v41[0] )
      {
        WdLogSingleEntry1(2LL, 5352LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The same sync object handle is passed twice",
          5352LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_47:
        v19 = -1073741811;
        goto LABEL_50;
      }
      v19 = -1073741801;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1901) & 1) == 0 )
      {
        v20 = a1->ObjectCount;
        v21 = 0;
        if ( !(_DWORD)v20 )
        {
LABEL_42:
          v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 736LL)
                                                                                                + 8LL)
                                                                                    + 656LL))(
                  v20,
                  v8,
                  a1->Flags.Value,
                  a1->FenceValueArray);
          v27 = v25;
          if ( v25 < 0 )
          {
            WdLogSingleEntry1(2LL, v25);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VidSchSignalSyncObjectsFromCpu failed with return code 0x%I64x.",
              v27,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v31[0] = (struct _D3DDDICB_SIGNALFLAGS)a1->ObjectCount;
            McTemplateK0pqPR1XR1_EtwWriteTransfer(
              v31[0].Value,
              &EventSignalSynchronizationObjectFromCpu,
              v26,
              a3,
              *(_QWORD *)&v31[0].0,
              v8,
              a1->FenceValueArray);
          }
          v19 = v27;
          goto LABEL_50;
        }
        while ( 1 )
        {
          v22 = v21;
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *((DXGSYNCOBJECT **)Elements + v21),
                               *((struct ADAPTER_RENDER **)a3 + 2));
          *(_QWORD *)(v8 + 8 * v22) = VidSchSyncObject;
          if ( !VidSchSyncObject )
            break;
          v20 = a1->ObjectCount;
          v21 = v24 + 1;
          if ( v21 >= (unsigned int)v20 )
            goto LABEL_42;
        }
        WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v22]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object adapter state has been destroyed, and it cannot be signaled.",
          a1->ObjectHandleArray[v22],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_47;
      }
      v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4472LL),
              a2,
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
LABEL_50:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v41);
    goto LABEL_52;
  }
  v11 = (struct DXGPROCESS *)((char *)a2 + 248);
  while ( 1 )
  {
    v12 = v10;
    v13 = a1->ObjectHandleArray[v10];
    DXGPUSHLOCK::AcquireShared(v11);
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)a2 + 74) )
    {
      v15 = *((_QWORD *)a2 + 35);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
        && (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) == 0 )
      {
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( v16 )
        {
          if ( v16 == 11 )
          {
            v17 = *(_QWORD *)(v15 + 16LL * v14);
            goto LABEL_23;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
LABEL_23:
    _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
    ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v17 )
      break;
    if ( (*(_DWORD *)(v17 + 72) & 0x10) != 0 )
    {
      WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v12]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x object is opened as wait only and thus cannot be signaled.",
        a1->ObjectHandleArray[v12],
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = -1073741790;
      goto LABEL_52;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry1(1LL, 5315LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetDevice()->GetRenderAdapter()->IsCoreResourceSharedOwner()",
        5315LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)Elements + v12) = *(_QWORD *)(v17 + 32);
    v18 = *(struct DXGDEVICE **)(v17 + 16);
    if ( v18 != a3 )
    {
      v19 = -1073741811;
      WdLogSingleEntry5(2LL, v18, v17, v12, a3, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGDEVICE 0x%I64x for DXGDEVICESYNCOBJECT 0x%I64x at index 0x%I64d does not match expected DXGDEVICE 0x"
                  "%I64x, returning 0x%I64x.",
        *(_QWORD *)(v17 + 16),
        v17,
        v12,
        (__int64)a3,
        -1073741811LL);
      goto LABEL_52;
    }
    v11 = (struct DXGPROCESS *)((char *)a2 + 248);
    v9 = a1->ObjectCount;
    v10 = v43 + 1;
    v43 = v10;
    if ( v10 >= v9 )
    {
      v8 = v44;
      goto LABEL_30;
    }
  }
  v19 = -1073741811;
  WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[v12], v12, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)a2,
    a1->ObjectHandleArray[v12],
    v12,
    -1073741811LL,
    0LL);
LABEL_52:
  if ( P != &v36 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v37 = 0;
  if ( v38 != &v39 && v38 )
    ExFreePoolWithTag(v38, 0);
  v38 = 0LL;
  v40 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v32);
  return v19;
}
