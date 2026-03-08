/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005B960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005778C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ @ 0x1C005B2C0 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C005B52C (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // r8
  __int64 v9; // r13
  int v10; // ecx
  char v11; // r12
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  char *v21; // rdi
  char v22; // al
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  unsigned int v26; // ebp
  __int64 v27; // r14
  const EVENT_DESCRIPTOR *v28; // rdx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  struct DXGGLOBAL *Global; // rax
  char *v39; // rax
  char *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // edx
  const EVENT_DESCRIPTOR *v44; // rdx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+30h] [rbp-78h]
  char *v50; // [rsp+60h] [rbp-48h]
  int v52; // [rsp+C8h] [rbp+20h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = ((__int64 (*)(void))qword_1C013CE58)();
  v50 = 0LL;
  v10 = 0;
  v11 = 1;
  v52 = 1;
  if ( *(_DWORD *)(v9 + 392) < 0x28u )
    goto LABEL_11;
  if ( a4 >= 0x10 )
  {
    v10 = *(_DWORD *)a3;
    v50 = a3;
    if ( *(_DWORD *)a3 >= a4 )
    {
      WdLogSingleEntry1(2LL, 6942LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v16,
          v15,
          v17,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Invalid ext header size",
          6942LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_59;
    }
    a4 -= v10;
LABEL_11:
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry1(2LL, 6949LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v19,
          v18,
          v20,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_BASE",
          6949LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_59;
    }
    v21 = &a3[v10];
    v22 = v21[12];
    if ( v22 == 1 )
    {
      if ( a4 < 0x18 )
      {
        WdLogSingleEntry1(2LL, 6958LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v24,
            v23,
            v25,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VM_TO_HOST",
            6958LL,
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_59;
      }
      v26 = *((_DWORD *)v21 + 4);
      if ( v26 - 1000 > 0x15 )
      {
        WdLogSingleEntry2(2LL, *((int *)v21 + 4), 6965LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v30,
            v29,
            v31,
            0LL,
            0,
            -1,
            L"Invalid VM to Host command is passed: %I64n",
            *((int *)v21 + 4),
            6965LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_59;
      }
      v27 = *(_QWORD *)v21;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v28 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcBegin;
LABEL_37:
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v28, v8, a1, v27, v26);
      }
    }
    else
    {
      if ( v22 )
      {
        WdLogSingleEntry1(2LL, 7001LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v46,
            v45,
            v47,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Invalid channel type",
            7001LL,
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_59;
      }
      v52 = 0;
      if ( a4 < 0x18 )
      {
        WdLogSingleEntry1(2LL, 6982LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v33,
            v32,
            v34,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST",
            6982LL,
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_59;
      }
      v26 = *((_DWORD *)v21 + 4);
      if ( v26 >= 0x43 )
      {
        WdLogSingleEntry1(2LL, *((int *)v21 + 4));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v36,
            v35,
            v37,
            0LL,
            0,
            -1,
            L"Invalid command is passed: %I64n",
            *((int *)v21 + 4),
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_59;
      }
      v27 = *(_QWORD *)v21;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v28 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcBegin;
        goto LABEL_37;
      }
    }
    Global = DXGGLOBAL::GetGlobal();
    v39 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
    v40 = v39;
    if ( v39 )
    {
      memset(v39, 0, 0xA0uLL);
      _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
      *((_QWORD *)v40 + 16) = a2;
      *((_QWORD *)v40 + 15) = v50;
      *((_QWORD *)v40 + 9) = a1;
      *((_DWORD *)v40 + 36) = a4;
      *((_QWORD *)v40 + 17) = v21;
      *((_DWORD *)v40 + 37) = a5;
      *((_QWORD *)v40 + 12) = *(_QWORD *)(v9 + 56);
      *((_QWORD *)v40 + 6) = VmBusProcessPacket;
      *((_QWORD *)v40 + 7) = v40;
      if ( *(_BYTE *)(v9 + 339)
        && ((unsigned int)DXG_DEFERRED_WORK_QUEUE_DPC::GetNumWorkItems((KSPIN_LOCK *)(v9 + 400))
         || (*((_DWORD *)v21 + 3) & 0x100) != 0) )
      {
        DXG_DEFERRED_WORK_QUEUE_DPC::QueueWorkItem(
          (DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 400),
          (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)(v40 + 32));
      }
      else
      {
        v40[156] = 1;
        *((_QWORD *)v40 + 2) = VmBusProcessPacket;
        *((_QWORD *)v40 + 3) = v40;
        *(_QWORD *)v40 = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v40, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
      }
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(6LL, 7052LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v41,
          v43,
          v42,
          0LL,
          1,
          -1,
          L"Failed to allocated a work item",
          7052LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    if ( v52 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_54;
      v44 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_54;
      v44 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcEnd;
    }
    LODWORD(v49) = v40 != 0LL;
    LODWORD(v48) = v26;
    McTemplateK0pxqt_EtwWriteTransfer(v41, v44, v42, a1, v27, v48, v49);
LABEL_54:
    if ( !v11 )
      return;
    goto LABEL_59;
  }
  WdLogSingleEntry1(2LL, 6935LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v13,
        v12,
        v14,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Invalid buffer size for extended header",
        6935LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
LABEL_59:
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C013CE98)(a2, 0LL, 0LL);
}
