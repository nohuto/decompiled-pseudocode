/*
 * XREFs of VidSchCreateSyncObject @ 0x1C0081D80
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D110 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0081A7C (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0096860 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00016E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkAcquireGuestCpuEvent @ 0x1C001794C (DxgkAcquireGuestCpuEvent.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00179F8 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C002462C (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C00246E4 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C00247BC (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C0024878 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C002EF10 (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C002EF88 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0082370 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *Object,
        _OWORD *a8)
{
  __int64 *v8; // r12
  __int64 v13; // rbp
  PVOID PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  bool v20; // bp
  bool v21; // al
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // ecx
  _OWORD *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rcx
  NTSTATUS v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // r9
  __int64 v40; // rax
  const EVENT_DESCRIPTOR *v41; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v8 = Object;
  *Object = 0LL;
  v13 = (a3[1] & 4) != 0 ? 0x50 : 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v13 + 144, 0x38616956u);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15);
    WdLogEvent5_WdWarning(v18);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v13 + 144);
  *(_DWORD *)v17 = 945908054;
  v20 = 1;
  *(_QWORD *)(v17 + 8) = a1;
  *(_QWORD *)(v17 + 16) = a2;
  *(_DWORD *)(v17 + 32) = 1;
  *(_DWORD *)(v17 + 36) = 0;
  *(_BYTE *)(v17 + 24) = a3[1] & 1;
  *(_BYTE *)(v17 + 26) = (a3[1] & 0x80000000) != 0;
  v21 = (a3[1] & 4) != 0;
  *(_DWORD *)(v17 + 48) = a4;
  *(_BYTE *)(v17 + 27) = v21;
  Current = DXGPROCESS::GetCurrent();
  if ( Current && (*((_BYTE *)Current + 347) & 0x20) != 0 )
    *(_BYTE *)(v17 + 31) = 1;
  v25 = *a3;
  switch ( (_DWORD)v25 )
  {
    case 1:
      *(_DWORD *)(v17 + 44) = 0;
      *(_BYTE *)(v17 + 25) = 0;
      if ( a3[2] )
      {
        *(_QWORD *)(v17 + 56) = 0LL;
        *(_QWORD *)(v17 + 64) = 0LL;
        goto LABEL_39;
      }
      v36 = -1LL;
      goto LABEL_38;
    case 2:
      if ( a3[3] > a3[2] )
      {
        v37 = WdLogNewEntry5_WdAssertion(v25, v23, v24);
        WdLogEvent5_WdAssertion(v37);
        ExFreePoolWithTag((PVOID)v17, 0);
        return 3221225485LL;
      }
      *(_DWORD *)(v17 + 44) = 1;
      *(_BYTE *)(v17 + 25) = 0;
      *(_DWORD *)(v17 + 56) = a3[3];
      *(_DWORD *)(v17 + 64) = a3[3];
      *(_DWORD *)(v17 + 60) = a3[2];
      goto LABEL_39;
    case 3:
      *(_DWORD *)(v17 + 44) = 2;
      *(_BYTE *)(v17 + 25) = 1;
      v36 = *((_QWORD *)a3 + 1);
      *(_QWORD *)(v17 + 72) = v36;
LABEL_38:
      *(_QWORD *)(v17 + 64) = v36;
      *(_QWORD *)(v17 + 56) = v36;
      goto LABEL_39;
    case 4:
      if ( (a3[1] & 1) == 0 )
      {
        *(_DWORD *)(v17 + 44) = 3;
        *(_BYTE *)(v17 + 25) = 0;
        if ( *(_BYTE *)(v17 + 31) )
        {
          *(_QWORD *)(v17 + 64) = *((_QWORD *)a3 + 1);
          if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage()
            && *(_BYTE *)(*((_QWORD *)a3 + 1) + 19LL) )
          {
            DxgkAcquireGuestCpuEvent();
          }
        }
        else
        {
          v32 = (void *)*((_QWORD *)a3 + 1);
          Object = 0LL;
          v33 = ObReferenceObjectByHandle(v32, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&Object, 0LL);
          v34 = Object;
          *(_QWORD *)(v17 + 56) = Object;
          v29 = v33;
          if ( v33 < 0 )
          {
            v35 = WdLogNewEntry5_WdWarning(v34, v23);
            *(_QWORD *)(v35 + 24) = v29;
            WdLogEvent5_WdWarning(v35);
            goto LABEL_30;
          }
        }
        goto LABEL_39;
      }
      v31 = WdLogNewEntry5_WdAssertion(v25, v23, v24);
      *(_QWORD *)(v31 + 24) = -1073741811LL;
      WdLogEvent5_WdAssertion(v31);
LABEL_21:
      LODWORD(v29) = -1073741811;
      goto LABEL_30;
  }
  if ( (unsigned int)(v25 - 5) > 1 )
  {
    v30 = WdLogNewEntry5_WdWarning(v25, v23);
    WdLogEvent5_WdWarning(v30);
    goto LABEL_21;
  }
  *(_BYTE *)(v17 + 25) = 1;
  *(_DWORD *)(v17 + 44) = 5 - ((_DWORD)v25 != 6);
  v26 = a3[1] & 0x80;
  *(_BYTE *)(v17 + 30) = v26 != 0;
  v27 = a8;
  if ( !a8 )
  {
    if ( !*(_BYTE *)(a1 + 48) && !v26 )
      v20 = 0;
    *(_BYTE *)(v17 + 29) = v20;
    v28 = 0LL;
    if ( *a3 != 6 )
      v28 = *((_QWORD *)a3 + 1);
    LODWORD(v29) = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                     (struct VIDMM_MONITORED_FENCE_STORAGE *)(v17 + 56),
                     *(_BYTE *)(v17 + 24) != 0,
                     0,
                     a2 == 0,
                     v28,
                     v20);
    if ( (int)v29 >= 0 )
    {
      *(_QWORD *)(v17 + 80) = a6;
      goto LABEL_39;
    }
LABEL_30:
    ExFreePoolWithTag((PVOID)v17, 0);
    return (unsigned int)v29;
  }
  *(_OWORD *)(v17 + 56) = *a8;
  *(_OWORD *)(v17 + 72) = v27[1];
  *(_QWORD *)(v17 + 88) = *((_QWORD *)v27 + 4);
  *(_BYTE *)(v17 + 29) = *(_BYTE *)(a2 + 276);
LABEL_39:
  *(_QWORD *)(v17 + 104) = v17 + 96;
  *(_QWORD *)(v17 + 96) = v17 + 96;
  *(_QWORD *)(v17 + 120) = v17 + 112;
  *(_QWORD *)(v17 + 112) = v17 + 112;
  if ( *(_BYTE *)(v17 + 27) )
  {
    *(_QWORD *)(v17 + 208) = a5;
    *(_QWORD *)(v17 + 216) = VidSchPostSignalCrossAdapter;
    VidSchiAddSyncObjectToAdapterList(a1, v17);
    VidSchiAddSyncObjectToCrossAdapterInfo(v17);
  }
  v38 = bTracingEnabled == 0;
  *v8 = v17;
  if ( v38 )
    return 0LL;
  v39 = *(_QWORD *)(a1 + 16);
  if ( *a3 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(HandleInformation) = 0;
      McTemplateK0ppqqpt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        &EventCreateSynchronizationMutex,
        0LL,
        v39,
        v17,
        HandleInformation,
        a3[1],
        a3[18],
        a3[2]);
    }
    return 0LL;
  }
  if ( *a3 == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(HandleInformation) = 0;
      McTemplateK0ppqqpqq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        &EventCreateSemaphore,
        0LL,
        v39,
        v17,
        HandleInformation,
        a3[1],
        a3[18],
        a3[2],
        a3[3]);
    }
    return 0LL;
  }
  if ( *a3 == 3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v41 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
      goto LABEL_57;
    }
  }
  else
  {
    if ( *a3 == 4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventCreateCPUNotification,
          0LL,
          v39,
          v17,
          HandleInformation,
          a3[1],
          a3[18],
          *((_QWORD *)a3 + 1));
      }
      return 0LL;
    }
    if ( *a3 != 5 )
    {
      if ( *a3 == 6 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqppqi_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreatePeriodicMonitoredFence,
            0LL,
            v39,
            v17,
            HandleInformation,
            a3[1],
            a3[18],
            a3[2],
            a3[3],
            *((_QWORD *)a3 + 2));
        }
      }
      else
      {
        v40 = WdLogNewEntry5_WdAssertion(*a3 - 5, v23, v24);
        *(_QWORD *)(v40 + 24) = 984LL;
        WdLogEvent5_WdAssertion(v40);
      }
      return 0LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v41 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
LABEL_57:
      LODWORD(HandleInformation) = 0;
      McTemplateK0ppqqpx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v41,
        0LL,
        v39,
        v17,
        HandleInformation,
        a3[1],
        a3[18],
        *((_QWORD *)a3 + 1));
    }
  }
  return 0LL;
}
