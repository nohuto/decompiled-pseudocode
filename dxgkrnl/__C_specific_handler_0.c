/*
 * XREFs of __C_specific_handler_0 @ 0x1C002437D
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1C0027034 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
EXCEPTION_DISPOSITION __cdecl _C_specific_handler_0(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}
