/*
 * XREFs of VidSchDestroySyncObject @ 0x1C0081B70
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D110 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0069DC0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00816D4 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AD9E0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000CA08 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0016D1C (VidSchTimeoutSyncObject.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C002462C (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C00246E4 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C00247BC (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C0024878 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchDestroySyncObject(_VIDSCH_SYNC_OBJECT *P, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rcx
  int v8; // eax
  const EVENT_DESCRIPTOR *v9; // rdx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+38h] [rbp-21h]
  __int64 v26; // [rsp+38h] [rbp-21h]
  __int64 v27; // [rsp+40h] [rbp-19h]
  int v28; // [rsp+40h] [rbp-19h]
  __int64 v29; // [rsp+40h] [rbp-19h]
  int v30; // [rsp+40h] [rbp-19h]
  int v31; // [rsp+48h] [rbp-11h]
  int v32; // [rsp+48h] [rbp-11h]
  __int64 v33; // [rsp+50h] [rbp-9h]
  _QWORD v34[10]; // [rsp+60h] [rbp+7h] BYREF

  if ( P )
  {
    if ( *((int *)P + 8) > 1 )
      VidSchTimeoutSyncObject(P);
    v4 = *((_QWORD *)P + 2);
    if ( v4 )
    {
      if ( !bTracingEnabled )
      {
LABEL_10:
        VidSchiReleaseSyncObjectReference((char *)P);
        return 0LL;
      }
      v5 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v4 + 192) != 1 )
      {
        if ( *(_DWORD *)(v4 + 192) != 2 )
        {
          if ( *(_DWORD *)(v4 + 192) == 3 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_10;
            v27 = *(_QWORD *)(v4 + 200);
            v8 = *(_DWORD *)(v4 + 196);
            v25 = *(unsigned int *)(v4 + 264);
            goto LABEL_52;
          }
          if ( *(_DWORD *)(v4 + 192) != 4 )
          {
            v7 = (unsigned int)(*(_DWORD *)(v4 + 192) - 5);
            if ( *(_DWORD *)(v4 + 192) == 5 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v27 = *(_QWORD *)(v4 + 200);
              v8 = *(_DWORD *)(v4 + 196);
              v25 = *(unsigned int *)(v4 + 264);
              goto LABEL_15;
            }
            if ( *(_DWORD *)(v4 + 192) == 6 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v18 = *(unsigned int *)(v4 + 200);
              v19 = *(unsigned int *)(v4 + 264);
              v33 = *(_QWORD *)(v4 + 208);
              v31 = *(_DWORD *)(v4 + 204);
              v20 = *(_DWORD *)(v4 + 196);
              goto LABEL_39;
            }
            goto LABEL_47;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_10;
          v29 = *(_QWORD *)(v4 + 200);
          v21 = *(_DWORD *)(v4 + 196);
          v26 = *(unsigned int *)(v4 + 264);
          goto LABEL_50;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_10;
        v22 = *(unsigned int *)(v4 + 264);
        v32 = *(_DWORD *)(v4 + 204);
        v30 = *(_DWORD *)(v4 + 200);
        v23 = *(_DWORD *)(v4 + 196);
        goto LABEL_55;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_10;
      v14 = *(unsigned int *)(v4 + 264);
      v28 = *(_DWORD *)(v4 + 200);
      v15 = *(_DWORD *)(v4 + 196);
    }
    else
    {
      memset(v34, 0, sizeof(v34));
      if ( *((_DWORD *)P + 11) == 4 )
      {
        v4 = 4294962295LL;
        v10 = 5;
        v34[1] = 4294962295LL;
      }
      else
      {
        v4 = v34[1];
        v10 = 3;
      }
      if ( !bTracingEnabled )
        goto LABEL_10;
      v7 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL);
      v5 = *(_QWORD *)(v7 + 16);
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_10;
            v27 = v4;
            v25 = LODWORD(v34[9]);
            v8 = HIDWORD(v34[0]);
LABEL_52:
            v9 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
            goto LABEL_16;
          }
          v16 = v13 - 1;
          if ( v16 )
          {
            a2 = (unsigned int)(v16 - 1);
            if ( !(_DWORD)a2 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v27 = v4;
              v25 = LODWORD(v34[9]);
              v8 = HIDWORD(v34[0]);
LABEL_15:
              v9 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
LABEL_16:
              McTemplateK0ppqqpx_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, v9, 0LL, v5, P, 1, v8, v25, v27);
              goto LABEL_10;
            }
            if ( (_DWORD)a2 == 1 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v18 = LODWORD(v34[1]);
              v19 = LODWORD(v34[9]);
              v33 = v34[2];
              v31 = HIDWORD(v34[1]);
              v20 = HIDWORD(v34[0]);
LABEL_39:
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventDestroyPeriodicMonitoredFence,
                0LL,
                v5,
                P,
                1,
                v20,
                v19,
                v18,
                v31,
                v33);
              goto LABEL_10;
            }
LABEL_47:
            v24 = WdLogNewEntry5_WdAssertion(v7, a2, v4);
            *(_QWORD *)(v24 + 24) = 984LL;
            WdLogEvent5_WdAssertion(v24);
            goto LABEL_10;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_10;
          v29 = v4;
          v26 = LODWORD(v34[9]);
          v21 = HIDWORD(v34[0]);
LABEL_50:
          McTemplateK0ppqqpx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventDestroyCPUNotification,
            0LL,
            v5,
            P,
            1,
            v21,
            v26,
            v29);
          goto LABEL_10;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_10;
        v22 = LODWORD(v34[9]);
        v32 = HIDWORD(v34[1]);
        v30 = v34[1];
        v23 = HIDWORD(v34[0]);
LABEL_55:
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventDestroySemaphore,
          0LL,
          v5,
          P,
          1,
          v23,
          v22,
          v30,
          v32);
        goto LABEL_10;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_10;
      v14 = LODWORD(v34[9]);
      v28 = v34[1];
      v15 = HIDWORD(v34[0]);
    }
    McTemplateK0ppqqpt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      &EventDestroySynchronizationMutex,
      0LL,
      v5,
      P,
      1,
      v15,
      v14,
      v28);
    goto LABEL_10;
  }
  v17 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
  *(_QWORD *)(v17 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v17);
  return 3221225485LL;
}
