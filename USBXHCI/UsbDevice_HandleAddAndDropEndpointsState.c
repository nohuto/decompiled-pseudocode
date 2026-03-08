/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000AE18
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008824 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C000AF50 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0041B80 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 */

__int64 __fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  int TransferRingSegmentsForOffload; // esi
  unsigned int *v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // edx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 636LL) == 1 && (v6 = *(unsigned int **)(a2 + 88), v7 = 0, *(_DWORD *)(a2 + 84)) )
  {
    while ( 1 )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        while ( 1 )
        {
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v8),
                 off_1C00631A8);
          if ( *(unsigned __int8 *)(v9 + 98) == *((_WORD *)v6 + 2) )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 24) )
            goto LABEL_8;
        }
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v9 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
          break;
      }
LABEL_8:
      ++v7;
      v6 = (unsigned int *)((char *)v6 + *v6);
      if ( v7 >= *(_DWORD *)(a2 + 84) )
        goto LABEL_2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v10,
        12,
        45,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(a1 + 135),
        TransferRingSegmentsForOffload);
    }
  }
  else
  {
LABEL_2:
    TransferRingSegmentsForOffload = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0LL);
    if ( TransferRingSegmentsForOffload >= 0 )
      return UsbDevice_SendConfigureEndpointCommand(a1, 0);
  }
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = TransferRingSegmentsForOffload;
  return UsbDevice_QueueConfigureEndpointEvent(a1, 2);
}
