/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C006D60C
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C006D2EC (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0041810 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C0045F18 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r8
  int v10; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v7 = *((_QWORD *)this + 16) + 4000LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 952), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v8 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v7 + 944),
        &EventDWMVsyncSignal,
        v9,
        *(_DWORD *)(v7 + 936),
        a4,
        *(_BYTE *)(v7 + 944),
        v8,
        4);
    }
    *(_BYTE *)(v7 + 960) = 1;
    KePulseEvent((PRKEVENT)(v7 + 904), 0, 0);
    if ( *(_QWORD *)(v7 + 928) )
    {
      *(_DWORD *)(v7 + 940) = a4;
      if ( *(_DWORD *)(v7 + 936) <= a4 )
      {
        if ( *(_BYTE *)(v7 + 944) )
        {
          *(_BYTE *)(v7 + 944) = 0;
          if ( *((_QWORD *)a2 + 366) )
            DXGADAPTER::DecrementVSyncWaiter(a2, a3, v10);
        }
        KeSetEvent(*(PRKEVENT *)(v7 + 928), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
