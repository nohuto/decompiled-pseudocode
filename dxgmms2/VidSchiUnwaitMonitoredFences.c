/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C00037C0
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C0001470 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0003670 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C001344C (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0014D1C (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C346 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DBB6 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C003AC40 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0004050 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0013514 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00167E0 (VidSchiSubmitPresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pqXR1PR1q_EtwWriteTransfer @ 0x1C0038254 (McTemplateK0pqXR1PR1q_EtwWriteTransfer.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003C938 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi
  char *v8; // rsi
  _QWORD *v9; // rsi
  char *v10; // r14
  unsigned int v11; // r12d
  __int64 *v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  char v16; // al
  _BYTE *v17; // r13
  char v18; // cl
  ADAPTER_DISPLAY *v19; // rcx
  PVOID *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  char *v24; // rcx
  unsigned __int64 v25; // r9
  _QWORD *v26; // rcx
  void **v27; // rax
  char *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // r13
  unsigned __int64 v31; // r9
  unsigned __int8 v32; // cl
  unsigned __int64 *v33; // rax
  bool v34; // cf
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r14
  _QWORD *v38; // r13
  unsigned __int64 v39; // r9
  _QWORD *v40; // r12
  unsigned __int64 *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // [rsp+20h] [rbp-49h]
  char *Pool2; // [rsp+48h] [rbp-21h]
  char v46[8]; // [rsp+50h] [rbp-19h] BYREF
  int v47; // [rsp+58h] [rbp-11h]
  PVOID P; // [rsp+68h] [rbp-1h]
  char v49[8]; // [rsp+70h] [rbp+7h] BYREF
  int v50; // [rsp+78h] [rbp+Fh]

  v3 = (_QWORD *)(a2 + 824);
  v5 = *(_QWORD **)(a2 + 824);
  if ( v5 != (_QWORD *)(a2 + 824) )
  {
    do
    {
      v29 = *(v5 - 1);
      v30 = v5 - 36;
      v5 = (_QWORD *)*v5;
      v31 = v30[38];
      v32 = *(_BYTE *)(v29 + 28);
      if ( v32 )
        goto LABEL_52;
      v33 = *(unsigned __int64 **)(v29 + 64);
      if ( *(_BYTE *)(v29 + 29) )
      {
        v32 = *(_BYTE *)(v29 + 28);
        v34 = *v33 < v31;
        v31 = v30[38];
        if ( !v34 )
          goto LABEL_52;
      }
      else if ( *(_DWORD *)v33 - (int)v31 >= 0 )
      {
        v32 = 0;
LABEL_52:
        WdLogSingleEntry4(4LL, v29, **(_QWORD **)(v29 + 64), v31, v32);
        v35 = v30[11];
        if ( v35 )
          v36 = *(_QWORD *)(v35 + 104);
        else
          v36 = *(_QWORD *)(*(_QWORD *)(v30[12] + 40LL) + 8LL);
        if ( (v30[34] & 4) != 0 )
          VidSchiUnblockUnorderedWaitQueuePacket(a1, v30, 0LL);
        VidSchiUnwaitWaitQueuePacket(a1, v30, 0LL, a3);
        VidSchiCheckPendingDeviceCommand(v36);
      }
    }
    while ( v5 != v3 );
  }
  v8 = *(char **)(a2 + 840);
  while ( v8 != (char *)(a2 + 840) )
  {
    v10 = v8;
    v11 = 0;
    v8 = *(char **)v8;
    if ( !*((_DWORD *)v10 + 26) )
      continue;
    do
    {
      v12 = (__int64 *)(*((_QWORD *)v10 + 4) + 16LL * v11);
      v13 = *v12;
      if ( *v12 )
      {
        v14 = v12[1];
        if ( !*(_BYTE *)(v13 + 28) )
        {
          v15 = *(unsigned __int64 **)(v13 + 64);
          if ( *(_BYTE *)(v13 + 29) )
          {
            if ( *v15 < v14 )
              goto LABEL_12;
          }
          else if ( *(_DWORD *)v15 - (int)v14 < 0 )
          {
LABEL_12:
            v16 = v10[112];
            v17 = v10 + 112;
            v18 = 0;
            if ( (v16 & 1) == 0 )
              goto LABEL_13;
            goto LABEL_17;
          }
        }
        WdLogSingleEntry4(4LL, v13, **(_QWORD **)(v13 + 64), v12[1], *(unsigned __int8 *)(v13 + 28));
      }
      v16 = v10[112];
      v17 = v10 + 112;
      v18 = 1;
      if ( (v16 & 1) != 0 )
        goto LABEL_19;
LABEL_17:
      ++v11;
    }
    while ( v11 < *((_DWORD *)v10 + 26) );
    if ( !v18 )
      continue;
LABEL_19:
    v19 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 2);
    v20 = (PVOID *)v10;
    if ( (v16 & 4) != 0 )
      DxgCoreInterface[69](v19, 0LL);
    else
      KeSetEvent((PRKEVENT)v19, 0, 0);
    if ( bTracingEnabled )
    {
      v23 = *((unsigned int *)v10 + 26);
      v24 = 0LL;
      Pool2 = 0LL;
      v47 = 0;
      P = 0LL;
      v50 = 0;
      if ( (unsigned int)v23 <= 1 )
      {
        Pool2 = v46;
        if ( (_DWORD)v23 )
        {
          memset(v46, 0, 8 * v23);
          goto LABEL_25;
        }
        goto LABEL_26;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 8 )
        goto LABEL_37;
      Pool2 = (char *)ExAllocatePool2(64LL, 8 * v23, 1265072196LL);
LABEL_25:
      v24 = (char *)P;
LABEL_26:
      v25 = v23;
      v47 = v23;
      if ( !Pool2 )
        goto LABEL_37;
      if ( (unsigned int)v23 <= 1 )
      {
        v24 = v49;
        P = v49;
        if ( (_DWORD)v23 )
        {
          memset(v49, 0, 8 * v23);
          v24 = (char *)P;
          goto LABEL_30;
        }
        goto LABEL_31;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 8 )
        goto LABEL_37;
      v24 = (char *)ExAllocatePool2(64LL, 8 * v23, 1265072196LL);
      P = v24;
LABEL_30:
      v25 = v23;
LABEL_31:
      v50 = v23;
      if ( !v24 )
        goto LABEL_37;
      if ( (_DWORD)v23 )
      {
        v21 = 0LL;
        v22 = 0LL;
        do
        {
          v21 += 8LL;
          v22 += 16LL;
          *(_QWORD *)&Pool2[v21 - 8] = *(_QWORD *)(v22 + *((_QWORD *)v10 + 4) - 16);
          *(_QWORD *)((char *)P + v21 - 8) = *(_QWORD *)(v22 + *((_QWORD *)v10 + 4) - 8);
          --v25;
        }
        while ( v25 );
        v24 = (char *)P;
      }
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        v44 = v23;
        v20 = (PVOID *)v10;
        McTemplateK0pqXR1PR1q_EtwWriteTransfer(
          (_DWORD)v24,
          v21,
          v22,
          *((_QWORD *)v10 + 2),
          v44,
          (__int64)v24,
          (__int64)Pool2,
          *v17 & 1);
        v24 = (char *)P;
      }
      else
      {
LABEL_37:
        v20 = (PVOID *)v10;
      }
      if ( v24 != v49 && v24 )
        ExFreePoolWithTag(v24, 0);
      P = 0LL;
      v50 = 0;
      if ( Pool2 != v46 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v47 = 0;
    }
    if ( (*v17 & 2) != 0 )
      ObfDereferenceObject(v20[2]);
    v26 = *(_QWORD **)v10;
    if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || (v27 = (void **)*((_QWORD *)v10 + 1), *v27 != v10) )
LABEL_86:
      __fastfail(3u);
    *v27 = v26;
    v26[1] = v27;
    v28 = (char *)*((_QWORD *)v10 + 4);
    if ( v28 != v10 + 40 && v28 )
      ExFreePoolWithTag(v28, 0);
    *((_QWORD *)v10 + 4) = 0LL;
    *((_DWORD *)v10 + 26) = 0;
    ExFreePoolWithTag(v10, 0);
LABEL_13:
    ;
  }
  v9 = *(_QWORD **)(a2 + 856);
  while ( v9 != (_QWORD *)(a2 + 856) )
  {
    v37 = *(v9 - 2);
    v38 = v9 - 3;
    v39 = *(v9 - 1);
    v40 = v9;
    v9 = (_QWORD *)*v9;
    if ( *(_BYTE *)(v37 + 28) )
      goto LABEL_80;
    v41 = *(unsigned __int64 **)(v37 + 64);
    if ( *(_BYTE *)(v37 + 29) )
    {
      if ( *v41 < v39 )
        continue;
      v39 = v38[2];
    }
    else if ( *(_DWORD *)v41 - (int)v39 < 0 )
    {
      continue;
    }
    if ( *(_BYTE *)(v37 + 28) )
LABEL_80:
      *((_DWORD *)v38 + 11) |= 1u;
    WdLogSingleEntry4(4LL, v37, **(_QWORD **)(v37 + 64), v39, *(unsigned __int8 *)(v37 + 28));
    VidSchiSubmitPresentHistoryToken(a1, 0, (_DWORD)v38 + 40, 0, a2);
    v42 = *v40;
    if ( *(_QWORD **)(*v40 + 8LL) != v40 )
      goto LABEL_86;
    v43 = (_QWORD *)v40[1];
    if ( (_QWORD *)*v43 != v40 )
      goto LABEL_86;
    *v43 = v42;
    *(_QWORD *)(v42 + 8) = v43;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 880), v38);
    --*(_DWORD *)(v37 + 44);
    VidSchiReleaseSyncObjectReference((PVOID)v37);
  }
  if ( *(_DWORD *)(a2 + 804) )
    VidSchUnwaitFlipQueue(a1, a2);
}
