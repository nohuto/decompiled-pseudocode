/*
 * XREFs of ?ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00A6870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0015B44 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0071C9C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008CE24 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisPowerSuspendRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rdi
  KIRQL v7; // bl
  bool v8; // zf
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  KIRQL v13; // al
  KIRQL v14; // bl
  int Status; // [rsp+30h] [rbp-28h]

  v5 = *((_QWORD *)Context + 556);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Status = IoStatus->Status;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x16u,
      (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      (char)Context,
      Status);
  }
  ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)Context, NdisMEventDx_SSComplete);
  if ( IoStatus->Status < 0 )
  {
    v12 = *((_QWORD *)Context + 556);
    NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context);
    *(_WORD *)(v12 + 626) = *(_WORD *)(v12 + 624);
    *(_WORD *)(v12 + 624) = 5;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x18u,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        IoStatus->Status,
        Context);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 504) &= ~8u;
    v14 = v13;
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v14);
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 504) = *(_DWORD *)(v5 + 504) & 0xFFFFFFE7 | 0x10;
    KeClearEvent((PRKEVENT)(v5 + 248));
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    ++*(_DWORD *)(v5 + 644);
    v8 = *(_DWORD *)(v5 + 628) == 0;
    *(_QWORD *)(v5 + 648) = MEMORY[0xFFFFF78000000014];
    if ( !v8 )
    {
      v9 = *(_DWORD *)(v5 + 628);
      if ( v9 > 0xF )
      {
        if ( v9 - 33 > 0x20 )
          v9 = -1;
        else
          v9 -= 17;
      }
      if ( v9 <= 0x30 )
        *(_QWORD *)(v5 + 16LL * (int)v9 + 744) += (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 656)) / 10000LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v7);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)Context, *(_DWORD *)(v5 + 696));
    if ( (byte_1C00E71C1 & 8) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v11,
        &DevicePowerStateChange,
        (const GUID *)(Context + 4008),
        (__int64)(Context + 4008),
        *((_DWORD *)Context + 1014),
        *((_QWORD *)Context + 503),
        1,
        *(_DWORD *)(v5 + 696));
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        9u,
        0x17u,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        (char)Context,
        *((unsigned __int16 **)Context + 482));
  }
}
