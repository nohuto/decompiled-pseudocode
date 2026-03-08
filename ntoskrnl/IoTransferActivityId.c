/*
 * XREFs of IoTransferActivityId @ 0x1403BD120
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x1403BD158 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteEx(IoTraceHandle, &IoTrace_ActivityIdTransfer, 0LL, 0, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
