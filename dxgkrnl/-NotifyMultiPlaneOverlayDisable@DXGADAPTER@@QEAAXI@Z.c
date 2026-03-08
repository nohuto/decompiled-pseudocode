/*
 * XREFs of ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C000EAB4
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C000E4E0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01CBF30 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyMultiPlaneOverlayDisable(DXGADAPTER *this, int a2)
{
  __int64 Pool2; // rax
  void *v5; // rbx
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  struct _IO_WORKITEM *WorkItem; // rdi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  Pool2 = ExAllocatePool2(64LL, 16LL, 1265072196LL);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = this;
    *(_DWORD *)(Pool2 + 8) = a2;
    *(_DWORD *)(Pool2 + 12) = PsGetCurrentProcessSessionId();
    CurrentIrql = KeGetCurrentIrql();
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
    if ( CurrentIrql >= 2u )
    {
      WorkItem = IoAllocateWorkItem(v7);
      if ( WorkItem )
      {
        WdLogSingleEntry1(4LL, 2502LL);
        IoQueueWorkItemEx(WorkItem, HandleAdapterMultiPlaneDisableEvent, DelayedWorkQueue, v5);
      }
      else
      {
        WdLogSingleEntry1(6LL, 2498LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v13,
              v12,
              v14,
              0,
              1,
              -1,
              (__int64)L"Can't allocate memory to hold IO work item.",
              2498LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
    else
    {
      HandleAdapterMultiPlaneDisableEvent(v7, v5, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 2478LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v9,
        v8,
        v10,
        0,
        1,
        -1,
        (__int64)L"Cannot allocate memory for teardown event structure",
        2478LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
