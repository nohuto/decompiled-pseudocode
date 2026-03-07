__int64 __fastcall wil::details::RtlDisownModuleHeapAllocation(wil::details *this, void *a2, void *a3)
{
  FARPROC ProcAddress; // rax
  unsigned int v4; // ebx
  HMODULE NtDllModuleHandle; // rax

  ProcAddress = (FARPROC)`wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation;
  v4 = 0;
  if ( `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(wil::details *, void *, void *))ProcAddress)(this, a2, a3);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlDisownModuleHeapAllocation");
  `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((unsigned int (__fastcall *)(wil::details *, void *, void *))ProcAddress)(this, a2, a3);
  return v4;
}
