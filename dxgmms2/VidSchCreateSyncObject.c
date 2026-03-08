/*
 * XREFs of VidSchCreateSyncObject @ 0x1C00AA640
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C00AA3AC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C2140 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     DxgkAcquireGuestCpuEvent @ 0x1C002CF90 (DxgkAcquireGuestCpuEvent.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C002EC20 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C002ECD8 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C002EDB0 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C002EE6C (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C003A280 (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C003A308 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C00AACC8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *Object,
        _OWORD *a8)
{
  __int64 *v8; // r15
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // ecx
  char v16; // al
  struct DXGPROCESS *Current; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // xmm0_8
  char v24; // al
  unsigned int *v25; // rbx
  bool v26; // zf
  __int64 v27; // r9
  bool v29; // al
  unsigned __int64 v30; // r8
  int FenceStorageSlot; // eax
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v34; // rcx
  void *v35; // rcx
  NTSTATUS v36; // eax
  NTSTATUS v37; // ebp
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  const EVENT_DESCRIPTOR *v42; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v8 = Object;
  *Object = 0LL;
  Pool2 = ExAllocatePool2(64LL, (a3[1] & 4) != 0 ? 224LL : 144LL, 945908054LL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  v15 = a3[1];
  *(_DWORD *)Pool2 = 945908054;
  *(_DWORD *)(Pool2 + 36) = 1;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 40) = 0;
  v16 = a3[1] & 1;
  *(_DWORD *)(v14 + 52) = a4;
  *(_BYTE *)(v14 + 24) = v16;
  *(_BYTE *)(v14 + 27) = (v15 & 4) != 0;
  *(_BYTE *)(v14 + 26) = v15 < 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 106) & 0x100) != 0 )
      *(_BYTE *)(v14 + 31) = 1;
    if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
      *(_WORD *)(v14 + 31) = 257;
  }
  v18 = *a3;
  if ( *a3 == 1 )
  {
    v25 = (unsigned int *)(a3 + 2);
    *(_DWORD *)(v14 + 48) = 0;
    *(_BYTE *)(v14 + 25) = 0;
    if ( a3[2] )
    {
      *(_QWORD *)(v14 + 56) = 0LL;
      *(_QWORD *)(v14 + 64) = 0LL;
      goto LABEL_15;
    }
    v32 = -1LL;
LABEL_34:
    *(_QWORD *)(v14 + 64) = v32;
    *(_QWORD *)(v14 + 56) = v32;
    goto LABEL_15;
  }
  if ( *a3 != 2 )
  {
    if ( *a3 != 3 )
    {
      if ( *a3 != 4 )
      {
        if ( (unsigned int)(*a3 - 5) > 1 )
        {
          WdLogSingleEntry0(3LL);
          v33 = -1073741811;
        }
        else
        {
          v19 = a3[1];
          *(_BYTE *)(v14 + 25) = 1;
          v20 = v19 & 0x80;
          *(_DWORD *)(v14 + 48) = 5 - (v18 != 6);
          *(_BYTE *)(v14 + 30) = v20 != 0;
          v21 = a8;
          if ( a8 )
          {
            v22 = a8[1];
            *(_OWORD *)(v14 + 56) = *a8;
            v23 = *((_QWORD *)v21 + 4);
            v24 = *(_BYTE *)(a2 + 284) & 1;
            *(_OWORD *)(v14 + 72) = v22;
            *(_BYTE *)(v14 + 29) = v24;
            *(_QWORD *)(v14 + 88) = v23;
LABEL_14:
            v25 = (unsigned int *)(a3 + 2);
            goto LABEL_15;
          }
          if ( *(_BYTE *)(a1 + 48) || (v29 = 0, v20) )
            v29 = 1;
          *(_BYTE *)(v14 + 29) = v29;
          v30 = 0LL;
          if ( v18 != 6 )
            v30 = *((_QWORD *)a3 + 1);
          FenceStorageSlot = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                               (struct VIDMM_MONITORED_FENCE_STORAGE *)(v14 + 56),
                               *(_BYTE *)(v14 + 24) != 0,
                               0,
                               a2 == 0,
                               v30,
                               v29);
          if ( FenceStorageSlot >= 0 )
          {
            *(_QWORD *)(v14 + 80) = a6;
            goto LABEL_14;
          }
          v33 = FenceStorageSlot;
        }
        goto LABEL_46;
      }
      if ( (a3[1] & 1) != 0 )
      {
        v33 = -1073741811;
        WdLogSingleEntry1(1LL, -1073741811LL);
        DxgkLogInternalTriageEvent(v34, 0x40000LL);
LABEL_46:
        ExFreePoolWithTag((PVOID)v14, 0);
        return v33;
      }
      v25 = (unsigned int *)(a3 + 2);
      *(_DWORD *)(v14 + 48) = 3;
      v35 = (void *)*((_QWORD *)a3 + 1);
      *(_BYTE *)(v14 + 25) = 0;
      if ( *(_BYTE *)(v14 + 31) )
      {
        *(_QWORD *)(v14 + 64) = v35;
        DxgkAcquireGuestCpuEvent();
      }
      else
      {
        Object = 0LL;
        v36 = ObReferenceObjectByHandle(v35, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&Object, 0LL);
        *(_QWORD *)(v14 + 56) = Object;
        v37 = v36;
        if ( v36 < 0 )
        {
          WdLogSingleEntry1(3LL, v36);
          v33 = v37;
          goto LABEL_46;
        }
      }
LABEL_15:
      *(_QWORD *)(v14 + 104) = v14 + 96;
      *(_QWORD *)(v14 + 96) = v14 + 96;
      *(_QWORD *)(v14 + 120) = v14 + 112;
      *(_QWORD *)(v14 + 112) = v14 + 112;
      if ( *(_BYTE *)(v14 + 27) )
      {
        *(_QWORD *)(v14 + 208) = a5;
        *(_QWORD *)(v14 + 216) = VidSchPostSignalCrossAdapter;
        VidSchiAddSyncObjectToAdapterList(a1, v14);
        VidSchiAddSyncObjectToCrossAdapterInfo(v14);
      }
      v26 = bTracingEnabled == 0;
      *v8 = v14;
      if ( v26 )
        return 0LL;
      v27 = *(_QWORD *)(a1 + 16);
      if ( *a3 == 1 )
      {
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpt_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateSynchronizationMutex,
            0LL,
            v27,
            v14,
            HandleInformation,
            a3[1],
            (unsigned int)a3[18],
            *v25);
        }
        return 0LL;
      }
      if ( *a3 == 2 )
      {
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateSemaphore,
            0LL,
            v27,
            v14,
            HandleInformation,
            a3[1],
            (unsigned int)a3[18],
            *v25,
            a3[3]);
        }
        return 0LL;
      }
      if ( *a3 == 3 )
      {
        if ( (byte_1C00769C1 & 1) == 0 )
          return 0LL;
        v42 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
      }
      else
      {
        if ( *a3 == 4 )
        {
          if ( (byte_1C00769C1 & 1) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqpx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventCreateCPUNotification,
              0LL,
              v27,
              v14,
              HandleInformation,
              a3[1],
              (unsigned int)a3[18],
              *(_QWORD *)v25);
          }
          return 0LL;
        }
        if ( *a3 != 5 )
        {
          if ( *a3 == 6 )
          {
            if ( (byte_1C00769C1 & 1) != 0 )
            {
              LODWORD(HandleInformation) = 0;
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventCreatePeriodicMonitoredFence,
                0LL,
                v27,
                v14,
                HandleInformation,
                a3[1],
                (unsigned int)a3[18],
                *v25,
                a3[3],
                *((_QWORD *)a3 + 2));
            }
          }
          else
          {
            WdLogSingleEntry1(1LL, 1053LL);
            DxgkLogInternalTriageEvent(v41, 262146LL);
          }
          return 0LL;
        }
        if ( (byte_1C00769C1 & 1) == 0 )
          return 0LL;
        v42 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
      }
      LODWORD(HandleInformation) = 0;
      McTemplateK0ppqqpx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v42,
        0LL,
        v27,
        v14,
        HandleInformation,
        a3[1],
        (unsigned int)a3[18],
        *(_QWORD *)v25);
      return 0LL;
    }
    v25 = (unsigned int *)(a3 + 2);
    *(_DWORD *)(v14 + 48) = 2;
    v32 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v14 + 72) = v32;
    *(_BYTE *)(v14 + 25) = 1;
    goto LABEL_34;
  }
  v38 = a3[3];
  v25 = (unsigned int *)(a3 + 2);
  v39 = a3[2];
  if ( v38 <= v39 )
  {
    *(_DWORD *)(v14 + 48) = 1;
    *(_BYTE *)(v14 + 25) = 0;
    *(_DWORD *)(v14 + 56) = v38;
    *(_DWORD *)(v14 + 64) = v38;
    *(_DWORD *)(v14 + 60) = v39;
    goto LABEL_15;
  }
  WdLogSingleEntry0(1LL);
  DxgkLogInternalTriageEvent(v40, 0x40000LL);
  ExFreePoolWithTag((PVOID)v14, 0);
  return -1073741811LL;
}
