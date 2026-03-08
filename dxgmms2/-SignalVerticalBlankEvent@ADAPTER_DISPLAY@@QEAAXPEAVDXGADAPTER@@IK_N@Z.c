/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C0034D54
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C000EA94 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034668 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0039B2C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5)
{
  __int64 v8; // rbx
  char v9; // al
  int v10; // r8d
  __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v8 = *((_QWORD *)this + 16) + 4000LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 952), &LockHandle);
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    {
      v9 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v8 + 944),
        (unsigned int)&EventDWMVsyncSignal,
        v10,
        *(_DWORD *)(v8 + 936),
        a4,
        *(_BYTE *)(v8 + 944),
        v9,
        4);
    }
    *(_BYTE *)(v8 + 960) = a5;
    KePulseEvent((PRKEVENT)(v8 + 904), 0, 0);
    if ( *(_QWORD *)(v8 + 928) )
    {
      *(_DWORD *)(v8 + 940) = a4;
      if ( *(_DWORD *)(v8 + 936) <= a4 )
      {
        if ( *(_BYTE *)(v8 + 944) )
        {
          *(_BYTE *)(v8 + 944) = 0;
          if ( *((_QWORD *)a2 + 366) )
            DXGADAPTER::DecrementVSyncWaiter(a2, a3, v11);
        }
        KeSetEvent(*(PRKEVENT *)(v8 + 928), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
