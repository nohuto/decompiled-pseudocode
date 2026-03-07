__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        __int64 Handle,
        bool a6)
{
  __int64 v6; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int SwapChainBindingStatus; // eax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  NTSTATUS v25; // ebx
  unsigned int v26; // edi
  char *v28; // rdx
  int v29; // r9d
  NTSTATUS v30; // eax
  PVOID v31; // r12
  char *v32; // rdx
  char *v33; // rdx
  char *v34; // rdx
  struct DXGPROCESS *Current; // r15
  struct DXGGLOBAL *Global; // rax
  HANDLE hSyncObject; // rcx
  struct _DXGSHAREDSYNCOBJECT *v38; // rdi
  UINT64 FenceValue; // rax
  _BYTE v40[8]; // [rsp+58h] [rbp-50h] BYREF
  char v41; // [rsp+60h] [rbp-48h]
  PVOID Object; // [rsp+B0h] [rbp+8h] BYREF
  PVOID v43; // [rsp+B8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp+18h] BYREF

  v6 = *((_QWORD *)a3 + 366);
  if ( v6 != -976 && *(struct _KTHREAD **)(v6 + 984) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 976, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v29 = *(_DWORD *)(v6 + 1000);
      if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v29);
    }
    ExAcquirePushLockSharedEx(v6 + 976, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 992));
  CurrentProcess = PsGetCurrentProcess(v11);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v15 = ProcessSessionId < *(_DWORD *)(v6 + 1008) && *(_QWORD *)(*(_QWORD *)(v6 + 1016) + 8LL * ProcessSessionId);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 992));
  ExReleasePushLockSharedEx(v6 + 976, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 16) )
  {
    v16 = *((_QWORD *)this + 1) + 136LL;
    *((_BYTE *)this + 16) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v16 + 16));
    ExReleasePushLockSharedEx(v16, 0LL);
    KeLeaveCriticalRegion();
    v17 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v17 + 16), (struct DXGADAPTER *)v17);
  }
  if ( !*((_BYTE *)a2 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
  v18 = *((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v18, *((char **)a2 + 5));
  *((_QWORD *)a2 + 5) = 0LL;
  if ( *((_BYTE *)a2 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  if ( !Handle )
  {
LABEL_18:
    SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v15, a4);
    v20 = SwapChainBindingStatus;
    if ( SwapChainBindingStatus >= 0 )
    {
      if ( !a4 )
      {
        WdLogSingleEntry1(1LL, 122LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pToken", 122LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( !*((_BYTE *)this + 16) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
        v21 = *((_QWORD *)this + 1);
        *(_QWORD *)this = -1LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v21 + 136, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 152));
        *((_BYTE *)this + 16) = 1;
      }
      if ( *((_BYTE *)a2 + 144) )
      {
        COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 72), 0LL);
        if ( *(_DWORD *)(*((_QWORD *)a2 + 11) + 200LL) != 1 )
          goto LABEL_56;
      }
      if ( *((_BYTE *)a2 + 32) )
        WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
      v22 = *((_QWORD *)a2 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v22 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, 72);
          KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), 0LL);
      }
      *((_QWORD *)a2 + 5) = 0LL;
      *((_BYTE *)a2 + 32) = 1;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 17) + 608LL) == 1 )
      {
        v25 = 0;
        if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
        {
          Current = DXGPROCESS::GetCurrent(v22);
          HandleInformation = 0LL;
          Global = DXGGLOBAL::GetGlobal();
          DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global, 0);
          DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40);
          hSyncObject = a4->Token.Flip.hSyncObject;
          v43 = 0LL;
          v25 = ObReferenceObjectByHandle(
                  hSyncObject,
                  0x20000u,
                  g_pDxgkSharedSyncObjectType,
                  1,
                  &v43,
                  &HandleInformation);
          if ( v25 < 0 )
          {
            WdLogSingleEntry1(3LL, a4->Token.Flip.hSyncObject);
          }
          else
          {
            v38 = (struct _DXGSHAREDSYNCOBJECT *)v43;
            FenceValue = *(_QWORD *)(*(_QWORD *)v43 + 120LL);
            if ( FenceValue <= a4->Token.Flip.FenceValue )
              FenceValue = a4->Token.Flip.FenceValue;
            *(_QWORD *)(*(_QWORD *)v43 + 120LL) = FenceValue;
            a4->Token.Flip.hSyncObject = 0LL;
            if ( *((_BYTE *)a3 + 209) )
            {
              v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                      (struct DXGADAPTER *)((char *)a3 + 4472),
                      Current,
                      v38,
                      a4->Token.Flip.FenceValue);
              if ( v25 < 0 )
              {
                ObfDereferenceObject(v38);
                if ( v41 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
                v26 = v25;
                goto LABEL_58;
              }
            }
            ObfDereferenceObject(v38);
          }
          if ( v41 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
        }
        v26 = v25;
        if ( v25 >= 0 )
          return v26;
LABEL_58:
        DXGADAPTERSTOPRESETLOCKSHARED::Release(this);
        COREDEVICEACCESS::Release(a2);
        DxgkCancelSwapChainBinding(a4);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v34);
        return v26;
      }
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( *((_BYTE *)a2 + 144) )
LABEL_56:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      v26 = -1073741130;
      WdLogSingleEntry1(2LL, -1073741130LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared code device acess, returning 0x%I64x",
        -1073741130LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v33);
      goto LABEL_58;
    }
    if ( SwapChainBindingStatus == -1071775730 || SwapChainBindingStatus == -1071775733 )
      goto LABEL_34;
    goto LABEL_48;
  }
  Object = 0LL;
  v30 = ObReferenceObjectByHandle((HANDLE)Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
  v31 = Object;
  v20 = v30;
  if ( v30 < 0 )
  {
LABEL_48:
    WdLogSingleEntry1(4LL, v20);
LABEL_34:
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v28);
    return (unsigned int)v20;
  }
  if ( !a6 )
  {
    Handle = -20000000LL;
    KeWaitForSingleObject(Object, Executive, 0, 1u, (PLARGE_INTEGER)&Handle);
    goto LABEL_46;
  }
  Handle = 0LL;
  if ( KeWaitForSingleObject(Object, Executive, 0, 1u, (PLARGE_INTEGER)&Handle) != 258 )
  {
LABEL_46:
    ObfDereferenceObject(v31);
    goto LABEL_18;
  }
  ObfDereferenceObject(v31);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  COREDEVICEACCESS::AcquireSharedUncheck(a2, v32);
  return 3223191810LL;
}
