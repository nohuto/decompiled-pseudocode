/*
 * XREFs of capture_previous_context @ 0x18010E518
 * Callers:
 *     __report_gsfailure @ 0x18010E440 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

struct _RUNTIME_FUNCTION *__fastcall capture_previous_context(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rsi
  int i; // edi
  struct _RUNTIME_FUNCTION *result; // rax
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+70h] [rbp+18h] BYREF

  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  for ( i = 0; i < 2; ++i )
  {
    result = RtlLookupFunctionEntry(Rip, &ImageBase, 0LL);
    if ( !result )
      break;
    result = (struct _RUNTIME_FUNCTION *)RtlVirtualUnwind(
                                           0,
                                           ImageBase,
                                           Rip,
                                           result,
                                           ContextRecord,
                                           &HandlerData,
                                           &EstablisherFrame,
                                           0LL);
  }
  return result;
}
