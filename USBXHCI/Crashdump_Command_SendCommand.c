/*
 * XREFs of Crashdump_Command_SendCommand @ 0x1C004EB8C
 * Callers:
 *     Crashdump_Command_TestCommandRingOperation @ 0x1C004EEF4 (Crashdump_Command_TestCommandRingOperation.c)
 *     Crashdump_Endpoint_SetDequeuePointer @ 0x1C004F848 (Crashdump_Endpoint_SetDequeuePointer.c)
 *     Crashdump_Endpoint_StopEndpoint @ 0x1C004F914 (Crashdump_Endpoint_StopEndpoint.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004FEF4 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C0050160 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0050C40 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     Crashdump_UsbDevice_SendEnableSlotCommand @ 0x1C0050EBC (Crashdump_UsbDevice_SendEnableSlotCommand.c)
 *     Crashdump_UsbDevice_SendResetDeviceCommand @ 0x1C0050F78 (Crashdump_UsbDevice_SendResetDeviceCommand.c)
 * Callees:
 *     Crashdump_EventRing_Poll @ 0x1C004E500 (Crashdump_EventRing_Poll.c)
 */

__int64 __fastcall Crashdump_Command_SendCommand(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v6; // r8d
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r9d
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_SendCommand: begin\n");
  v7 = *(_OWORD **)(a1 + 48);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 12) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 56) != 1);
  *v7 = *(_OWORD *)a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL) ^= (*(_DWORD *)(a1 + 56) ^ *(_DWORD *)(*(_QWORD *)(a1 + 48) + 28LL)) & 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 12LL) ^= 1u;
  _InterlockedOr(v14, 0);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) == 0;
  **(_DWORD **)(**(_QWORD **)(a1 + 8) + 48LL) = 0;
  _InterlockedOr(v14, 0);
  v8 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 584LL) || (v9 = 200LL, *(_BYTE *)(v8 + 624)) )
    v9 = 72LL;
  v10 = Crashdump_EventRing_Poll(
          v9 + v8,
          33,
          v6,
          a1,
          (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Command_EventRingCallback);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *(unsigned __int8 *)(a1 + 71);
    LODWORD(v15) = *(unsigned __int8 *)(a1 + 75);
    if ( (_BYTE)v12 == 1 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Command Completion event: Completion code: %u, slotId: %u\n");
      if ( a3 )
        *a3 = *(_OWORD *)(a1 + 60);
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Command failed, completion code: %u, slotId: %u\n", v12, v15);
      v11 = -1073741823;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive Event TRB, status 0x%X\n", v10);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_SendCommand: end 0x%X\n", v11);
  return v11;
}
