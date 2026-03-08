/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004BD00
 * Callers:
 *     Etw_DeviceUpdate @ 0x1C001D724 (Etw_DeviceUpdate.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C001F980 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00533E4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (unsigned __int64)(a2 + 11);
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
