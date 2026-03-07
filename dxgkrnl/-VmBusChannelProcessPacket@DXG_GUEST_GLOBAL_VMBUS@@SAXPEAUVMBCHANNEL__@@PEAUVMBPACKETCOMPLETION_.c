void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct _LIST_ENTRY *a2,
        struct DXGKVMB_COMMAND_SETGUESTDATA *a3,
        int a4,
        unsigned int a5)
{
  int v9; // ebp
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ecx
  struct DXGGLOBAL *Global; // rax
  struct _WORK_QUEUE_ITEM *v14; // rax
  struct _WORK_QUEUE_ITEM *v15; // rdi
  __int64 v16; // r8
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // [rsp+28h] [rbp-50h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = *((_DWORD *)a3 + 4);
  v10 = *(_QWORD *)a3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketHostToVmDpcBegin,
      (__int64)a3,
      a1,
      v10,
      *((_DWORD *)a3 + 4));
  v11 = *((_DWORD *)a3 + 4);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData(a3);
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        v14 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
        v15 = v14;
        if ( v14 )
        {
          memset(v14, 0, 0xA0uLL);
          v15->List.Flink = 0LL;
          v15->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
          v15->Parameter = v15;
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          HIDWORD(v15[4].WorkerRoutine) = a5;
          v15[2].List.Blink = (struct _LIST_ENTRY *)a1;
          LODWORD(v15[4].WorkerRoutine) = a4;
          v15[4].List.Flink = a2;
          v15[4].List.Blink = (struct _LIST_ENTRY *)a3;
          v15[3].WorkerRoutine = (PWORKER_THREAD_ROUTINE)((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE58)(a1);
          LODWORD(v15[4].Parameter) = *((_DWORD *)DXGGLOBAL::GetGlobal() + 442);
          ExQueueWorkItem(v15, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
          goto LABEL_15;
        }
        WdLogSingleEntry1(6LL, 14693LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
            0LL,
            1,
            -1,
            L"Failed to allocated a work item",
            14693LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    else
    {
      DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(a3);
    }
  }
  else
  {
    DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(a3);
  }
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C013CE98)(a2, 0LL, 0LL);
LABEL_15:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    LODWORD(v20) = v9;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketHostToVmDpcEnd,
      v16,
      a1,
      v10,
      v20);
  }
}
