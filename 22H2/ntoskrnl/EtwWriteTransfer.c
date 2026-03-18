/*
 * XREFs of EtwWriteTransfer @ 0x14034DC10
 * Callers:
 *     FlushEventEntryList @ 0x1408802E8 (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}
