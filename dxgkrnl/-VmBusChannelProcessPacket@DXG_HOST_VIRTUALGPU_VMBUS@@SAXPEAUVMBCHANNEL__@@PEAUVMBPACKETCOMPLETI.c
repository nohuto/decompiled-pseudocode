void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct _LIST_ENTRY *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // ebx
  char *v10; // r13
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  char *v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  unsigned int v32; // ebp
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // r15
  struct DXGGLOBAL *Global; // rax
  struct _WORK_QUEUE_ITEM *v38; // rax
  struct _WORK_QUEUE_ITEM *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // [rsp+28h] [rbp-60h]
  __int64 v47; // [rsp+30h] [rbp-58h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = 0;
  v10 = 0LL;
  v11 = ((__int64 (*)(void))qword_1C013CE58)();
  v12 = 0LL;
  v13 = *(_QWORD *)(v11 + 104);
  if ( *(_DWORD *)(v13 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry1(2LL, 849LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Invalid buffer size for extended header",
            849LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
LABEL_29:
      _InterlockedIncrement(&g_VgpuNumCompletedPackets);
      ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C013CE98)(a2, 0LL, 0LL);
      return;
    }
    v12 = *(unsigned int *)a3;
    v10 = a3;
    if ( (unsigned int)v12 >= a4 )
    {
      WdLogSingleEntry1(2LL, 856LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Invalid ext header size",
          856LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_29;
    }
    a4 -= v12;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry1(2LL, 863LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v21,
        v20,
        v22,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST",
        863LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_29;
  }
  v23 = &a3[(unsigned int)v12];
  if ( *(_BYTE *)(v13 + 339) )
  {
    v24 = *((int *)v23 + 4);
    if ( (unsigned int)v24 > 0x24 || (v25 = 0x1040004000LL, !_bittest64(&v25, v24)) )
    {
      WdLogSingleEntry1(2LL, 877LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v27,
          v26,
          v28,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Virtual GPU channel is disabled",
          877LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_29;
    }
  }
  if ( v23[12] )
  {
    WdLogSingleEntry1(2LL, 882LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v30,
        v29,
        v31,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Invalid channel type",
        882LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_29;
  }
  v32 = *((_DWORD *)v23 + 4);
  if ( v32 >= 0x43 )
  {
    WdLogSingleEntry1(2LL, *((int *)v23 + 4));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v34,
        v33,
        v35,
        0LL,
        0,
        -1,
        L"Invalid command is passed: %I64n",
        *((int *)v23 + 4),
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_29;
  }
  v36 = *(_QWORD *)v23;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketDpcBegin,
      v12,
      a1,
      v36,
      *((_DWORD *)v23 + 4));
  Global = DXGGLOBAL::GetGlobal();
  v38 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
  v39 = v38;
  if ( v38 )
  {
    memset(v38, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    v39[4].List.Flink = a2;
    HIDWORD(v39[4].WorkerRoutine) = a5;
    v39[2].List.Blink = (struct _LIST_ENTRY *)a1;
    LODWORD(v39[4].WorkerRoutine) = a4;
    v39[4].List.Blink = (struct _LIST_ENTRY *)v23;
    v39[3].Parameter = v10;
    v40 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE58)(a1);
    BYTE4(v39[4].Parameter) = 1;
    v39[2].WorkerRoutine = (PWORKER_THREAD_ROUTINE)v40;
    v39->Parameter = v39;
    v39->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v39->List.Flink = 0LL;
    ExQueueWorkItem(v39, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
  }
  else
  {
    WdLogSingleEntry1(6LL, 915LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v44,
        v43,
        v45,
        0LL,
        1,
        -1,
        L"Failed to allocated a work item",
        915LL,
        0LL,
        0LL,
        0LL,
        0LL);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C013CE98)(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    LOBYTE(v9) = v39 != 0LL;
    LODWORD(v47) = v9;
    LODWORD(v46) = v32;
    McTemplateK0pxqt_EtwWriteTransfer(v41, &EventVmBusProcessPacketDpcEnd, v42, a1, v36, v46, v47);
  }
}
