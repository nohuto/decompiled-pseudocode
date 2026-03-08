/*
 * XREFs of __scrt_fastfail @ 0x18010F204
 * Callers:
 *     __scrt_initialize_onexit_tables @ 0x18010E788 (__scrt_initialize_onexit_tables.c)
 *     dllmain_crt_process_attach @ 0x18010E9E8 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x18010EB10 (dllmain_crt_process_detach.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18010ED70 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __crt_debugger_hook @ 0x18010F1F4 (__crt_debugger_hook.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

void __fastcall _scrt_fastfail(unsigned int a1)
{
  ULONG64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v3; // rax
  bool v4; // bl
  _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v6[4]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD64 v7; // [rsp+60h] [rbp-A0h]
  CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v10; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a1);
  _crt_debugger_hook();
  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v3 )
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v10;
  memset_0(v6, 0, 0x98uLL);
  v7 = retaddr;
  v6[0] = 1073741845;
  v6[1] = 1;
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(0LL);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v4 )
    _crt_debugger_hook();
}
