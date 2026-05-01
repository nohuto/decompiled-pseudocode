/*
 * XREFs of AutoRegisterMicrosoft_Windows_Deplorch @ 0x18014DE1C
 * Callers:
 *     ??0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z @ 0x18008F2A0 (--0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void AutoRegisterMicrosoft_Windows_Deplorch()
{
  int v0; // edi
  HMODULE ModuleHandleW; // rbx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-148h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-138h] BYREF

  if ( !Microsoft_Windows_Deplorch_Context )
  {
    v0 = 0;
    if ( McGenTracingSupportInit )
      goto LABEL_18;
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation) )
      goto LABEL_9;
    McGenPreVista = VersionInformation.dwMajorVersion < 6;
    if ( VersionInformation.dwMajorVersion > 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 )
    {
      v0 = 1;
    }
    if ( VersionInformation.dwMajorVersion >= 6 )
    {
LABEL_9:
      ModuleHandleW = GetModuleHandleW(L"advapi32.dll");
      if ( ModuleHandleW || v0 && (ModuleHandleW = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0LL )
      {
        PfnEventWrite = (__int64)GetProcAddress(ModuleHandleW, "EventWrite");
        if ( PfnEventWrite )
        {
          PfnEventRegister = (__int64 (__fastcall *)(LPCGUID))GetProcAddress(ModuleHandleW, "EventRegister");
          if ( PfnEventRegister )
          {
            PfnEventUnregister = (__int64)GetProcAddress(ModuleHandleW, "EventUnregister");
            if ( PfnEventUnregister )
              goto LABEL_17;
          }
          PfnEventRegister = McGenEventTracingRegister;
        }
      }
      McGenPreVista = 1;
    }
LABEL_17:
    McGenTracingSupportInit = 1;
LABEL_18:
    if ( McGenPreVista )
    {
      TraceGuidReg.RegHandle = 0LL;
      Microsoft_Windows_Deplorch_Context = (ULONG64)&Microsoft_Windows_Deplorch_Context;
      TraceGuidReg.Guid = &Microsoft_Windows_Deplorch;
      RegisterTraceGuidsW(
        McGenControlCallback,
        &Microsoft_Windows_Deplorch_Context,
        &Microsoft_Windows_Deplorch,
        1u,
        &TraceGuidReg,
        0LL,
        0LL,
        &Microsoft_Windows_Deplorch_Context);
    }
    else
    {
      ((void (__fastcall *)(const GUID *, void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID), ULONG64 *, ULONG64 *))PfnEventRegister)(
        &Microsoft_Windows_Deplorch,
        McGenControlCallbackV2,
        &Microsoft_Windows_Deplorch_Context,
        &Microsoft_Windows_Deplorch_Context);
    }
  }
}
