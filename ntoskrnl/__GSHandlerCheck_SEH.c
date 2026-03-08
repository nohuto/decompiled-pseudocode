/*
 * XREFs of __GSHandlerCheck_SEH @ 0x140411A40
 * Callers:
 *     <none>
 * Callees:
 *     __C_specific_handler @ 0x1403D2190 (__C_specific_handler.c)
 *     __GSHandlerCheckCommon @ 0x1403D7CF8 (__GSHandlerCheckCommon.c)
 */

EXCEPTION_DISPOSITION __fastcall _GSHandlerCheck_SEH(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  __int64 v8; // rbx
  EXCEPTION_DISPOSITION result; // eax

  v8 = *((_QWORD *)DispatcherContext + 7) + 16LL * **((unsigned int **)DispatcherContext + 7);
  _GSHandlerCheckCommon((__int64)EstablisherFrame, (__int64)DispatcherContext);
  result = ExceptionContinueSearch;
  if ( ((((ExceptionRecord->ExceptionFlags & 0x66) != 0) + 1) & *(_DWORD *)(v8 + 4)) != 0 )
    return _C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
  return result;
}
