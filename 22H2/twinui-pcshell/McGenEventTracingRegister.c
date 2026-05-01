/*
 * XREFs of McGenEventTracingRegister @ 0x18014E180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall McGenEventTracingRegister(
        LPCGUID ControlGuid,
        ULONG (__stdcall *a2)(WMIDPREQUESTCODE RequestCode, PVOID RequestContext, ULONG *BufferSize, PVOID Buffer),
        void *a3,
        _QWORD *a4)
{
  unsigned int v4; // ebx
  int v10; // esi
  HMODULE ModuleHandleW; // rdi
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-178h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-168h] BYREF

  v4 = 0;
  if ( !a4 )
    return 87LL;
  if ( *a4 )
    return v4;
  v10 = 0;
  if ( !McGenTracingSupportInit )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( GetVersionExW(&VersionInformation) )
    {
      McGenPreVista = VersionInformation.dwMajorVersion < 6;
      if ( VersionInformation.dwMajorVersion > 6
        || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 )
      {
        v10 = 1;
      }
      if ( VersionInformation.dwMajorVersion < 6 )
        goto LABEL_19;
    }
    ModuleHandleW = GetModuleHandleW(L"advapi32.dll");
    if ( ModuleHandleW || v10 && (ModuleHandleW = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0LL )
    {
      PfnEventWrite = (__int64)GetProcAddress(ModuleHandleW, "EventWrite");
      if ( PfnEventWrite )
      {
        PfnEventRegister = (__int64 (__fastcall *)(LPCGUID))GetProcAddress(ModuleHandleW, "EventRegister");
        if ( PfnEventRegister )
        {
          PfnEventUnregister = (__int64)GetProcAddress(ModuleHandleW, "EventUnregister");
          if ( PfnEventUnregister )
            goto LABEL_19;
        }
        PfnEventRegister = McGenEventTracingRegister;
      }
    }
    McGenPreVista = 1;
LABEL_19:
    McGenTracingSupportInit = 1;
  }
  if ( !McGenPreVista )
  {
    if ( !a2 )
      a2 = (ULONG (__stdcall *)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID))McGenControlCallbackV2;
    return (unsigned int)((__int64 (__fastcall *)(LPCGUID, ULONG (__stdcall *)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID), void *, _QWORD *))PfnEventRegister)(
                           ControlGuid,
                           a2,
                           a3,
                           a4);
  }
  if ( a3 )
  {
    if ( !a2 )
      a2 = (ULONG (__stdcall *)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID))McGenControlCallback;
    *a4 = a3;
    TraceGuidReg.Guid = ControlGuid;
    TraceGuidReg.RegHandle = 0LL;
    return RegisterTraceGuidsW(a2, a3, ControlGuid, 1u, &TraceGuidReg, 0LL, 0LL, (PTRACEHANDLE)a3);
  }
  return 87;
}
