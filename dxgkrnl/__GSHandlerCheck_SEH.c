/*
 * XREFs of __GSHandlerCheck_SEH @ 0x1C0027034
 * Callers:
 *     <none>
 * Callees:
 *     __C_specific_handler_0 @ 0x1C002437D (__C_specific_handler_0.c)
 *     __GSHandlerCheckCommon @ 0x1C0026FCC (__GSHandlerCheckCommon.c)
 */

EXCEPTION_DISPOSITION __fastcall _GSHandlerCheck_SEH(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  char *v8; // rbx
  EXCEPTION_DISPOSITION result; // eax

  v8 = (char *)DispatcherContext->HandlerData + 16 * *(unsigned int *)DispatcherContext->HandlerData;
  _GSHandlerCheckCommon((__int64)EstablisherFrame, (__int64)DispatcherContext);
  result = ExceptionContinueSearch;
  if ( ((((ExceptionRecord->ExceptionFlags & 0x66) != 0) + 1) & *((_DWORD *)v8 + 1)) != 0 )
    return _C_specific_handler_0(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
  return result;
}
