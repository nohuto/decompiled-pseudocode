NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        _MCGEN_TRACE_CONTEXT *Descriptor,
        const _EVENT_DESCRIPTOR *ActivityId,
        const _GUID *EventDataCount,
        ULONG EventData,
        _EVENT_DATA_DESCRIPTOR *Context)
{
  unsigned __int16 *Logger; // r10
  unsigned int v6; // eax
  unsigned int v8; // r9d

  Logger = (unsigned __int16 *)KMDF_PERF_PROVIDER_Context.Logger;
  v6 = 0;
  if ( KMDF_PERF_PROVIDER_Context.Logger )
  {
    Context->Ptr = KMDF_PERF_PROVIDER_Context.Logger;
    v6 = 2;
    v8 = *Logger;
  }
  else
  {
    Context->Ptr = 0LL;
    v8 = 0;
  }
  Context->Size = v8;
  Context->Reserved = v6;
  return EtwWriteTransfer(
           KMDF_PERF_PROVIDER_Context.RegistrationHandle,
           ActivityId,
           EventDataCount,
           0LL,
           EventData,
           Context);
}
