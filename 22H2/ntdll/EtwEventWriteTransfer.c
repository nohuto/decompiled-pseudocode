/*
 * XREFs of EtwEventWriteTransfer @ 0x180050340
 * Callers:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AEBC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180050388 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           RegHandle,
           (_DWORD)EventDescriptor,
           0,
           0,
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
